/*
==============
R_AddCmdProjectionSet2D
==============
*/

void R_AddCmdProjectionSet2D(void)
{
  ?R_AddCmdProjectionSet2D@@YAXXZ();
}

/*
==============
R_AddCmdDrawTextWithCursor
==============
*/

void __fastcall R_AddCmdDrawTextWithCursor(const char *text, int maxChars, GfxFont *font, Material *fontMaterial, const int fontHeight, float x, float y, float xScale, float yScale, char tracking, float rotation, const vec4_t *color, const FontGlowStyle *glowStyle, bool usePost, int cursorPos, char cursor, int allowGPadColor, int allowGPadAnySize, Material *iconsMaterial)
{
  ?R_AddCmdDrawTextWithCursor@@YAXPEBDHPEAUGfxFont@@PEAUMaterial@@HMMMMDMAEBTvec4_t@@PEBUFontGlowStyle@@_NHDHH2@Z(text, maxChars, font, fontMaterial, fontHeight, x, y, xScale, yScale, tracking, rotation, color, glowStyle, usePost, cursorPos, cursor, allowGPadColor, allowGPadAnySize, iconsMaterial);
}

/*
==============
R_BeginClientCmdList2D
==============
*/

void R_BeginClientCmdList2D(void)
{
  ?R_BeginClientCmdList2D@@YAXXZ();
}

/*
==============
R_ClearClientCmdList2D
==============
*/

void R_ClearClientCmdList2D(void)
{
  ?R_ClearClientCmdList2D@@YAXXZ();
}

/*
==============
R_AddCmdClearSecondUIMask
==============
*/

void R_AddCmdClearSecondUIMask(void)
{
  ?R_AddCmdClearSecondUIMask@@YAXXZ();
}

/*
==============
R_AddCmdDrawText3DUI
==============
*/

void __fastcall R_AddCmdDrawText3DUI(const char *text, GfxFont *font, Material *fontMaterial, const int fontHeight, const vec3_t *points, float xScale, float yScale, char tracking, const vec4_t *color, const FontDecodeStyle *decodeStyle, const FontGlowStyle *glowStyle, Material *iconsMaterial)
{
  ?R_AddCmdDrawText3DUI@@YAXPEBDPEAUGfxFont@@PEAUMaterial@@HPEBTvec3_t@@MMDAEBTvec4_t@@PEBUFontDecodeStyle@@PEBUFontGlowStyle@@2@Z(text, font, fontMaterial, fontHeight, points, xScale, yScale, tracking, color, decodeStyle, glowStyle, iconsMaterial);
}

/*
==============
R_CheckReserveBuffers
==============
*/

int __fastcall R_CheckReserveBuffers(GfxCmdBufState *state)
{
  return ?R_CheckReserveBuffers@@YAHPEAUGfxCmdBufState@@@Z(state);
}

/*
==============
R_AddCmdSetFirstUIMask
==============
*/

void __fastcall R_AddCmdSetFirstUIMask(float maskX, float maskY, float maskWidth, float maskHeight, float maskRotation, float alphaScale, float alphaOffset, float maskUMin, float maskVMin, float maskUMax, float maskVMax, const vec2_t *viewportSize, GfxImage *image)
{
  ?R_AddCmdSetFirstUIMask@@YAXMMMMMMMMMMMAEBTvec2_t@@PEAUGfxImage@@@Z(maskX, maskY, maskWidth, maskHeight, maskRotation, alphaScale, alphaOffset, maskUMin, maskVMin, maskUMax, maskVMax, viewportSize, image);
}

/*
==============
R_AddCmdSetScissorRect
==============
*/

void __fastcall R_AddCmdSetScissorRect(int x, int y, int width, int height)
{
  ?R_AddCmdSetScissorRect@@YAXHHHH@Z(x, y, width, height);
}

/*
==============
R_InitConstantBufferInfoState
==============
*/

void __fastcall R_InitConstantBufferInfoState(GfxConstantBufferAllocations *constantBufferAllocations, GfxConstantBufferInfo *info, const unsigned int reserveSize)
{
  ?R_InitConstantBufferInfoState@@YAXPEAUGfxConstantBufferAllocations@@PEAUGfxConstantBufferInfo@@I@Z(constantBufferAllocations, info, reserveSize);
}

/*
==============
R_AddCmdDrawText
==============
*/

void __fastcall R_AddCmdDrawText(const char *text, int maxChars, GfxFont *font, const int fontHeight, float x, float y, float xScale, float yScale, float rotation, const vec4_t *color, const FontGlowStyle *glowStyle, bool usePost)
{
  ?R_AddCmdDrawText@@YAXPEBDHPEAUGfxFont@@HMMMMMAEBTvec4_t@@PEBUFontGlowStyle@@_N@Z(text, maxChars, font, fontHeight, x, y, xScale, yScale, rotation, color, glowStyle, usePost);
}

/*
==============
R_GetMultiLightGridFXLightingWorldBuffers
==============
*/

GfxMultiLightGridFXLightingBuffers *__fastcall R_GetMultiLightGridFXLightingWorldBuffers(int frameIndex, int codeMesh)
{
  return ?R_GetMultiLightGridFXLightingWorldBuffers@@YAPEAUGfxMultiLightGridFXLightingBuffers@@HH@Z(frameIndex, codeMesh);
}

/*
==============
R_AddCmdClearScreenSlow
==============
*/

void __fastcall R_AddCmdClearScreenSlow(int whichToClear, const vec4_t *color, float depth, unsigned __int8 stencil)
{
  ?R_AddCmdClearScreenSlow@@YAXHAEBTvec4_t@@ME@Z(whichToClear, color, depth, stencil);
}

/*
==============
R_MultiLightGridFXLighting_InitWorld
==============
*/

void R_MultiLightGridFXLighting_InitWorld(void)
{
  ?R_MultiLightGridFXLighting_InitWorld@@YAXXZ();
}

/*
==============
R_ReleaseThreadOwnership
==============
*/

void R_ReleaseThreadOwnership(void)
{
  ?R_ReleaseThreadOwnership@@YAXXZ();
}

/*
==============
R_UpdateFrontEndDvarOptions_Splitscreen
==============
*/

void __fastcall R_UpdateFrontEndDvarOptions_Splitscreen(bool splitscreen)
{
  ?R_UpdateFrontEndDvarOptions_Splitscreen@@YAX_N@Z(splitscreen);
}

/*
==============
R_AddCmdDrawTriangles2D
==============
*/

void __fastcall R_AddCmdDrawTriangles2D(Material *materialHandle, MaterialTechniqueType techType, unsigned __int16 indexCount, const unsigned __int16 *indices, unsigned __int16 vertexCount, const vec4_t *xyzw, const vec3_t *normal, const GfxColor color, const vec2_t *st)
{
  ?R_AddCmdDrawTriangles2D@@YAXPEAUMaterial@@W4MaterialTechniqueType@@GQEBGGQEBTvec4_t@@PEBTvec3_t@@TGfxColor@@PEBTvec2_t@@@Z(materialHandle, techType, indexCount, indices, vertexCount, xyzw, normal, color, st);
}

/*
==============
R_ShutdownConstantBufferInfoState
==============
*/

void __fastcall R_ShutdownConstantBufferInfoState(GfxConstantBufferAllocations *constantBufferAllocations)
{
  ?R_ShutdownConstantBufferInfoState@@YAXPEAUGfxConstantBufferAllocations@@@Z(constantBufferAllocations);
}

/*
==============
R_AllocateConstantBufferBegin
==============
*/

GfxConstantBufferDesc *__fastcall R_AllocateConstantBufferBegin(GfxConstantBufferDesc *result, CmdBufState *state, GfxConstantBufferBinding binding, unsigned int size)
{
  return ?R_AllocateConstantBufferBegin@@YA?AUGfxConstantBufferDesc@@PEAUCmdBufState@@W4GfxConstantBufferBinding@@I@Z(result, state, binding, size);
}

/*
==============
R_GetCommandBufferInternal
==============
*/

void *__fastcall R_GetCommandBufferInternal(const GfxRenderCommand renderCmd, const unsigned __int64 bytes, const unsigned __int64 alignment)
{
  return ?R_GetCommandBufferInternal@@YAPEAXW4GfxRenderCommand@@_K1@Z(renderCmd, bytes, alignment);
}

/*
==============
R_SkinCacheReachedCorpseThreshold
==============
*/

int __fastcall R_SkinCacheReachedCorpseThreshold()
{
  return ?R_SkinCacheReachedCorpseThreshold@@YAHXZ();
}

/*
==============
R_PIP_ToggleSmpFrame
==============
*/

void __fastcall R_PIP_ToggleSmpFrame(LocalClientNum_t localClientNum)
{
  ?R_PIP_ToggleSmpFrame@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
R_FlushConstantBufferInfo
==============
*/

void __fastcall R_FlushConstantBufferInfo(GfxConstantBufferInfo *info)
{
  ?R_FlushConstantBufferInfo@@YAXPEAUGfxConstantBufferInfo@@@Z(info);
}

/*
==============
R_IssueRenderCommandsEnd
==============
*/

void R_IssueRenderCommandsEnd(void)
{
  ?R_IssueRenderCommandsEnd@@YAXXZ();
}

/*
==============
R_PreAbortRenderCommands
==============
*/

void R_PreAbortRenderCommands(void)
{
  ?R_PreAbortRenderCommands@@YAXXZ();
}

/*
==============
R_AbortCommandBuffers
==============
*/

void R_AbortCommandBuffers(void)
{
  ?R_AbortCommandBuffers@@YAXXZ();
}

/*
==============
R_AddCmdDrawMouseCursor
==============
*/

void __fastcall R_AddCmdDrawMouseCursor(float width, float height, const vec4_t *color, Material *material, int controllerIndex)
{
  ?R_AddCmdDrawMouseCursor@@YAXMMAEBTvec4_t@@PEAUMaterial@@H@Z(width, height, color, material, controllerIndex);
}

/*
==============
R_ResetGlobalViews
==============
*/

void R_ResetGlobalViews(void)
{
  ?R_ResetGlobalViews@@YAXXZ();
}

/*
==============
R_BeginSharedCmdList
==============
*/

void R_BeginSharedCmdList(void)
{
  ?R_BeginSharedCmdList@@YAXXZ();
}

/*
==============
R_AbortRenderCommands
==============
*/

void R_AbortRenderCommands(void)
{
  ?R_AbortRenderCommands@@YAXXZ();
}

/*
==============
R_AddCmdDrawTriangles2D
==============
*/

void __fastcall R_AddCmdDrawTriangles2D(Material *materialHandle, MaterialTechniqueType techType, unsigned __int16 indexCount, const unsigned __int16 *indices, unsigned __int16 vertexCount, const vec4_t *xyzw, const vec3_t *normal, const unsigned __int8 (*color)[4], const vec2_t *st)
{
  ?R_AddCmdDrawTriangles2D@@YAXPEAUMaterial@@W4MaterialTechniqueType@@GQEBGGQEBTvec4_t@@PEBTvec3_t@@PEAY03$$CBEPEBTvec2_t@@@Z(materialHandle, techType, indexCount, indices, vertexCount, xyzw, normal, color, st);
}

/*
==============
R_AddCmdSetUICalibrationSwatchColor
==============
*/

void __fastcall R_AddCmdSetUICalibrationSwatchColor(const vec4_t *color)
{
  ?R_AddCmdSetUICalibrationSwatchColor@@YAXAEBTvec4_t@@@Z(color);
}

/*
==============
R_AddCmdUISetCodeSampler
==============
*/

void __fastcall R_AddCmdUISetCodeSampler(unsigned __int16 sampler, bool singleChannel)
{
  ?R_AddCmdUISetCodeSampler@@YAXG_N@Z(sampler, singleChannel);
}

/*
==============
R_AddCmdSetUIPixelGrid
==============
*/

void __fastcall R_AddCmdSetUIPixelGrid(const unsigned __int8 blockWidth, const unsigned __int8 blockHeight, const unsigned __int8 gutterWidth, const unsigned __int8 gutterHeight, const float contrast)
{
  ?R_AddCmdSetUIPixelGrid@@YAXEEEEM@Z(blockWidth, blockHeight, gutterWidth, gutterHeight, contrast);
}

/*
==============
R_AddCmdDrawPoints3D
==============
*/

void __fastcall R_AddCmdDrawPoints3D(unsigned __int16 pointCount, unsigned __int8 size, const GfxPointVertex *verts)
{
  ?R_AddCmdDrawPoints3D@@YAXGEQEBUGfxPointVertex@@@Z(pointCount, size, verts);
}

/*
==============
R_AddCmdDrawTextInSpace
==============
*/

void __fastcall R_AddCmdDrawTextInSpace(const char *text, GfxFont *font, const float size, const vec3_t *org, const vec3_t *xDir, const vec3_t *yDir, const vec4_t *color)
{
  ?R_AddCmdDrawTextInSpace@@YAXPEBDPEAUGfxFont@@MAEBTvec3_t@@22AEBTvec4_t@@@Z(text, font, size, org, xDir, yDir, color);
}

/*
==============
R_ResetCollectionVisibilityCache
==============
*/

void R_ResetCollectionVisibilityCache(void)
{
  ?R_ResetCollectionVisibilityCache@@YAXXZ();
}

/*
==============
R_AllocateConstantBufferEnd
==============
*/

void __fastcall R_AllocateConstantBufferEnd(CmdBufState *state, const GfxConstantBufferDesc *cbuff)
{
  ?R_AllocateConstantBufferEnd@@YAXPEAUCmdBufState@@AEBUGfxConstantBufferDesc@@@Z(state, cbuff);
}

/*
==============
R_AddCmdDrawLines3D
==============
*/

void __fastcall R_AddCmdDrawLines3D(unsigned __int16 lineCount, unsigned __int8 width, bool depthTest, const GfxPointVertex *verts, bool doTransform, const vec3_t *position, const vec3_t *angles)
{
  ?R_AddCmdDrawLines3D@@YAXGE_NQEBUGfxPointVertex@@0Tvec3_t@@2@Z(lineCount, width, depthTest, verts, doTransform, position, angles);
}

/*
==============
R_AddCmdSetUIColorMatrix
==============
*/

void __fastcall R_AddCmdSetUIColorMatrix(const tmat33_t<vec3_t> *matrix)
{
  ?R_AddCmdSetUIColorMatrix@@YAXPEBT?$tmat33_t@Tvec3_t@@@@@Z(matrix);
}

/*
==============
R_AddCmdProjectionSet3D
==============
*/

void R_AddCmdProjectionSet3D(void)
{
  ?R_AddCmdProjectionSet3D@@YAXXZ();
}

/*
==============
R_AddCmdSetCodeTexture
==============
*/

void __fastcall R_AddCmdSetCodeTexture(unsigned int constant, const GfxImage *image)
{
  ?R_AddCmdSetCodeTexture@@YAXIPEBUGfxImage@@@Z(constant, image);
}

/*
==============
R_InitFrontEndDvars
==============
*/

void R_InitFrontEndDvars(void)
{
  ?R_InitFrontEndDvars@@YAXXZ();
}

/*
==============
R_TrySortMaterialsNoSync
==============
*/

void R_TrySortMaterialsNoSync(void)
{
  ?R_TrySortMaterialsNoSync@@YAXXZ();
}

/*
==============
R_AddCmdSaveScreenSection
==============
*/

void __fastcall R_AddCmdSaveScreenSection(float viewX, float viewY, float viewWidth, float viewHeight, int clientID)
{
  ?R_AddCmdSaveScreenSection@@YAXMMMMH@Z(viewX, viewY, viewWidth, viewHeight, clientID);
}

/*
==============
R_BeginClientCmdList2D
==============
*/

void __fastcall R_BeginClientCmdList2D(const GfxClientCmdListType list)
{
  ?R_BeginClientCmdList2D@@YAXW4GfxClientCmdListType@@@Z(list);
}

/*
==============
R_AddCmdBlendSavedScreenShockPhoto
==============
*/

void __fastcall R_AddCmdBlendSavedScreenShockPhoto(float intensityScreengrab, float viewX, float viewY, float viewWidth, float viewHeight, int clientID)
{
  ?R_AddCmdBlendSavedScreenShockPhoto@@YAXMMMMMH@Z(intensityScreengrab, viewX, viewY, viewWidth, viewHeight, clientID);
}

/*
==============
R_AddCmdSetUIColorOp
==============
*/

void __fastcall R_AddCmdSetUIColorOp(const unsigned __int8 op, const float param)
{
  ?R_AddCmdSetUIColorOp@@YAXEM@Z(op, param);
}

/*
==============
R_EndFrameConstantBufferInfo
==============
*/

void __fastcall R_EndFrameConstantBufferInfo(GfxConstantBufferInfo *info, unsigned __int64 fence)
{
  ?R_EndFrameConstantBufferInfo@@YAXPEAUGfxConstantBufferInfo@@_K@Z(info, fence);
}

/*
==============
R_BeginFrame
==============
*/

void R_BeginFrame(void)
{
  ?R_BeginFrame@@YAXXZ();
}

/*
==============
R_CheckReserveConstantBuffer
==============
*/

int __fastcall R_CheckReserveConstantBuffer(GfxCmdBufState *state)
{
  return ?R_CheckReserveConstantBuffer@@YAHPEAUGfxCmdBufState@@@Z(state);
}

/*
==============
R_AddCmdDrawTriangles3D
==============
*/

void __fastcall R_AddCmdDrawTriangles3D(Material *materialHandle, MaterialTechniqueType techType, unsigned __int16 indexCount, const unsigned __int16 *indices, unsigned __int16 vertexCount, const vec4_t *xyzw, const vec3_t *normal, const unsigned __int8 (*color)[4], const vec2_t *st)
{
  ?R_AddCmdDrawTriangles3D@@YAXPEAUMaterial@@W4MaterialTechniqueType@@GQEBGGQEBTvec4_t@@PEBTvec3_t@@PEAY03$$CBEPEBTvec2_t@@@Z(materialHandle, techType, indexCount, indices, vertexCount, xyzw, normal, color, st);
}

/*
==============
R_AddCmdDrawTriangles3D
==============
*/

void __fastcall R_AddCmdDrawTriangles3D(Material *materialHandle, MaterialTechniqueType techType, unsigned __int16 indexCount, const unsigned __int16 *indices, unsigned __int16 vertexCount, const vec4_t *xyzw, const vec3_t *normal, const unsigned __int8 (*color)[4], const vec2_t *st, bool doTransform, const vec3_t *position, const vec3_t *angles)
{
  ?R_AddCmdDrawTriangles3D@@YAXPEAUMaterial@@W4MaterialTechniqueType@@GQEBGGQEBTvec4_t@@PEBTvec3_t@@PEAY03$$CBEPEBTvec2_t@@_NT4@8@Z(materialHandle, techType, indexCount, indices, vertexCount, xyzw, normal, color, st, doTransform, position, angles);
}

/*
==============
R_SetInputWorldDefaults
==============
*/

void __fastcall R_SetInputWorldDefaults(GfxCmdBufInput *input)
{
  ?R_SetInputWorldDefaults@@YAXPEAUGfxCmdBufInput@@@Z(input);
}

/*
==============
R_CopyViewInfoInternal
==============
*/

void __fastcall R_CopyViewInfoInternal(GfxViewInfo *outViewInfo, const GfxViewInfo *viewInfo, const char *fileAndLine)
{
  ?R_CopyViewInfoInternal@@YAXPEAUGfxViewInfo@@PEBU1@PEBD@Z(outViewInfo, viewInfo, fileAndLine);
}

/*
==============
R_AddCmdDrawStretchPicRotateXY
==============
*/

void __fastcall R_AddCmdDrawStretchPicRotateXY(float x, float y, float w, float h, float s0, float t0, float s1, float t1, float angle, bool pivotTopLeft, bool applyPixelAspect, const vec4_t *color, Material *material)
{
  ?R_AddCmdDrawStretchPicRotateXY@@YAXMMMMMMMMM_N0AEBTvec4_t@@PEAUMaterial@@@Z(x, y, w, h, s0, t0, s1, t1, angle, pivotTopLeft, applyPixelAspect, color, material);
}

/*
==============
R_InitRenderBuffers
==============
*/

void R_InitRenderBuffers(void)
{
  ?R_InitRenderBuffers@@YAXXZ();
}

/*
==============
R_AddCmdDrawLines3D
==============
*/

void __fastcall R_AddCmdDrawLines3D(unsigned __int16 lineCount, unsigned __int8 width, bool depthTest, const GfxPointVertex *verts)
{
  ?R_AddCmdDrawLines3D@@YAXGE_NQEBUGfxPointVertex@@@Z(lineCount, width, depthTest, verts);
}

/*
==============
R_AddCmdDrawStretchPicFlipST
==============
*/

void __fastcall R_AddCmdDrawStretchPicFlipST(float x, float y, float w, float h, float s0, float t0, float s1, float t1, const vec4_t *color, Material *material)
{
  ?R_AddCmdDrawStretchPicFlipST@@YAXMMMMMMMMAEBTvec4_t@@PEAUMaterial@@@Z(x, y, w, h, s0, t0, s1, t1, color, material);
}

/*
==============
R_AddCmdDrawPoints2D
==============
*/

void __fastcall R_AddCmdDrawPoints2D(unsigned __int16 pointCount, unsigned __int8 size, const GfxPointVertex *verts)
{
  ?R_AddCmdDrawPoints2D@@YAXGEQEBUGfxPointVertex@@@Z(pointCount, size, verts);
}

/*
==============
R_TriggerSunShadowCacheFlush
==============
*/

void R_TriggerSunShadowCacheFlush(void)
{
  ?R_TriggerSunShadowCacheFlush@@YAXXZ();
}

/*
==============
R_AddCmdDrawTextWithEffects
==============
*/

void __fastcall R_AddCmdDrawTextWithEffects(const char *text, int maxChars, GfxFont *font, Material *fontMaterial, const int fontHeight, float x, float y, float xScale, float yScale, char tracking, float rotation, const vec4_t *color, const FontDecodeStyle *decodeStyle, const FontGlowStyle *glowStyle, bool usePost, Material *iconsMaterial, bool tintIcons)
{
  ?R_AddCmdDrawTextWithEffects@@YAXPEBDHPEAUGfxFont@@PEAUMaterial@@HMMMMDMAEBTvec4_t@@PEBUFontDecodeStyle@@PEBUFontGlowStyle@@_N26@Z(text, maxChars, font, fontMaterial, fontHeight, x, y, xScale, yScale, tracking, rotation, color, decodeStyle, glowStyle, usePost, iconsMaterial, tintIcons);
}

/*
==============
R_AddCmdDrawStretchPic
==============
*/

void __fastcall R_AddCmdDrawStretchPic(float x, float y, float w, float h, float s0, float t0, float s1, float t1, const vec4_t *color, Material *material)
{
  ?R_AddCmdDrawStretchPic@@YAXMMMMMMMMAEBTvec4_t@@PEAUMaterial@@@Z(x, y, w, h, s0, t0, s1, t1, color, material);
}

/*
==============
R_AddCmdEndOfList
==============
*/

void R_AddCmdEndOfList(void)
{
  ?R_AddCmdEndOfList@@YAXXZ();
}

/*
==============
R_AddCmdBlendSavedScreenShockFlashed
==============
*/

void __fastcall R_AddCmdBlendSavedScreenShockFlashed(float intensityWhiteout, float intensityScreengrab, float viewX, float viewY, float viewWidth, float viewHeight, int clientID)
{
  ?R_AddCmdBlendSavedScreenShockFlashed@@YAXMMMMMMH@Z(intensityWhiteout, intensityScreengrab, viewX, viewY, viewWidth, viewHeight, clientID);
}

/*
==============
R_IssueRenderCommandsOpaque
==============
*/

void R_IssueRenderCommandsOpaque(void)
{
  ?R_IssueRenderCommandsOpaque@@YAXXZ();
}

/*
==============
R_Async2D_Render
==============
*/

void __fastcall R_Async2D_Render(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, GfxBackEndData *gfxData, const GfxAsync2DRenderResources *resources, const bool receivePPFX)
{
  ?R_Async2D_Render@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@PEAUGfxBackEndData@@AEBUGfxAsync2DRenderResources@@_N@Z(gfxContext, viewInfo, gfxData, resources, receivePPFX);
}

/*
==============
R_InitConstantBufferInfo_Linear
==============
*/

void __fastcall R_InitConstantBufferInfo_Linear(GfxConstantBufferInfo *info, unsigned int size, unsigned int pageSize)
{
  ?R_InitConstantBufferInfo_Linear@@YAXPEAUGfxConstantBufferInfo@@II@Z(info, size, pageSize);
}

/*
==============
R_IssueRenderCommandsEmissive
==============
*/

void R_IssueRenderCommandsEmissive(void)
{
  ?R_IssueRenderCommandsEmissive@@YAXXZ();
}

/*
==============
R_InitCachedShadowBuffers
==============
*/

void R_InitCachedShadowBuffers(void)
{
  ?R_InitCachedShadowBuffers@@YAXXZ();
}

/*
==============
R_AddCmdUISetScopeIndex
==============
*/

void __fastcall R_AddCmdUISetScopeIndex(int index, bool applyScopeBufferWeight)
{
  ?R_AddCmdUISetScopeIndex@@YAXH_N@Z(index, applyScopeBufferWeight);
}

/*
==============
R_InitRenderCommands
==============
*/

void R_InitRenderCommands(void)
{
  ?R_InitRenderCommands@@YAXXZ();
}

/*
==============
R_AddCmdUIRttBegin
==============
*/

void __fastcall R_AddCmdUIRttBegin(unsigned int rttHandle)
{
  ?R_AddCmdUIRttBegin@@YAXI@Z(rttHandle);
}

/*
==============
R_ShutdownRenderCommands
==============
*/

void R_ShutdownRenderCommands(void)
{
  ?R_ShutdownRenderCommands@@YAXXZ();
}

/*
==============
R_AddCmdDrawTriangles_Split
==============
*/

void __fastcall R_AddCmdDrawTriangles_Split(Material *materialHandle, MaterialTechniqueType techType, unsigned __int8 dimensions, unsigned __int16 indexCount, const unsigned __int16 *indices, unsigned __int16 vertexCount, const vec4_t *xyzw, const vec3_t *normal, bool singleColor, const unsigned __int8 (*color)[4], const vec2_t *st, bool doTransform, const vec3_t *position, const vec3_t *angles)
{
  ?R_AddCmdDrawTriangles_Split@@YAXPEAUMaterial@@W4MaterialTechniqueType@@EGQEBGGQEBTvec4_t@@PEBTvec3_t@@_NPEAY03$$CBEPEBTvec2_t@@5T4@8@Z(materialHandle, techType, dimensions, indexCount, indices, vertexCount, xyzw, normal, singleColor, color, st, doTransform, position, angles);
}

/*
==============
R_AddCmdClearScreen
==============
*/

void __fastcall R_AddCmdClearScreen(int whichToClear, unsigned __int8 stencil)
{
  ?R_AddCmdClearScreen@@YAXHE@Z(whichToClear, stencil);
}

/*
==============
R_AddCmdSetViewportValues
==============
*/

void __fastcall R_AddCmdSetViewportValues(int x, int y, int width, int height)
{
  ?R_AddCmdSetViewportValues@@YAXHHHH@Z(x, y, width, height);
}

/*
==============
R_AddCmdDrawTriangles3D
==============
*/

void __fastcall R_AddCmdDrawTriangles3D(Material *materialHandle, MaterialTechniqueType techType, unsigned __int16 indexCount, const unsigned __int16 *indices, unsigned __int16 vertexCount, const vec4_t *xyzw, const vec3_t *normal, const GfxColor color, const vec2_t *st, bool doTransform, const vec3_t *position, const vec3_t *angles)
{
  ?R_AddCmdDrawTriangles3D@@YAXPEAUMaterial@@W4MaterialTechniqueType@@GQEBGGQEBTvec4_t@@PEBTvec3_t@@TGfxColor@@PEBTvec2_t@@_NT4@8@Z(materialHandle, techType, indexCount, indices, vertexCount, xyzw, normal, color, st, doTransform, position, angles);
}

/*
==============
R_SyncRenderThread
==============
*/

void R_SyncRenderThread(void)
{
  ?R_SyncRenderThread@@YAXXZ();
}

/*
==============
R_AddCmdDrawFullScreenColoredQuad
==============
*/

void __fastcall R_AddCmdDrawFullScreenColoredQuad(float s0, float t0, float s1, float t1, const vec4_t *color, Material *material)
{
  ?R_AddCmdDrawFullScreenColoredQuad@@YAXMMMMAEBTvec4_t@@PEAUMaterial@@@Z(s0, t0, s1, t1, color, material);
}

/*
==============
R_IssueRenderCommandsHud2D
==============
*/

void R_IssueRenderCommandsHud2D(void)
{
  ?R_IssueRenderCommandsHud2D@@YAXXZ();
}

/*
==============
R_InitConstantBufferInfo_Ring
==============
*/

void __fastcall R_InitConstantBufferInfo_Ring(GfxConstantBufferInfo *info, unsigned int *sizes)
{
  ?R_InitConstantBufferInfo_Ring@@YAXPEAUGfxConstantBufferInfo@@QEAI@Z(info, sizes);
}

/*
==============
R_IssueRenderCommandsBegin
==============
*/

void __fastcall R_IssueRenderCommandsBegin(unsigned int type)
{
  ?R_IssueRenderCommandsBegin@@YAXI@Z(type);
}

/*
==============
R_AddCmdDrawStretchPicRotateST
==============
*/

void __fastcall R_AddCmdDrawStretchPicRotateST(const vec2_t *verts, float centerS, float centerT, float scaleFinalS, float scaleFinalT, float minS, float maxS, float minT, float maxT, float angle, const vec4_t *color, Material *material)
{
  ?R_AddCmdDrawStretchPicRotateST@@YAXPEBTvec2_t@@MMMMMMMMMAEBTvec4_t@@PEAUMaterial@@@Z(verts, centerS, centerT, scaleFinalS, scaleFinalT, minS, maxS, minT, maxT, angle, color, material);
}

/*
==============
R_ToggleSmpFrame
==============
*/

void __fastcall R_ToggleSmpFrame(LocalClientNum_t localClientNum)
{
  ?R_ToggleSmpFrame@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
R_AddCmdDrawText
==============
*/

void __fastcall R_AddCmdDrawText(const char *text, int maxChars, GfxFont *font, Material *fontMaterial, const int fontHeight, float x, float y, float xScale, float yScale, char tracking, float rotation, const vec4_t *color, const FontGlowStyle *glowStyle, bool usePost, int allowGPadColor, int allowGPadAnySize, Material *iconsMaterial)
{
  ?R_AddCmdDrawText@@YAXPEBDHPEAUGfxFont@@PEAUMaterial@@HMMMMDMAEBTvec4_t@@PEBUFontGlowStyle@@_NHH2@Z(text, maxChars, font, fontMaterial, fontHeight, x, y, xScale, yScale, tracking, rotation, color, glowStyle, usePost, allowGPadColor, allowGPadAnySize, iconsMaterial);
}

/*
==============
R_AddCmdBlendSavedScreenShockBlurred
==============
*/

void __fastcall R_AddCmdBlendSavedScreenShockBlurred(int fadeMsec, float viewX, float viewY, float viewWidth, float viewHeight, int clientID)
{
  ?R_AddCmdBlendSavedScreenShockBlurred@@YAXHMMMMH@Z(fadeMsec, viewX, viewY, viewWidth, viewHeight, clientID);
}

/*
==============
R_AddCmdSetUIGlitch
==============
*/

void __fastcall R_AddCmdSetUIGlitch(const unsigned __int8 effectIntensity, const unsigned __int8 blockWidth, const unsigned __int8 blockHeight, const unsigned __int8 distortRange, const float maskPitch)
{
  ?R_AddCmdSetUIGlitch@@YAXEEEEM@Z(effectIntensity, blockWidth, blockHeight, distortRange, maskPitch);
}

/*
==============
R_AddCmdClearFirstUIMask
==============
*/

void __fastcall R_AddCmdClearFirstUIMask()
{
  ?R_AddCmdClearFirstUIMask@@YAXXZ();
}

/*
==============
R_AddCmdSetUIBlur
==============
*/

void __fastcall R_AddCmdSetUIBlur(const bool enabled, const float scale)
{
  ?R_AddCmdSetUIBlur@@YAX_NM@Z(enabled, scale);
}

/*
==============
R_EndFrame
==============
*/

void R_EndFrame(void)
{
  ?R_EndFrame@@YAXXZ();
}

/*
==============
R_AddCmdDrawText
==============
*/

void __fastcall R_AddCmdDrawText(const char *text, int maxChars, GfxFont *font, const int fontHeight, float x, float y, float xScale, float yScale, float rotation, const vec4_t *color)
{
  ?R_AddCmdDrawText@@YAXPEBDHPEAUGfxFont@@HMMMMMAEBTvec4_t@@@Z(text, maxChars, font, fontHeight, x, y, xScale, yScale, rotation, color);
}

/*
==============
R_AddCmdDrawQuadPicST
==============
*/

void __fastcall R_AddCmdDrawQuadPicST(const vec2_t *verts, float s0, float t0, float s1, float t1, const vec4_t *color, Material *material)
{
  ?R_AddCmdDrawQuadPicST@@YAXPEBTvec2_t@@MMMMAEBTvec4_t@@PEAUMaterial@@@Z(verts, s0, t0, s1, t1, color, material);
}

/*
==============
R_AddCmdUIRttEnd
==============
*/

void __fastcall R_AddCmdUIRttEnd(LocalClientNum_t clientIndex, unsigned int rttHandle)
{
  ?R_AddCmdUIRttEnd@@YAXW4LocalClientNum_t@@I@Z(clientIndex, rttHandle);
}

/*
==============
R_AddCmdDrawLines2D
==============
*/

void __fastcall R_AddCmdDrawLines2D(unsigned __int16 lineCount, unsigned __int8 width, const GfxPointVertex *verts)
{
  ?R_AddCmdDrawLines2D@@YAXGEQEBUGfxPointVertex@@@Z(lineCount, width, verts);
}

/*
==============
R_AddCmdClearScissorRect
==============
*/

void __fastcall R_AddCmdClearScissorRect()
{
  ?R_AddCmdClearScissorRect@@YAXXZ();
}

/*
==============
R_AddCmdDraw3DQuadPicST
==============
*/

void __fastcall R_AddCmdDraw3DQuadPicST(const vec3_t *verts, float s0, float t0, float s1, float t1, const vec4_t *color, Material *material)
{
  ?R_AddCmdDraw3DQuadPicST@@YAXPEBTvec3_t@@MMMMAEBTvec4_t@@PEAUMaterial@@@Z(verts, s0, t0, s1, t1, color, material);
}

/*
==============
R_AddCmdDrawLines2D
==============
*/

void __fastcall R_AddCmdDrawLines2D(unsigned __int16 lineCount, unsigned __int8 width, const GfxPointVertex *verts, bool doTransform, const vec3_t *position, const vec3_t *angles)
{
  ?R_AddCmdDrawLines2D@@YAXGEQEBUGfxPointVertex@@_NTvec3_t@@2@Z(lineCount, width, verts, doTransform, position, angles);
}

/*
==============
R_IssueRenderCommandsShadow
==============
*/

void R_IssueRenderCommandsShadow(void)
{
  ?R_IssueRenderCommandsShadow@@YAXXZ();
}

/*
==============
R_AddCmdDrawQuadPic
==============
*/

void __fastcall R_AddCmdDrawQuadPic(const vec2_t *verts, const vec4_t *color, Material *material)
{
  ?R_AddCmdDrawQuadPic@@YAXPEBTvec2_t@@AEBTvec4_t@@PEAUMaterial@@@Z(verts, color, material);
}

/*
==============
R_AddCmdDrawRect2D
==============
*/

void __fastcall R_AddCmdDrawRect2D(float x, float y, float width, float height, const GfxColor *color, bool filled)
{
  ?R_AddCmdDrawRect2D@@YAXMMMMAEBTGfxColor@@_N@Z(x, y, width, height, color, filled);
}

/*
==============
R_MultiLightGridFXLighting_ShutdownWorld
==============
*/

void R_MultiLightGridFXLighting_ShutdownWorld(void)
{
  ?R_MultiLightGridFXLighting_ShutdownWorld@@YAXXZ();
}

/*
==============
R_AddCmdDrawConsoleText
==============
*/

void __fastcall R_AddCmdDrawConsoleText(const char *textPool, int poolSize, int firstChar, int charCount, GfxFont *font, float x, float y, float xScale, float yScale, const vec4_t *color, int style)
{
  ?R_AddCmdDrawConsoleText@@YAXPEBDHHHPEAUGfxFont@@MMMMAEBTvec4_t@@H@Z(textPool, poolSize, firstChar, charCount, font, x, y, xScale, yScale, color, style);
}

/*
==============
R_AddCmdDrawTriangles3D
==============
*/

void __fastcall R_AddCmdDrawTriangles3D(Material *materialHandle, MaterialTechniqueType techType, unsigned __int16 indexCount, const unsigned __int16 *indices, unsigned __int16 vertexCount, const vec4_t *xyzw, const vec3_t *normal, const GfxColor color, const vec2_t *st)
{
  ?R_AddCmdDrawTriangles3D@@YAXPEAUMaterial@@W4MaterialTechniqueType@@GQEBGGQEBTvec4_t@@PEBTvec3_t@@TGfxColor@@PEBTvec2_t@@@Z(materialHandle, techType, indexCount, indices, vertexCount, xyzw, normal, color, st);
}

/*
==============
R_TrySortMaterials
==============
*/

void R_TrySortMaterials(void)
{
  ?R_TrySortMaterials@@YAXXZ();
}

/*
==============
R_AddCmdSetSecondUIMask
==============
*/

void __fastcall R_AddCmdSetSecondUIMask(float maskX, float maskY, float maskWidth, float maskHeight, float maskRotation, float alphaScale, float alphaOffset, float maskUMin, float maskVMin, float maskUMax, float maskVMax, const vec2_t *viewportSize, GfxImage *image)
{
  ?R_AddCmdSetSecondUIMask@@YAXMMMMMMMMMMMAEBTvec2_t@@PEAUGfxImage@@@Z(maskX, maskY, maskWidth, maskHeight, maskRotation, alphaScale, alphaOffset, maskUMin, maskVMin, maskUMax, maskVMax, viewportSize, image);
}

/*
==============
R_AddCmdUISetPixelShapeParams
==============
*/

void __fastcall R_AddCmdUISetPixelShapeParams(GfxPixelShapeType pixelShapeType, float innerRadius, float outerRadius)
{
  ?R_AddCmdUISetPixelShapeParams@@YAXW4GfxPixelShapeType@@MM@Z(pixelShapeType, innerRadius, outerRadius);
}

/*
==============
R_WaitAllAsyncComputeForSuspend
==============
*/

void R_WaitAllAsyncComputeForSuspend(void)
{
  ?R_WaitAllAsyncComputeForSuspend@@YAXXZ();
}

/*
==============
R_AddCmdEndSurface
==============
*/

void R_AddCmdEndSurface(void)
{
  ?R_AddCmdEndSurface@@YAXXZ();
}

/*
==============
R_AddCmdDraw3DStretchPicRotateST
==============
*/

void __fastcall R_AddCmdDraw3DStretchPicRotateST(const vec3_t *verts, float centerS, float centerT, float scaleFinalS, float scaleFinalT, float minS, float maxS, float minT, float maxT, float angle, const vec4_t *color, Material *material)
{
  ?R_AddCmdDraw3DStretchPicRotateST@@YAXPEBTvec3_t@@MMMMMMMMMAEBTvec4_t@@PEAUMaterial@@@Z(verts, centerS, centerT, scaleFinalS, scaleFinalT, minS, maxS, minT, maxT, angle, color, material);
}

/*
==============
R_GetFrameIndex
==============
*/

unsigned int __fastcall R_GetFrameIndex()
{
  return ?R_GetFrameIndex@@YAIXZ();
}

/*
==============
AddBaseDrawConsoleTextCmd
==============
*/
GfxCmdDrawText2D *AddBaseDrawConsoleTextCmd(const char *textPool, int poolSize, int firstChar, int charCount, GfxFont *font, const int fontHeight, float x, float y, float xScale, float yScale, const vec4_t *color, int style)
{
  size_t v12; 
  unsigned __int64 v15; 
  GfxCmdDrawText2D *CommandBufferVarSize_GfxCmdDrawText2D; 
  FontGlowStyle *v21; 
  __int64 v25; 
  const Material *v26; 
  char *text; 
  int v30; 
  const char *v31; 
  size_t v32; 
  __int64 v33; 
  __int64 v34; 

  v12 = charCount;
  if ( charCount < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 3437, ASSERT_TYPE_ASSERT, "(charCount >= 0)", (const char *)&queryFormat, "charCount >= 0") )
    __debugbreak();
  if ( !textPool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 3438, ASSERT_TYPE_ASSERT, "(textPool)", (const char *)&queryFormat, "textPool") )
    __debugbreak();
  if ( !(_DWORD)v12 )
    return 0i64;
  v15 = truncate_cast<unsigned int,unsigned __int64>((v12 + 16) & 0xFFFFFFFFFFFFFFFCui64) + 136;
  CommandBufferVarSize_GfxCmdDrawText2D = R_GetCommandBufferVarSize_GfxCmdDrawText2D_(RC_DRAW_TEXT_2D, v15);
  _RDI = CommandBufferVarSize_GfxCmdDrawText2D;
  if ( !CommandBufferVarSize_GfxCmdDrawText2D )
    return 0i64;
  __asm
  {
    vmovss  xmm0, [rsp+78h+xScale]
    vmovss  xmm1, [rsp+78h+yScale]
  }
  CommandBufferVarSize_GfxCmdDrawText2D->font = font;
  CommandBufferVarSize_GfxCmdDrawText2D->rotation = 0.0;
  CommandBufferVarSize_GfxCmdDrawText2D->fontHeight = fontHeight;
  __asm
  {
    vmovss  dword ptr [rdi+24h], xmm0
    vmovss  dword ptr [rdi+28h], xmm1
  }
  CommandBufferVarSize_GfxCmdDrawText2D->tracking = 0;
  CommandBufferVarSize_GfxCmdDrawText2D->maxChars = 0x7FFFFFFF;
  CommandBufferVarSize_GfxCmdDrawText2D->iconsMaterial = rgp.iconMaterial;
  CommandBufferVarSize_GfxCmdDrawText2D->renderFlags = 0;
  _RAX = R_Font_GetLegacyFontStyle(style);
  v21 = _RAX;
  if ( _RAX )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rdi+50h], ymm0
      vmovups xmm1, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rdi+70h], xmm1
      vmovsd  xmm0, qword ptr [rax+30h]
    }
    _RDI->renderFlags |= 0x10u;
    __asm { vmovsd  qword ptr [rdi+80h], xmm0 }
  }
  v25 = R_Font_UsePost(style) ? 8 : 0;
  if ( v21 )
  {
    v26 = *(Material **)((char *)rgp.fontGlowMaterial + v25);
  }
  else if ( FontCache_DoesGlyphUseDistanceField(fontHeight) )
  {
    v26 = *(Material **)((char *)rgp.fontSDFMaterial + v25);
  }
  else
  {
    v26 = *(Material **)((char *)rgp.fontMaterial + v25);
  }
  __asm
  {
    vmovss  xmm0, [rsp+78h+x]
    vmovss  xmm1, [rsp+78h+y]
  }
  _RDI->fontMaterial = v26;
  __asm
  {
    vmovss  dword ptr [rdi+88h], xmm0
    vmovss  dword ptr [rdi+8Ch], xmm1
  }
  Byte4PackVertexColor(color, _RDI->entry[0].color.array);
  Profile_Begin(182);
  text = _RDI->entry[0].text;
  v30 = poolSize - firstChar;
  v31 = &textPool[firstChar];
  if ( (int)v12 > v30 )
  {
    memcpy_0(text, v31, v30);
    text = &_RDI->entry[0].text[v30];
    v31 = textPool;
    v32 = (int)v12 - v30;
  }
  else
  {
    v32 = v12;
  }
  memcpy_0(text, v31, v32);
  Profile_EndInternal(NULL);
  _RDI->entry[0].text[v12] = 0;
  _RDI->totalByteSize = truncate_cast<unsigned short,unsigned int>(v15);
  v33 = -1i64;
  v34 = -1i64;
  do
    ++v34;
  while ( _RDI->entry[0].text[v34] );
  if ( v34 != v12 )
  {
    do
      ++v33;
    while ( _RDI->entry[0].text[v33] );
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 3479, ASSERT_TYPE_ASSERT, "( strlen( cmd->entry[0].text ) ) == ( charCount )", "%s == %s\n\t%i, %i", "strlen( cmd->entry[0].text )", "charCount", v33, v12) )
      __debugbreak();
  }
  VerifyGFXDrawText2DCmd(_RDI, "AddBaseDrawConsoleTextCmd");
  return _RDI;
}

/*
==============
AddBaseDrawTextCmd
==============
*/
GfxCmdDrawText2D *AddBaseDrawTextCmd(const char *text, int maxChars, GfxFont *font, Material *fontMaterial, const int fontHeight, float x, float y, float xScale, float yScale, char tracking, float rotation, const vec4_t *color, int cursorPos, char cursor, const FontGlowStyle *glowStyle, bool usePost, int allowGPadColor, int allowGPadAnySize, Material *iconsMaterial, bool requireUniqueCmd)
{
  GfxFont *v24; 
  int v25; 
  GfxCmdDrawText2D *result; 
  __int64 v28; 
  unsigned __int64 v29; 
  unsigned int v30; 
  unsigned __int8 v41; 
  unsigned __int8 v46; 
  unsigned __int8 v51; 
  unsigned __int8 v54; 
  Material *iconMaterial; 
  bool DoesGlyphUseDistanceField; 
  int v60; 
  int v61; 
  int v62; 
  unsigned __int16 totalByteSize; 
  unsigned __int16 byteCount; 
  __int64 v69; 
  __int64 v77; 
  __int64 v81; 
  __int64 v82; 
  int additionalByteCount; 
  unsigned int v84; 
  unsigned int size; 
  int size_4; 
  GfxColor v90; 
  Material *iconsMateriala; 

  v24 = font;
  v25 = maxChars;
  if ( maxChars <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 3124, ASSERT_TYPE_ASSERT, "(maxChars > 0)", (const char *)&queryFormat, "maxChars > 0") )
    __debugbreak();
  if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 3125, ASSERT_TYPE_ASSERT, "(font)", (const char *)&queryFormat, "font") )
    __debugbreak();
  if ( text )
  {
    __asm
    {
      vmovaps [rsp+0C8h+var_48], xmm6
      vmovaps [rsp+0C8h+var_58], xmm7
      vmovaps [rsp+0C8h+var_68], xmm8
    }
    if ( !*text && cursorPos < 0 )
      goto LABEL_79;
    R_TextValidatePrintable(text);
    v28 = -1i64;
    v29 = -1i64;
    do
      ++v29;
    while ( text[v29] );
    v84 = truncate_cast<unsigned int,unsigned __int64>(v29);
    v30 = truncate_cast<unsigned int,unsigned __int64>((v84 + 16i64) & 0xFFFFFFFFFFFFFFFCui64);
    __asm
    {
      vmovss  xmm5, cs:__real@437f0000
      vmovss  xmm4, cs:__real@3f000000
    }
    _R15 = glowStyle;
    __asm { vmulss  xmm1, xmm5, dword ptr [rdx] }
    additionalByteCount = v30;
    size = v30 + 136;
    __asm
    {
      vaddss  xmm2, xmm1, xmm4
      vmulss  xmm1, xmm5, dword ptr [rdx+4]
      vxorps  xmm6, xmm6, xmm6
      vroundss xmm3, xmm6, xmm2, 1
      vcvttss2si ecx, xmm3
      vaddss  xmm3, xmm1, xmm4
    }
    if ( _ECX > 255 )
      _ECX = 255;
    v41 = _ECX;
    __asm { vroundss xmm1, xmm6, xmm3, 1 }
    if ( _ECX < 0 )
      v41 = 0;
    __asm
    {
      vcvttss2si ecx, xmm1
      vmulss  xmm1, xmm5, dword ptr [rdx+8]
    }
    v90.array[0] = v41;
    __asm { vaddss  xmm3, xmm1, xmm4 }
    if ( _ECX > 255 )
      _ECX = 255;
    v46 = _ECX;
    __asm { vroundss xmm1, xmm6, xmm3, 1 }
    if ( _ECX < 0 )
      v46 = 0;
    __asm
    {
      vcvttss2si ecx, xmm1
      vmulss  xmm1, xmm5, dword ptr [rdx+0Ch]
    }
    v90.array[1] = v46;
    __asm { vaddss  xmm3, xmm1, xmm4 }
    if ( _ECX > 255 )
      _ECX = 255;
    v51 = _ECX;
    __asm { vroundss xmm1, xmm6, xmm3, 1 }
    if ( _ECX < 0 )
      v51 = 0;
    __asm { vcvttss2si ecx, xmm1 }
    v90.array[2] = v51;
    if ( _ECX > 255 )
      _ECX = 255;
    v54 = _ECX;
    if ( _ECX < 0 )
      v54 = 0;
    iconMaterial = iconsMaterial;
    v90.array[3] = v54;
    if ( !iconsMaterial )
      iconMaterial = rgp.iconMaterial;
    iconsMateriala = iconMaterial;
    if ( !fontMaterial )
    {
      if ( glowStyle )
      {
        fontMaterial = rgp.fontGlowMaterial[usePost];
      }
      else
      {
        DoesGlyphUseDistanceField = FontCache_DoesGlyphUseDistanceField(fontHeight);
        v30 = additionalByteCount;
        iconMaterial = iconsMateriala;
        if ( DoesGlyphUseDistanceField )
          fontMaterial = rgp.fontSDFMaterial[usePost];
        else
          fontMaterial = rgp.fontMaterial[usePost];
      }
      v24 = font;
    }
    __asm
    {
      vmovss  xmm6, [rsp+0C8h+rotation]
      vmovss  xmm7, [rsp+0C8h+yScale]
      vmovss  xmm8, [rsp+0C8h+xScale]
    }
    v60 = (glowStyle != NULL ? 0x10 : 0) | 2;
    if ( cursorPos <= -1 )
      v60 = glowStyle != NULL ? 0x10 : 0;
    v61 = v60 | 0x1000;
    if ( !allowGPadColor )
      v61 = v60;
    v62 = v61 | 0x2000;
    if ( !allowGPadAnySize )
      v62 = v61;
    size_4 = v62;
    if ( !requireUniqueCmd )
    {
      _RSI = (GfxCmdDrawText2D *)s_cmdList->lastCmd;
      if ( _RSI )
      {
        if ( _RSI->header.id == 20 && v30 + _RSI->header.byteCount < 0xFFFF && _RSI->renderFlags == v62 )
        {
          __asm { vucomiss xmm6, dword ptr [rsi+4] }
          if ( _RSI->renderFlags == v62 && _RSI->font == v24 && _RSI->fontHeight == fontHeight )
          {
            __asm { vucomiss xmm8, dword ptr [rsi+24h] }
            if ( _RSI->fontHeight == fontHeight )
            {
              __asm { vucomiss xmm7, dword ptr [rsi+28h] }
              if ( _RSI->fontHeight == fontHeight && _RSI->iconsMaterial == iconMaterial && _RSI->fontMaterial == fontMaterial && (!glowStyle || !memcmp_0(glowStyle, &_RSI->glowStyle, 0x38ui64)) && (cursorPos <= -1 || _RSI->cursorPos == cursorPos && _RSI->cursorLetter == cursor) )
              {
                totalByteSize = _RSI->totalByteSize;
                byteCount = _RSI->header.byteCount;
                if ( totalByteSize > byteCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 3196, ASSERT_TYPE_ASSERT, "( cmd->totalByteSize ) <= ( cmd->header.byteCount )", "%s <= %s\n\t%i, %i", "cmd->totalByteSize", "cmd->header.byteCount", totalByteSize, byteCount) )
                  __debugbreak();
                if ( (_RSI->totalByteSize & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 3197, ASSERT_TYPE_ASSERT, "(IsAligned( cmd->totalByteSize, GfxCmdDrawText2D::ENTRY_ALIGNMENT ))", (const char *)&queryFormat, "IsAligned( cmd->totalByteSize, GfxCmdDrawText2D::ENTRY_ALIGNMENT )") )
                  __debugbreak();
                if ( R_GrowCommandBuffer(RC_DRAW_TEXT_2D, additionalByteCount) )
                {
                  __asm
                  {
                    vmovss  xmm0, [rsp+0C8h+x]
                    vmovss  xmm1, [rsp+0C8h+y]
                  }
                  _RBX = (GfxColor *)((char *)_RSI + _RSI->totalByteSize);
                  __asm
                  {
                    vmovss  dword ptr [rbx], xmm0
                    vmovss  dword ptr [rbx+4], xmm1
                  }
                  _RBX[2] = v90;
                  Profile_Begin(182);
                  memcpy_0(&_RBX[3], text, v84 + 1);
                  Profile_EndInternal(NULL);
                  v69 = -1i64;
                  do
                    ++v69;
                  while ( _RBX[3].array[v69] );
                  if ( v69 != v84 )
                  {
                    do
                      ++v28;
                    while ( _RBX[3].array[v28] );
                    LODWORD(v82) = v84;
                    LODWORD(v81) = v28;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 3210, ASSERT_TYPE_ASSERT, "( strlen( newEntry->text ) ) == ( textLen )", "%s == %s\n\t%i, %i", "strlen( newEntry->text )", "textLen", v81, v82) )
                      __debugbreak();
                  }
                  _RSI->totalByteSize += truncate_cast<unsigned short,unsigned int>(additionalByteCount);
                  VerifyGFXDrawText2DCmd(_RSI, "AddBaseDrawTextCmd append");
                  result = _RSI;
                  goto LABEL_91;
                }
LABEL_79:
                result = NULL;
LABEL_91:
                __asm
                {
                  vmovaps xmm7, [rsp+0C8h+var_58]
                  vmovaps xmm6, [rsp+0C8h+var_48]
                  vmovaps xmm8, [rsp+0C8h+var_68]
                }
                return result;
              }
            }
          }
        }
      }
      v25 = maxChars;
    }
    _RAX = R_GetCommandBufferVarSize_GfxCmdDrawText2D_(RC_DRAW_TEXT_2D, size);
    _RBX = _RAX;
    if ( _RAX )
    {
      _RAX->maxChars = v25;
      _RAX->fontMaterial = fontMaterial;
      __asm { vmovss  dword ptr [rax+4], xmm6 }
      _RAX->font = font;
      _RAX->fontHeight = fontHeight;
      _RAX->tracking = tracking;
      _RAX->iconsMaterial = iconsMateriala;
      _RAX->renderFlags = size_4;
      __asm
      {
        vmovss  dword ptr [rbx+24h], xmm8
        vmovss  dword ptr [rbx+28h], xmm7
      }
      if ( glowStyle )
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [r15]
          vmovups ymmword ptr [rbx+50h], ymm0
          vmovups xmm1, xmmword ptr [r15+20h]
          vmovups xmmword ptr [rbx+70h], xmm1
          vmovsd  xmm0, qword ptr [r15+30h]
          vmovsd  qword ptr [rbx+80h], xmm0
        }
      }
      if ( cursorPos > -1 )
      {
        _RAX->cursorLetter = cursor;
        _RAX->cursorPos = cursorPos;
      }
      __asm
      {
        vmovss  xmm0, [rsp+0C8h+x]
        vmovss  xmm1, [rsp+0C8h+y]
        vmovss  dword ptr [rbx+88h], xmm0
        vmovss  dword ptr [rbx+8Ch], xmm1
      }
      _RAX->entry[0].color = v90;
      Profile_Begin(182);
      memcpy_0(_RBX->entry[0].text, text, v84 + 1);
      Profile_EndInternal(NULL);
      v77 = -1i64;
      do
        ++v77;
      while ( _RBX->entry[0].text[v77] );
      if ( v77 != v84 )
      {
        do
          ++v28;
        while ( _RBX->entry[0].text[v28] );
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 3254, ASSERT_TYPE_ASSERT, "( strlen( cmd->entry[0].text ) ) == ( textLen )", "%s == %s\n\t%i, %i", "strlen( cmd->entry[0].text )", "textLen", v28, v84) )
          __debugbreak();
      }
      _RBX->totalByteSize = truncate_cast<unsigned short,unsigned int>(size);
      VerifyGFXDrawText2DCmd(_RBX, "AddBaseDrawTextCmd new");
      result = _RBX;
      goto LABEL_91;
    }
    goto LABEL_79;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 3126, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text") )
    __debugbreak();
  Com_PrintWarning(13, "WARNING: Parameter `const char *text` was passed in as a nullptr for a call to AddBaseDrawTextCmd.\n");
  return 0i64;
}

/*
==============
R_AbortCommandBuffers
==============
*/
void R_AbortCommandBuffers(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 1886, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  Sys_WaitWorkerCmds();
}

/*
==============
R_AbortRenderCommands
==============
*/
void R_AbortRenderCommands(void)
{
  unsigned int BackEndDataIndex; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 1853, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  *(_QWORD *)&rg.viewInfoCount = 0i64;
  if ( frontEndDataOut && !frontEndDataOut->beginReady )
  {
    BackEndDataIndex = R_GetBackEndDataIndex(frontEndDataOut);
    Com_Printf(35, "R_AbortRenderCommands: Wake the renderer (backEndDataIndex = %d).\n", BackEndDataIndex);
    R_WakeRenderer(frontEndDataOut);
  }
  frontEndDataOut = NULL;
  rg.inFrame = 0;
}

/*
==============
R_AddCmdBlendSavedScreenShockBlurred
==============
*/

void __fastcall R_AddCmdBlendSavedScreenShockBlurred(int fadeMsec, double viewX, double viewY, double viewWidth, float viewHeight, int clientID)
{
  int v20; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmm8, xmm1
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
  }
  if ( (unsigned int)clientID > 2 )
  {
    v20 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 5889, ASSERT_TYPE_ASSERT, "( 0 ) <= ( clientID ) && ( clientID ) <= ( 2 )", "clientID not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", clientID, 0i64, v20) )
      __debugbreak();
  }
  if ( fadeMsec > 0 )
  {
    _RAX = R_GetCommandBufferInternal(RC_BLEND_SAVED_SCREEN_BLURRED, 0x1Cui64, 4ui64);
    if ( _RAX )
    {
      __asm
      {
        vmovss  xmm0, [rsp+78h+viewHeight]
        vmovss  dword ptr [rax+14h], xmm0
        vmovss  dword ptr [rax+8], xmm8
        vmovss  dword ptr [rax+0Ch], xmm7
        vmovss  dword ptr [rax+10h], xmm6
      }
      _RAX[1] = fadeMsec;
      _RAX[6] = clientID;
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm8, [rsp+78h+var_38]
  }
}

/*
==============
R_AddCmdBlendSavedScreenShockFlashed
==============
*/

void __fastcall R_AddCmdBlendSavedScreenShockFlashed(double intensityWhiteout, double intensityScreengrab, double viewX, double viewY, float viewWidth, float viewHeight, int clientID)
{
  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps [rsp+68h+var_38], xmm8
    vmovaps [rsp+68h+var_48], xmm9
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
    vmovaps xmm8, xmm1
    vmovaps xmm9, xmm0
  }
  _RAX = R_GetCommandBufferInternal(RC_BLEND_SAVED_SCREEN_FLASHED, 0x24ui64, 4ui64);
  if ( _RAX )
  {
    __asm
    {
      vmovss  xmm0, [rsp+68h+viewWidth]
      vmovss  xmm1, [rsp+68h+viewHeight]
      vmovss  dword ptr [rax+18h], xmm0
      vmovss  dword ptr [rax+1Ch], xmm1
      vmovss  dword ptr [rax+8], xmm9
      vmovss  dword ptr [rax+0Ch], xmm8
      vmovss  dword ptr [rax+10h], xmm7
      vmovss  dword ptr [rax+14h], xmm6
    }
    _RAX[4] = 0;
    *((_DWORD *)_RAX + 8) = clientID;
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
    vmovaps xmm9, [rsp+68h+var_48]
  }
}

/*
==============
R_AddCmdBlendSavedScreenShockPhoto
==============
*/

void __fastcall R_AddCmdBlendSavedScreenShockPhoto(double intensityScreengrab, double viewX, double viewY, double viewWidth, float viewHeight, int clientID)
{
  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps [rsp+68h+var_38], xmm8
    vmovaps [rsp+68h+var_48], xmm9
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
    vmovaps xmm8, xmm1
    vmovaps xmm9, xmm0
  }
  _RAX = R_GetCommandBufferInternal(RC_BLEND_SAVED_SCREEN_PHOTO, 0x20ui64, 4ui64);
  if ( _RAX )
  {
    __asm
    {
      vmovss  xmm0, [rsp+68h+viewHeight]
      vmovss  dword ptr [rax+18h], xmm0
      vmovss  dword ptr [rax+8], xmm9
      vmovss  dword ptr [rax+0Ch], xmm8
      vmovss  dword ptr [rax+10h], xmm7
      vmovss  dword ptr [rax+14h], xmm6
    }
    _RAX[4] = 0;
    *((_DWORD *)_RAX + 7) = clientID;
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
    vmovaps xmm9, [rsp+68h+var_48]
  }
}

/*
==============
R_AddCmdClearFirstUIMask
==============
*/
void R_AddCmdClearFirstUIMask(void)
{
  R_GetCommandBufferInternal(RC_CLEAR_FIRST_UI_MASK, 4ui64, 2ui64);
}

/*
==============
R_AddCmdClearScissorRect
==============
*/
void R_AddCmdClearScissorRect(void)
{
  if ( !R_GetCommandBufferInternal(RC_CLEAR_SCISSOR, 4ui64, 2ui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 3723, ASSERT_TYPE_ASSERT, "(R_GetCommandBuffer<GfxCmdReturn>( RC_CLEAR_SCISSOR ))", (const char *)&queryFormat, "R_GetCommandBuffer<GfxCmdReturn>( RC_CLEAR_SCISSOR )") )
    __debugbreak();
}

/*
==============
R_AddCmdClearScreen
==============
*/
void R_AddCmdClearScreen(int whichToClear, unsigned __int8 stencil)
{
  _BYTE *CommandBufferInternal; 

  if ( !whichToClear && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 5831, ASSERT_TYPE_ASSERT, "(whichToClear)", (const char *)&queryFormat, "whichToClear") )
    __debugbreak();
  CommandBufferInternal = R_GetCommandBufferInternal(RC_CLEAR_SCREEN, 0x20ui64, 4ui64);
  if ( !CommandBufferInternal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 5835, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  CommandBufferInternal[4] = whichToClear;
  if ( (unsigned __int8)whichToClear != whichToClear && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 5838, ASSERT_TYPE_SANITY, "( cmd->whichToClear == whichToClear )", (const char *)&queryFormat, "cmd->whichToClear == whichToClear") )
    __debugbreak();
  CommandBufferInternal[5] = stencil;
  CommandBufferInternal[28] = 0;
}

/*
==============
R_AddCmdClearScreenSlow
==============
*/

void __fastcall R_AddCmdClearScreenSlow(int whichToClear, const vec4_t *color, double depth, unsigned __int8 stencil)
{
  bool v10; 
  bool v11; 
  __int64 v16; 
  double v17; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  if ( !whichToClear && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 5849, ASSERT_TYPE_ASSERT, "(whichToClear)", (const char *)&queryFormat, "whichToClear") )
    __debugbreak();
  v10 = (whichToClear & 0xFFFFFFC0) == 0;
  if ( (whichToClear & 0xFFFFFFC0) != 0 )
  {
    LODWORD(v16) = whichToClear;
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 5850, ASSERT_TYPE_ASSERT, "( ( (whichToClear & ~GFX_CLEAR_ALL) == 0 ) )", "( whichToClear ) = %i", v16);
    v10 = !v11;
    if ( v11 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
    vcomiss xmm6, cs:__real@3f800000
  }
  if ( !v10 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+48h+var_20], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 5851, ASSERT_TYPE_ASSERT, "( ( depth >= 0.0f && depth <= 1.0f ) )", "( depth ) = %g", v17) )
      __debugbreak();
  }
  _RBX = R_GetCommandBufferInternal(RC_CLEAR_SCREEN, 0x20ui64, 4ui64);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 5855, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  _RBX[4] = whichToClear;
  if ( (unsigned __int8)whichToClear != whichToClear && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 5858, ASSERT_TYPE_SANITY, "( cmd->whichToClear == whichToClear )", (const char *)&queryFormat, "cmd->whichToClear == whichToClear") )
    __debugbreak();
  __asm
  {
    vmovss  dword ptr [rbx+18h], xmm6
    vmovaps xmm6, [rsp+48h+var_18]
  }
  _RBX[5] = stencil;
  *((_DWORD *)_RBX + 2) = LODWORD(color->v[0]);
  *((_DWORD *)_RBX + 3) = LODWORD(color->v[1]);
  *((_DWORD *)_RBX + 4) = LODWORD(color->v[2]);
  *((_DWORD *)_RBX + 5) = LODWORD(color->v[3]);
  _RBX[28] = 1;
}

/*
==============
R_AddCmdClearSecondUIMask
==============
*/
void R_AddCmdClearSecondUIMask(void)
{
  R_GetCommandBufferInternal(RC_CLEAR_SECOND_UI_MASK, 4ui64, 2ui64);
}

/*
==============
R_AddCmdDraw3DQuadPicST
==============
*/

void __fastcall R_AddCmdDraw3DQuadPicST(const vec3_t *verts, double s0, double t0, double s1, float t1, const vec4_t *color, Material *material)
{
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps [rsp+58h+var_38], xmm8
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
    vmovaps xmm8, xmm1
  }
  _RBX = R_GetCommandBufferInternal(RC_DRAW_3D_QUAD_PIC_ST, 0x58ui64, 8ui64);
  if ( _RBX )
  {
    __asm { vmovss  xmm0, [rsp+58h+t1] }
    *((_QWORD *)_RBX + 1) = R_RenderCommandMaterial(material);
    *((_DWORD *)_RBX + 4) = LODWORD(verts->v[0]);
    *((_DWORD *)_RBX + 5) = LODWORD(verts->v[1]);
    *((_DWORD *)_RBX + 6) = LODWORD(verts->v[2]);
    *((_DWORD *)_RBX + 7) = LODWORD(verts[1].v[0]);
    *((_DWORD *)_RBX + 8) = LODWORD(verts[1].v[1]);
    *((_DWORD *)_RBX + 9) = LODWORD(verts[1].v[2]);
    *((_DWORD *)_RBX + 10) = LODWORD(verts[2].v[0]);
    *((_DWORD *)_RBX + 11) = LODWORD(verts[2].v[1]);
    *((_DWORD *)_RBX + 12) = LODWORD(verts[2].v[2]);
    *((_DWORD *)_RBX + 13) = LODWORD(verts[3].v[0]);
    *((_DWORD *)_RBX + 14) = LODWORD(verts[3].v[1]);
    *((_DWORD *)_RBX + 15) = LODWORD(verts[3].v[2]);
    __asm
    {
      vmovss  dword ptr [rbx+40h], xmm8
      vmovss  dword ptr [rbx+44h], xmm7
      vmovss  dword ptr [rbx+48h], xmm6
      vmovss  dword ptr [rbx+4Ch], xmm0
    }
    Byte4PackVertexColor(color, (unsigned __int8 *)_RBX + 80);
  }
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
    vmovaps xmm8, [rsp+58h+var_38]
  }
}

/*
==============
R_AddCmdDraw3DStretchPicRotateST
==============
*/

void __fastcall R_AddCmdDraw3DStretchPicRotateST(const vec3_t *verts, double centerS, double centerT, double scaleFinalS, float scaleFinalT, float minS, float maxS, float minT, float maxT, float angle, const vec4_t *color, Material *material)
{
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps [rsp+58h+var_38], xmm8
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
    vmovaps xmm8, xmm1
  }
  _RBX = R_GetCommandBufferInternal(RC_3D_STRETCH_PIC_ROTATE_ST, 0x68ui64, 8ui64);
  if ( _RBX )
  {
    __asm
    {
      vmovss  xmm0, [rsp+58h+scaleFinalT]
      vmovss  xmm1, [rsp+58h+minS]
    }
    *((_QWORD *)_RBX + 1) = R_RenderCommandMaterial(material);
    *((_DWORD *)_RBX + 4) = LODWORD(verts->v[0]);
    *((_DWORD *)_RBX + 5) = LODWORD(verts->v[1]);
    *((_DWORD *)_RBX + 6) = LODWORD(verts->v[2]);
    *((_DWORD *)_RBX + 7) = LODWORD(verts[1].v[0]);
    *((_DWORD *)_RBX + 8) = LODWORD(verts[1].v[1]);
    *((_DWORD *)_RBX + 9) = LODWORD(verts[1].v[2]);
    *((_DWORD *)_RBX + 10) = LODWORD(verts[2].v[0]);
    *((_DWORD *)_RBX + 11) = LODWORD(verts[2].v[1]);
    *((_DWORD *)_RBX + 12) = LODWORD(verts[2].v[2]);
    *((_DWORD *)_RBX + 13) = LODWORD(verts[3].v[0]);
    *((_DWORD *)_RBX + 14) = LODWORD(verts[3].v[1]);
    *((_DWORD *)_RBX + 15) = LODWORD(verts[3].v[2]);
    __asm
    {
      vmovss  dword ptr [rbx+4Ch], xmm0
      vmovss  xmm0, [rsp+58h+maxS]
      vmovss  dword ptr [rbx+54h], xmm0
      vmovss  xmm0, [rsp+58h+maxT]
      vmovss  dword ptr [rbx+50h], xmm1
      vmovss  xmm1, [rsp+58h+minT]
      vmovss  dword ptr [rbx+5Ch], xmm0
      vmovss  dword ptr [rbx+40h], xmm8
      vmovss  dword ptr [rbx+44h], xmm7
      vmovss  dword ptr [rbx+48h], xmm6
      vmovss  dword ptr [rbx+58h], xmm1
    }
    Byte4PackVertexColor(color, (unsigned __int8 *)_RBX + 96);
    __asm { vmovss  xmm0, [rsp+58h+angle]; angle }
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    __asm { vmovss  dword ptr [rbx+4], xmm0 }
  }
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
    vmovaps xmm8, [rsp+58h+var_38]
  }
}

/*
==============
R_AddCmdDrawConsoleText
==============
*/
void R_AddCmdDrawConsoleText(const char *textPool, int poolSize, int firstChar, int charCount, GfxFont *font, float x, float y, float xScale, float yScale, const vec4_t *color, int style)
{
  int fontHeight; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 

  __asm
  {
    vmovss  xmm0, [rsp+78h+xScale]
    vmovaps [rsp+78h+var_18], xmm7
    vdivss  xmm7, xmm0, [rsp+78h+yScale]
  }
  R_TextHeight(font);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, [rsp+78h+yScale]
    vaddss  xmm3, xmm1, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm1, xmm0, xmm3, 1
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+78h+var_30], xmm0
    vmovss  xmm0, [rsp+78h+x]
    vcvttss2si ecx, xmm1
    vmovss  xmm1, [rsp+78h+y]
    vmovss  [rsp+78h+var_38], xmm7
    vmovss  [rsp+78h+var_40], xmm1
    vmovss  [rsp+78h+var_48], xmm0
  }
  AddBaseDrawConsoleTextCmd(textPool, poolSize, firstChar, charCount, font, fontHeight, v29, v30, v31, v32, color, style);
  __asm { vmovaps xmm7, [rsp+78h+var_18] }
}

/*
==============
R_AddCmdDrawFullScreenColoredQuad
==============
*/

void __fastcall R_AddCmdDrawFullScreenColoredQuad(double s0, double t0, double s1, double t1, const vec4_t *color, Material *material)
{
  const Material *v15; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps [rsp+68h+var_38], xmm8
    vmovaps [rsp+68h+var_48], xmm9
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
    vmovaps xmm8, xmm1
    vmovaps xmm9, xmm0
  }
  _RBX = R_GetCommandBufferInternal(RC_DRAW_FULL_SCREEN_COLORED_QUAD, 0x28ui64, 8ui64);
  if ( _RBX )
  {
    v15 = R_RenderCommandMaterial(material);
    __asm
    {
      vmovss  dword ptr [rbx+10h], xmm9
      vmovss  dword ptr [rbx+14h], xmm8
      vmovss  dword ptr [rbx+18h], xmm7
      vmovss  dword ptr [rbx+1Ch], xmm6
    }
    *((_QWORD *)_RBX + 1) = v15;
    Byte4PackVertexColor(color, (unsigned __int8 *)_RBX + 32);
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
    vmovaps xmm9, [rsp+68h+var_48]
  }
}

/*
==============
R_AddCmdDrawLines2D
==============
*/
void R_AddCmdDrawLines2D(unsigned __int16 lineCount, unsigned __int8 width, const GfxPointVertex *verts)
{
  vec3_t angles; 
  vec3_t position; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+78h+var_38], xmm0
    vmovss  dword ptr [rsp+78h+var_38+4], xmm0
    vmovss  dword ptr [rsp+78h+var_38+8], xmm0
    vmovss  dword ptr [rsp+78h+var_28], xmm0
    vmovss  dword ptr [rsp+78h+var_28+4], xmm0
    vmovss  dword ptr [rsp+78h+var_28+8], xmm0
  }
  R_AddCmdDrawLines(lineCount, width, 2u, 0, verts, 0, &position, &angles);
}

/*
==============
R_AddCmdDrawLines2D
==============
*/
void R_AddCmdDrawLines2D(unsigned __int16 lineCount, unsigned __int8 width, const GfxPointVertex *verts, bool doTransform, const vec3_t *position, const vec3_t *angles)
{
  vec3_t v10; 
  vec3_t v11; 

  _RAX = position;
  __asm { vmovsd  xmm0, qword ptr [rax] }
  v11.v[2] = position->v[2];
  _RAX = angles;
  __asm
  {
    vmovsd  qword ptr [rsp+78h+var_28], xmm0
    vmovsd  xmm0, qword ptr [rax]
  }
  v10.v[2] = angles->v[2];
  __asm { vmovsd  qword ptr [rsp+78h+var_38], xmm0 }
  R_AddCmdDrawLines(lineCount, width, 2u, 0, verts, doTransform, &v11, &v10);
}

/*
==============
R_AddCmdDrawLines3D
==============
*/
void R_AddCmdDrawLines3D(unsigned __int16 lineCount, unsigned __int8 width, bool depthTest, const GfxPointVertex *verts, bool doTransform, const vec3_t *position, const vec3_t *angles)
{
  vec3_t v11; 
  vec3_t v12; 

  _RAX = position;
  __asm { vmovsd  xmm0, qword ptr [rax] }
  v12.v[2] = position->v[2];
  _RAX = angles;
  __asm
  {
    vmovsd  qword ptr [rsp+78h+var_28], xmm0
    vmovsd  xmm0, qword ptr [rax]
  }
  v11.v[2] = angles->v[2];
  __asm { vmovsd  qword ptr [rsp+78h+var_38], xmm0 }
  R_AddCmdDrawLines(lineCount, width, 3u, depthTest, verts, doTransform, &v12, &v11);
}

/*
==============
R_AddCmdDrawLines3D
==============
*/
void R_AddCmdDrawLines3D(unsigned __int16 lineCount, unsigned __int8 width, bool depthTest, const GfxPointVertex *verts)
{
  vec3_t angles; 
  vec3_t position; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+78h+var_38], xmm0
    vmovss  dword ptr [rsp+78h+var_38+4], xmm0
    vmovss  dword ptr [rsp+78h+var_38+8], xmm0
    vmovss  dword ptr [rsp+78h+var_28], xmm0
    vmovss  dword ptr [rsp+78h+var_28+4], xmm0
    vmovss  dword ptr [rsp+78h+var_28+8], xmm0
  }
  R_AddCmdDrawLines(lineCount, width, 3u, depthTest, verts, 0, &position, &angles);
}

/*
==============
R_AddCmdDrawLines
==============
*/
void R_AddCmdDrawLines(unsigned __int16 lineCount, unsigned __int8 width, unsigned __int8 dimensions, bool depthTest, const GfxPointVertex *verts, bool doTransform, const vec3_t *position, const vec3_t *angles)
{
  unsigned __int16 v12; 
  bool v13; 
  GfxCmdHeader *lastCmd; 
  char byteCount_high; 
  GfxPointVertex *v16; 
  int v17; 
  char *CommandBufferInternal; 

  if ( !lineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 6071, ASSERT_TYPE_ASSERT, "( ( lineCount > 0 ) )", "( lineCount ) = %i", 0) )
    __debugbreak();
  v12 = 0;
  v13 = 0;
  if ( dimensions == 3 )
    v13 = depthTest;
  lastCmd = s_cmdList->lastCmd;
  if ( lastCmd && lastCmd->id == 32 && lastCmd->byteCount + 16 * (unsigned __int64)(2 * (unsigned int)lineCount) <= 0xFFFF && LOBYTE(lastCmd[1].byteCount) == width && (byteCount_high = HIBYTE(lastCmd[1].byteCount), (byteCount_high & 3) == dimensions) && ((byteCount_high & 4) != 0) == v13 && lineCount + (unsigned int)lastCmd[1].id <= 0x7FFF )
  {
    v16 = (GfxPointVertex *)R_GrowCommandBuffer(RC_DRAW_LINES, 32 * (unsigned int)lineCount);
    if ( v16 )
    {
      R_AddCmdDrawLines_CopyVerts(v16, lineCount, verts, doTransform, position, angles);
      lastCmd[1].id += lineCount;
    }
  }
  else if ( lineCount )
  {
    do
    {
      v17 = lineCount - v12;
      if ( (v17 < 0 || (unsigned int)v17 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)(lineCount - v12), "signed", lineCount - (unsigned __int64)v12) )
        __debugbreak();
      if ( (unsigned __int16)v17 > 0x7FEu )
        LOWORD(v17) = 2046;
      if ( 32 * (unsigned __int64)(unsigned __int16)v17 + 8 < 0x28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2076, ASSERT_TYPE_ASSERT, "(AlignUp( size, alignof( T ) ) >= sizeof( T ))", (const char *)&queryFormat, "AlignUp( size, alignof( T ) ) >= sizeof( T )") )
        __debugbreak();
      CommandBufferInternal = (char *)R_GetCommandBufferInternal(RC_DRAW_LINES, 32i64 * (unsigned __int16)v17 + 8, 4ui64);
      if ( !CommandBufferInternal )
        break;
      CommandBufferInternal[7] &= 0xF8u;
      *((_WORD *)CommandBufferInternal + 2) = v17;
      CommandBufferInternal[7] |= dimensions & 3 | (4 * v13);
      CommandBufferInternal[6] = width;
      R_AddCmdDrawLines_CopyVerts((GfxPointVertex *)(CommandBufferInternal + 8), v17, &verts[2 * v12], doTransform, position, angles);
      v12 += v17;
    }
    while ( v12 < lineCount );
  }
}

/*
==============
R_AddCmdDrawLines_CopyVerts
==============
*/
void R_AddCmdDrawLines_CopyVerts(GfxPointVertex *cmdVerts, unsigned __int16 lineCount, const GfxPointVertex *verts, bool doTransform, const vec3_t *position, const vec3_t *angles)
{
  int v8; 
  unsigned int v11; 
  __int64 v14; 
  tmat33_t<vec3_t> axis; 

  v8 = lineCount;
  Profile_Begin(182);
  v11 = 2 * v8;
  if ( doTransform )
  {
    AnglesToAxis(angles, &axis);
    if ( v11 )
    {
      _RBX = &verts->xyz.v[2];
      _RSI = (char *)cmdVerts - (char *)verts;
      __asm { vmovaps [rsp+0A8h+var_48], xmm6 }
      v14 = v11;
      do
      {
        _RBP = (__int64)_RBX + _RSI - 8;
        if ( _RBX - 2 == (float *)_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
          __debugbreak();
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+0A8h+axis]
          vmulss  xmm3, xmm0, dword ptr [rdi]
          vmovss  xmm1, dword ptr [rsp+0A8h+axis+0Ch]
          vmulss  xmm2, xmm1, dword ptr [rbx-4]
          vmovss  xmm0, dword ptr [rsp+0A8h+axis+18h]
          vmulss  xmm1, xmm0, dword ptr [rbx]
          vmovss  xmm0, dword ptr [rsp+0A8h+axis+4]
          vaddss  xmm4, xmm3, xmm2
          vaddss  xmm6, xmm4, xmm1
          vmovss  xmm1, dword ptr [rsp+0A8h+axis+10h]
          vmovss  dword ptr [rbp+0], xmm6
          vmulss  xmm3, xmm0, dword ptr [rdi]
          vmulss  xmm2, xmm1, dword ptr [rbx-4]
          vmovss  xmm0, dword ptr [rsp+0A8h+axis+1Ch]
          vmulss  xmm1, xmm0, dword ptr [rbx]
          vmovss  xmm0, dword ptr [rsp+0A8h+axis+8]
          vaddss  xmm4, xmm3, xmm2
          vaddss  xmm5, xmm4, xmm1
          vmovss  xmm1, dword ptr [rsp+0A8h+axis+14h]
          vmovss  dword ptr [rsi+rbx-4], xmm5
          vmulss  xmm2, xmm1, dword ptr [rbx-4]
          vmulss  xmm3, xmm0, dword ptr [rdi]
          vmovss  xmm0, dword ptr [rsp+0A8h+axis+20h]
          vmulss  xmm1, xmm0, dword ptr [rbx]
          vaddss  xmm4, xmm3, xmm2
          vaddss  xmm2, xmm4, xmm1
          vmovss  dword ptr [rsi+rbx], xmm2
          vaddss  xmm0, xmm6, dword ptr [r15]
          vmovss  dword ptr [rbp+0], xmm0
          vaddss  xmm1, xmm5, dword ptr [r15+4]
          vmovss  dword ptr [rsi+rbx-4], xmm1
          vaddss  xmm0, xmm2, dword ptr [r15+8]
          vmovss  dword ptr [rsi+rbx], xmm0
        }
        *(float *)((char *)_RBX + _RSI + 4) = _RBX[1];
        _RBX += 4;
        --v14;
      }
      while ( v14 );
      __asm { vmovaps xmm6, [rsp+0A8h+var_48] }
    }
  }
  else
  {
    memcpy_0(cmdVerts, verts, 16i64 * v11);
  }
  Profile_EndInternal(NULL);
}

/*
==============
R_AddCmdDrawMouseCursor
==============
*/

void __fastcall R_AddCmdDrawMouseCursor(double width, double height, const vec4_t *color, Material *material, int controllerIndex)
{
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps [rsp+48h+var_28], xmm7
    vmovaps xmm6, xmm1
    vmovaps xmm7, xmm0
  }
  _RBX = R_GetCommandBufferInternal(RC_DRAW_MOUSE_CURSOR, 0x20ui64, 8ui64);
  if ( _RBX )
  {
    *((_QWORD *)_RBX + 1) = R_RenderCommandMaterial(material);
    __asm
    {
      vmovss  dword ptr [rbx+10h], xmm7
      vmovss  dword ptr [rbx+14h], xmm6
    }
    Byte4PackVertexColor(color, (unsigned __int8 *)_RBX + 24);
    *((_DWORD *)_RBX + 7) = controllerIndex;
  }
  __asm
  {
    vmovaps xmm6, [rsp+48h+var_18]
    vmovaps xmm7, [rsp+48h+var_28]
  }
}

/*
==============
R_AddCmdDrawPoints2D
==============
*/
void R_AddCmdDrawPoints2D(unsigned __int16 pointCount, unsigned __int8 size, const GfxPointVertex *verts)
{
  R_AddCmdDrawPoints(pointCount, size, 2u, verts);
}

/*
==============
R_AddCmdDrawPoints3D
==============
*/
void R_AddCmdDrawPoints3D(unsigned __int16 pointCount, unsigned __int8 size, const GfxPointVertex *verts)
{
  R_AddCmdDrawPoints(pointCount, size, 3u, verts);
}

/*
==============
R_AddCmdDrawPoints
==============
*/
void R_AddCmdDrawPoints(unsigned __int16 pointCount, unsigned __int8 size, unsigned __int8 dimensions, const GfxPointVertex *verts)
{
  GfxCmdHeader *lastCmd; 
  void *v9; 
  __int64 v10; 
  _WORD *CommandBufferInternal; 
  _WORD *v12; 

  if ( !pointCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 5952, ASSERT_TYPE_ASSERT, "(pointCount > 0)", (const char *)&queryFormat, "pointCount > 0") )
    __debugbreak();
  if ( !size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 5953, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
    __debugbreak();
  lastCmd = s_cmdList->lastCmd;
  if ( lastCmd && lastCmd->id == 31 && 16i64 * pointCount + (unsigned __int64)lastCmd->byteCount <= 0xFFFF && LOBYTE(lastCmd[1].byteCount) == size && HIBYTE(lastCmd[1].byteCount) == dimensions && pointCount + (unsigned int)lastCmd[1].id <= 0x7FFF )
  {
    v9 = R_GrowCommandBuffer(RC_DRAW_POINTS, 16 * (unsigned int)pointCount);
    if ( v9 )
    {
      Profile_Begin(182);
      memcpy_0(v9, verts, 16i64 * pointCount);
      Profile_EndInternal(NULL);
      lastCmd[1].id += pointCount;
    }
  }
  else
  {
    v10 = 16i64 * pointCount;
    if ( (unsigned __int64)(v10 + 8) < 0x18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2076, ASSERT_TYPE_ASSERT, "(AlignUp( size, alignof( T ) ) >= sizeof( T ))", (const char *)&queryFormat, "AlignUp( size, alignof( T ) ) >= sizeof( T )") )
      __debugbreak();
    CommandBufferInternal = R_GetCommandBufferInternal(RC_DRAW_POINTS, v10 + 8, 4ui64);
    v12 = CommandBufferInternal;
    if ( CommandBufferInternal )
    {
      CommandBufferInternal[2] = pointCount;
      *((_BYTE *)CommandBufferInternal + 6) = size;
      *((_BYTE *)CommandBufferInternal + 7) = dimensions;
      Profile_Begin(182);
      memcpy_0(v12 + 4, verts, 16i64 * pointCount);
      Profile_EndInternal(NULL);
    }
  }
}

/*
==============
R_AddCmdDrawQuadPic
==============
*/
void R_AddCmdDrawQuadPic(const vec2_t *verts, const vec4_t *color, Material *material)
{
  void *CommandBufferInternal; 
  const Material *v7; 

  CommandBufferInternal = R_GetCommandBufferInternal(RC_DRAW_QUAD_PIC, 0x38ui64, 8ui64);
  if ( CommandBufferInternal )
  {
    v7 = R_RenderCommandMaterial(material);
    *((_DWORD *)CommandBufferInternal + 4) = LODWORD(verts->v[0]);
    *((_DWORD *)CommandBufferInternal + 5) = LODWORD(verts->v[1]);
    *((_QWORD *)CommandBufferInternal + 1) = v7;
    *((_DWORD *)CommandBufferInternal + 6) = LODWORD(verts[1].v[0]);
    *((_DWORD *)CommandBufferInternal + 7) = LODWORD(verts[1].v[1]);
    *((_DWORD *)CommandBufferInternal + 8) = LODWORD(verts[2].v[0]);
    *((_DWORD *)CommandBufferInternal + 9) = LODWORD(verts[2].v[1]);
    *((_DWORD *)CommandBufferInternal + 10) = LODWORD(verts[3].v[0]);
    *((_DWORD *)CommandBufferInternal + 11) = LODWORD(verts[3].v[1]);
    Byte4PackVertexColor(color, (unsigned __int8 *)CommandBufferInternal + 48);
  }
}

/*
==============
R_AddCmdDrawQuadPicST
==============
*/

void __fastcall R_AddCmdDrawQuadPicST(const vec2_t *verts, double s0, double t0, double s1, float t1, const vec4_t *color, Material *material)
{
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps [rsp+58h+var_38], xmm8
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
    vmovaps xmm8, xmm1
  }
  _RBX = R_GetCommandBufferInternal(RC_DRAW_QUAD_PIC_ST, 0x48ui64, 8ui64);
  if ( _RBX )
  {
    __asm { vmovss  xmm0, [rsp+58h+t1] }
    *((_QWORD *)_RBX + 1) = R_RenderCommandMaterial(material);
    *((_DWORD *)_RBX + 4) = LODWORD(verts->v[0]);
    *((_DWORD *)_RBX + 5) = LODWORD(verts->v[1]);
    *((_DWORD *)_RBX + 6) = LODWORD(verts[1].v[0]);
    *((_DWORD *)_RBX + 7) = LODWORD(verts[1].v[1]);
    *((_DWORD *)_RBX + 8) = LODWORD(verts[2].v[0]);
    *((_DWORD *)_RBX + 9) = LODWORD(verts[2].v[1]);
    *((_DWORD *)_RBX + 10) = LODWORD(verts[3].v[0]);
    *((_DWORD *)_RBX + 11) = LODWORD(verts[3].v[1]);
    __asm
    {
      vmovss  dword ptr [rbx+30h], xmm8
      vmovss  dword ptr [rbx+34h], xmm7
      vmovss  dword ptr [rbx+38h], xmm6
      vmovss  dword ptr [rbx+3Ch], xmm0
    }
    Byte4PackVertexColor(color, (unsigned __int8 *)_RBX + 64);
  }
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
    vmovaps xmm8, [rsp+58h+var_38]
  }
}

/*
==============
R_AddCmdDrawRect2D
==============
*/

void __fastcall R_AddCmdDrawRect2D(double x, double y, double width, double height, const GfxColor *color, bool filled)
{
  GfxCmdHeader *lastCmd; 
  GfxCmdDrawRect2D *v15; 
  GfxCmdDrawRect2D *CommandBufferInternal; 
  float v24; 
  GfxColor *v25; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
  }
  lastCmd = s_cmdList->lastCmd;
  __asm
  {
    vmovaps [rsp+78h+var_38], xmm8
    vmovaps [rsp+78h+var_48], xmm9
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
    vmovaps xmm8, xmm1
    vmovaps xmm9, xmm0
  }
  if ( lastCmd && lastCmd->id == 30 && (unsigned __int64)lastCmd->byteCount + 20 <= 0xFFFF && LOBYTE(lastCmd[1].byteCount) == filled )
  {
    if ( R_GrowCommandBuffer(RC_DRAW_RECT_2D, 20) )
    {
      v15 = (GfxCmdDrawRect2D *)lastCmd;
      v25 = (GfxColor *)color;
LABEL_9:
      __asm
      {
        vmovaps xmm3, xmm7; width
        vmovaps xmm2, xmm8; y
        vmovaps xmm1, xmm9; x
        vmovss  [rsp+78h+var_58], xmm6
      }
      R_AddDrawRect2DEntry(v15, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v24, v25);
    }
  }
  else
  {
    CommandBufferInternal = (GfxCmdDrawRect2D *)R_GetCommandBufferInternal(RC_DRAW_RECT_2D, 0x1Cui64, 4ui64);
    if ( CommandBufferInternal )
    {
      CommandBufferInternal->filled = filled;
      CommandBufferInternal->rectCount = 0;
      v25 = (GfxColor *)color;
      v15 = CommandBufferInternal;
      goto LABEL_9;
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm8, [rsp+78h+var_38]
    vmovaps xmm9, [rsp+78h+var_48]
  }
}

/*
==============
R_AddCmdDrawStretchPic
==============
*/

void __fastcall R_AddCmdDrawStretchPic(double x, double y, double w, double h, float s0, float t0, float s1, float t1, const vec4_t *color, Material *material)
{
  const Material *v18; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps [rsp+68h+var_38], xmm8
    vmovaps [rsp+68h+var_48], xmm9
    vmovaps xmm9, xmm0
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
    vmovaps xmm8, xmm1
  }
  v18 = R_RenderCommandMaterial(material);
  _RAX = R_GetCommandBufferInternal(RC_FIRST_NONCRITICAL, 0x38ui64, 8ui64);
  if ( _RAX )
  {
    __asm
    {
      vmovss  xmm0, [rsp+68h+s0]
      vmovss  xmm1, [rsp+68h+t0]
      vmovss  dword ptr [rax+20h], xmm0
      vmovss  xmm0, [rsp+68h+s1]
      vmovss  dword ptr [rax+24h], xmm1
      vmovss  xmm1, [rsp+68h+t1]
      vmovss  dword ptr [rax+28h], xmm0
      vmovss  dword ptr [rax+2Ch], xmm1
      vmovss  dword ptr [rax+10h], xmm9
      vmovss  dword ptr [rax+14h], xmm8
      vmovss  dword ptr [rax+18h], xmm7
      vmovss  dword ptr [rax+1Ch], xmm6
    }
    *((_QWORD *)_RAX + 1) = v18;
    Byte4PackVertexColor(color, (unsigned __int8 *)_RAX + 48);
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
    vmovaps xmm9, [rsp+68h+var_48]
  }
}

/*
==============
R_AddCmdDrawStretchPicFlipST
==============
*/

void __fastcall R_AddCmdDrawStretchPicFlipST(double x, double y, double w, double h, float s0, float t0, float s1, float t1, const vec4_t *color, Material *material)
{
  const Material *v18; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps [rsp+68h+var_38], xmm8
    vmovaps [rsp+68h+var_48], xmm9
    vmovaps xmm9, xmm0
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
    vmovaps xmm8, xmm1
  }
  v18 = R_RenderCommandMaterial(material);
  _RAX = R_GetCommandBufferInternal(RC_STRETCH_PIC_FLIP_ST, 0x38ui64, 8ui64);
  if ( _RAX )
  {
    __asm
    {
      vmovss  xmm0, [rsp+68h+s0]
      vmovss  xmm1, [rsp+68h+t0]
      vmovss  dword ptr [rax+20h], xmm0
      vmovss  xmm0, [rsp+68h+s1]
      vmovss  dword ptr [rax+24h], xmm1
      vmovss  xmm1, [rsp+68h+t1]
      vmovss  dword ptr [rax+28h], xmm0
      vmovss  dword ptr [rax+2Ch], xmm1
      vmovss  dword ptr [rax+10h], xmm9
      vmovss  dword ptr [rax+14h], xmm8
      vmovss  dword ptr [rax+18h], xmm7
      vmovss  dword ptr [rax+1Ch], xmm6
    }
    *((_QWORD *)_RAX + 1) = v18;
    Byte4PackVertexColor(color, (unsigned __int8 *)_RAX + 48);
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
    vmovaps xmm9, [rsp+68h+var_48]
  }
}

/*
==============
R_AddCmdDrawStretchPicRotateST
==============
*/

void __fastcall R_AddCmdDrawStretchPicRotateST(const vec2_t *verts, double centerS, double centerT, double scaleFinalS, float scaleFinalT, float minS, float maxS, float minT, float maxT, float angle, const vec4_t *color, Material *material)
{
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps [rsp+58h+var_38], xmm8
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
    vmovaps xmm8, xmm1
  }
  _RBX = R_GetCommandBufferInternal(RC_STRETCH_PIC_ROTATE_ST, 0x58ui64, 8ui64);
  if ( _RBX )
  {
    __asm
    {
      vmovss  xmm0, [rsp+58h+scaleFinalT]
      vmovss  xmm1, [rsp+58h+minS]
    }
    *((_QWORD *)_RBX + 1) = R_RenderCommandMaterial(material);
    *((_DWORD *)_RBX + 4) = LODWORD(verts->v[0]);
    *((_DWORD *)_RBX + 5) = LODWORD(verts->v[1]);
    *((_DWORD *)_RBX + 6) = LODWORD(verts[1].v[0]);
    *((_DWORD *)_RBX + 7) = LODWORD(verts[1].v[1]);
    *((_DWORD *)_RBX + 8) = LODWORD(verts[2].v[0]);
    *((_DWORD *)_RBX + 9) = LODWORD(verts[2].v[1]);
    *((_DWORD *)_RBX + 10) = LODWORD(verts[3].v[0]);
    *((_DWORD *)_RBX + 11) = LODWORD(verts[3].v[1]);
    __asm
    {
      vmovss  dword ptr [rbx+3Ch], xmm0
      vmovss  xmm0, [rsp+58h+maxS]
      vmovss  dword ptr [rbx+44h], xmm0
      vmovss  xmm0, [rsp+58h+maxT]
      vmovss  dword ptr [rbx+40h], xmm1
      vmovss  xmm1, [rsp+58h+minT]
      vmovss  dword ptr [rbx+4Ch], xmm0
      vmovss  dword ptr [rbx+30h], xmm8
      vmovss  dword ptr [rbx+34h], xmm7
      vmovss  dword ptr [rbx+38h], xmm6
      vmovss  dword ptr [rbx+48h], xmm1
    }
    Byte4PackVertexColor(color, (unsigned __int8 *)_RBX + 80);
    __asm { vmovss  xmm0, [rsp+58h+angle]; angle }
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    __asm { vmovss  dword ptr [rbx+4], xmm0 }
  }
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
    vmovaps xmm8, [rsp+58h+var_38]
  }
}

/*
==============
R_AddCmdDrawStretchPicRotateXY
==============
*/

void __fastcall R_AddCmdDrawStretchPicRotateXY(double x, double y, double w, double h, float s0, float t0, float s1, float t1, float angle, bool pivotTopLeft, bool applyPixelAspect, const vec4_t *color, Material *material)
{
  const Material *v22; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps [rsp+68h+var_38], xmm8
    vmovaps [rsp+68h+var_48], xmm9
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
    vmovaps xmm8, xmm1
    vmovaps xmm9, xmm0
  }
  _RBX = R_GetCommandBufferInternal(RC_STRETCH_PIC_ROTATE_XY, 0x40ui64, 8ui64);
  if ( _RBX )
  {
    v22 = R_RenderCommandMaterial(material);
    __asm
    {
      vmovss  xmm0, [rsp+68h+s0]
      vmovss  xmm1, [rsp+68h+t0]
      vmovss  dword ptr [rbx+20h], xmm0
      vmovss  xmm0, [rsp+68h+s1]
      vmovss  dword ptr [rbx+24h], xmm1
      vmovss  xmm1, [rsp+68h+t1]
      vmovss  dword ptr [rbx+28h], xmm0
      vmovss  dword ptr [rbx+2Ch], xmm1
      vmovss  dword ptr [rbx+10h], xmm9
      vmovss  dword ptr [rbx+14h], xmm8
      vmovss  dword ptr [rbx+18h], xmm7
      vmovss  dword ptr [rbx+1Ch], xmm6
    }
    *((_QWORD *)_RBX + 1) = v22;
    Byte4PackVertexColor(color, (unsigned __int8 *)_RBX + 48);
    __asm { vmovss  xmm0, [rsp+68h+angle]; angle }
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    *((_BYTE *)_RBX + 56) &= ~1u;
    *((_BYTE *)_RBX + 56) = (2 * applyPixelAspect) | (pivotTopLeft | *((_BYTE *)_RBX + 56)) & 0xFD;
    __asm { vmovss  dword ptr [rbx+34h], xmm0 }
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
    vmovaps xmm9, [rsp+68h+var_48]
  }
}

/*
==============
R_AddCmdDrawText3DUI
==============
*/
void R_AddCmdDrawText3DUI(const char *text, GfxFont *font, Material *fontMaterial, const int fontHeight, const vec3_t *points, float xScale, float yScale, char tracking, const vec4_t *color, const FontDecodeStyle *decodeStyle, const FontGlowStyle *glowStyle, Material *iconsMaterial)
{
  size_t v17; 

  if ( !text && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 3300, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text") )
    __debugbreak();
  if ( !font && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 3301, ASSERT_TYPE_ASSERT, "(font)", (const char *)&queryFormat, "font") )
    __debugbreak();
  if ( !fontMaterial && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 3302, ASSERT_TYPE_ASSERT, "(fontMaterial)", (const char *)&queryFormat, "fontMaterial") )
    __debugbreak();
  if ( !iconsMaterial && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 3303, ASSERT_TYPE_ASSERT, "(iconsMaterial)", (const char *)&queryFormat, "iconsMaterial") )
    __debugbreak();
  if ( *text )
  {
    R_TextValidatePrintable(text);
    v17 = -1i64;
    do
      ++v17;
    while ( text[v17] );
    if ( ((v17 + 180) & 0xFFFFFFFFFFFFFFF8ui64) < 0xB0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2076, ASSERT_TYPE_ASSERT, "(AlignUp( size, alignof( T ) ) >= sizeof( T ))", (const char *)&queryFormat, "AlignUp( size, alignof( T ) ) >= sizeof( T )") )
      __debugbreak();
    _RAX = (char *)R_GetCommandBufferInternal(RC_DRAW_TEXT_3D_UI, v17 + 173, 8ui64);
    _RDI = _RAX;
    if ( _RAX )
    {
      _RDX = points;
      __asm
      {
        vmovaps [rsp+68h+var_38], xmm7
        vmovss  xmm7, cs:__real@3f800000
      }
      *(vec3_t *)(_RAX + 4) = points[3];
      __asm
      {
        vmovss  xmm0, dword ptr [rdx+18h]
        vsubss  xmm1, xmm0, dword ptr [rdx+24h]
        vmovss  dword ptr [rax+10h], xmm1
        vmovss  xmm2, dword ptr [rdx+1Ch]
        vsubss  xmm0, xmm2, dword ptr [rdx+28h]
        vmovss  dword ptr [rax+14h], xmm0
        vmovss  xmm1, dword ptr [rdx+20h]
        vsubss  xmm2, xmm1, dword ptr [rdx+2Ch]
        vmovss  dword ptr [rax+18h], xmm2
        vmovss  xmm0, dword ptr [rdx+24h]
        vsubss  xmm1, xmm0, dword ptr [rdx]
        vmovss  dword ptr [rax+1Ch], xmm1
        vmovss  xmm2, dword ptr [rdx+28h]
        vsubss  xmm0, xmm2, dword ptr [rdx+4]
        vmovss  dword ptr [rax+20h], xmm0
        vmovss  xmm1, dword ptr [rdx+2Ch]
        vsubss  xmm2, xmm1, dword ptr [rdx+8]
        vmovss  dword ptr [rax+24h], xmm2
        vmovss  xmm5, dword ptr [rax+10h]
        vmovss  xmm0, dword ptr [rax+14h]
        vmovss  xmm3, dword ptr [rax+18h]
        vmulss  xmm0, xmm0, xmm0
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm4, xmm2, xmm2
        vcmpless xmm0, xmm4, cs:__real@80000000
        vblendvps xmm0, xmm4, xmm7, xmm0
        vdivss  xmm2, xmm7, xmm0
        vmulss  xmm0, xmm5, xmm2
        vmovss  dword ptr [rax+10h], xmm0
        vmulss  xmm1, xmm2, dword ptr [rax+14h]
        vmovss  dword ptr [rax+14h], xmm1
        vmulss  xmm0, xmm2, dword ptr [rax+18h]
        vmovss  dword ptr [rax+18h], xmm0
        vmovss  xmm0, dword ptr [rax+20h]
        vmovss  xmm5, dword ptr [rax+1Ch]
        vmovss  xmm3, dword ptr [rax+24h]
        vmulss  xmm0, xmm0, xmm0
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm4, xmm2, xmm2
        vcmpless xmm0, xmm4, cs:__real@80000000
        vblendvps xmm0, xmm4, xmm7, xmm0
        vdivss  xmm2, xmm7, xmm0
        vmulss  xmm0, xmm5, xmm2
        vmovss  dword ptr [rax+1Ch], xmm0
        vmulss  xmm1, xmm2, dword ptr [rax+20h]
        vmovss  dword ptr [rax+20h], xmm1
        vmulss  xmm0, xmm2, dword ptr [rax+24h]
        vmovss  xmm1, [rsp+68h+yScale]
        vmovss  dword ptr [rax+24h], xmm0
        vmovss  xmm0, [rsp+68h+xScale]
        vmovss  dword ptr [rax+9Ch], xmm0
        vmovss  dword ptr [rax+0A0h], xmm1
      }
      *((_QWORD *)_RAX + 18) = font;
      *((_DWORD *)_RAX + 38) = fontHeight;
      _RAX[164] = tracking;
      *((_DWORD *)_RAX + 42) = 0;
      Byte4PackVertexColor(color, (unsigned __int8 *)_RAX + 136);
      _RAX = glowStyle;
      __asm { vmovaps xmm7, [rsp+68h+var_38] }
      *((_QWORD *)_RDI + 15) = fontMaterial;
      *((_QWORD *)_RDI + 16) = iconsMaterial;
      if ( glowStyle )
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rdi+3Ch], ymm0
          vmovups xmm1, xmmword ptr [rax+20h]
          vmovups xmmword ptr [rdi+5Ch], xmm1
          vmovsd  xmm0, qword ptr [rax+30h]
        }
        *((_DWORD *)_RDI + 42) |= 0x10u;
        __asm { vmovsd  qword ptr [rdi+6Ch], xmm0 }
      }
      _RAX = decodeStyle;
      if ( decodeStyle && decodeStyle->lastTextSet )
      {
        if ( decodeStyle->maxRandomCharsToDisplay )
        {
          *((_DWORD *)_RDI + 42) |= 0x40u;
          __asm
          {
            vmovups xmm0, xmmword ptr [rax]
            vmovups xmmword ptr [rdi+28h], xmm0
          }
          *((_DWORD *)_RDI + 14) = *(_DWORD *)&decodeStyle->useGameTime;
        }
      }
      Profile_Begin(182);
      memcpy_0(_RDI + 172, text, v17);
      Profile_EndInternal(NULL);
      _RDI[v17 + 172] = 0;
    }
  }
}

/*
==============
R_AddCmdDrawText
==============
*/
void R_AddCmdDrawText(const char *text, int maxChars, GfxFont *font, const int fontHeight, float x, float y, float xScale, float yScale, float rotation, const vec4_t *color)
{
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 

  __asm
  {
    vmovss  xmm0, [rsp+0A8h+rotation]
    vmovss  xmm1, [rsp+0A8h+yScale]
    vmovss  [rsp+0A8h+var_58], xmm0
    vmovss  xmm0, [rsp+0A8h+xScale]
    vmovss  [rsp+0A8h+var_68], xmm1
    vmovss  xmm1, [rsp+0A8h+y]
    vmovss  [rsp+0A8h+var_70], xmm0
    vmovss  xmm0, [rsp+0A8h+x]
    vmovss  [rsp+0A8h+var_78], xmm1
    vmovss  [rsp+0A8h+var_80], xmm0
  }
  AddBaseDrawTextCmd(text, maxChars, font, NULL, fontHeight, v15, v16, v17, v18, 0, v19, color, -1, 0, NULL, 0, 0, 0, NULL, 0);
}

/*
==============
R_AddCmdDrawText
==============
*/
void R_AddCmdDrawText(const char *text, int maxChars, GfxFont *font, const int fontHeight, float x, float y, float xScale, float yScale, float rotation, const vec4_t *color, const FontGlowStyle *glowStyle, bool usePost)
{
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 

  __asm
  {
    vmovss  xmm0, [rsp+0A8h+rotation]
    vmovss  xmm1, [rsp+0A8h+yScale]
    vmovss  [rsp+0A8h+var_58], xmm0
    vmovss  xmm0, [rsp+0A8h+xScale]
    vmovss  [rsp+0A8h+var_68], xmm1
    vmovss  xmm1, [rsp+0A8h+y]
    vmovss  [rsp+0A8h+var_70], xmm0
    vmovss  xmm0, [rsp+0A8h+x]
    vmovss  [rsp+0A8h+var_78], xmm1
    vmovss  [rsp+0A8h+var_80], xmm0
  }
  AddBaseDrawTextCmd(text, maxChars, font, NULL, fontHeight, v17, v18, v19, v20, 0, v21, color, -1, 0, glowStyle, usePost, 0, 0, NULL, 0);
}

/*
==============
R_AddCmdDrawText
==============
*/
void R_AddCmdDrawText(const char *text, int maxChars, GfxFont *font, Material *fontMaterial, const int fontHeight, float x, float y, float xScale, float yScale, char tracking, float rotation, const vec4_t *color, const FontGlowStyle *glowStyle, bool usePost, int allowGPadColor, int allowGPadAnySize, Material *iconsMaterial)
{
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 

  __asm
  {
    vmovss  xmm0, [rsp+0A8h+rotation]
    vmovss  xmm1, [rsp+0A8h+xScale]
    vmovss  [rsp+0A8h+var_58], xmm0
    vmovss  xmm0, [rsp+0A8h+yScale]
    vmovss  [rsp+0A8h+var_68], xmm0
    vmovss  xmm0, [rsp+0A8h+y]
    vmovss  [rsp+0A8h+var_70], xmm1
    vmovss  xmm1, [rsp+0A8h+x]
    vmovss  [rsp+0A8h+var_78], xmm0
    vmovss  [rsp+0A8h+var_80], xmm1
  }
  AddBaseDrawTextCmd(text, maxChars, font, fontMaterial, fontHeight, v22, v23, v24, v25, tracking, v26, color, -1, 0, glowStyle, usePost, allowGPadColor, allowGPadAnySize, iconsMaterial, 0);
}

/*
==============
R_AddCmdDrawTextInSpace
==============
*/

void __fastcall R_AddCmdDrawTextInSpace(const char *text, GfxFont *font, double size, const vec3_t *org, const vec3_t *xDir, const vec3_t *yDir, const vec4_t *color)
{
  size_t v12; 
  char *v14; 

  __asm
  {
    vmovaps [rsp+58h+var_28], xmm6
    vmovaps xmm6, xmm2
  }
  if ( !text && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 3380, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text") )
    __debugbreak();
  if ( *text )
  {
    v12 = -1i64;
    do
      ++v12;
    while ( text[v12] );
    if ( ((v12 + 68) & 0xFFFFFFFFFFFFFFF8ui64) < 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2076, ASSERT_TYPE_ASSERT, "(AlignUp( size, alignof( T ) ) >= sizeof( T ))", (const char *)&queryFormat, "AlignUp( size, alignof( T ) ) >= sizeof( T )") )
      __debugbreak();
    _RAX = (char *)R_GetCommandBufferInternal(RC_DRAW_TEXT_3D_IN_SPACE, v12 + 61, 8ui64);
    v14 = _RAX;
    if ( _RAX )
    {
      *((_DWORD *)_RAX + 2) = LODWORD(org->v[0]);
      *((_DWORD *)_RAX + 3) = LODWORD(org->v[1]);
      *((_DWORD *)_RAX + 4) = LODWORD(org->v[2]);
      __asm { vmovss  dword ptr [rax+4], xmm6 }
      *((_QWORD *)_RAX + 3) = font;
      *(vec3_t *)(_RAX + 32) = *xDir;
      *(vec3_t *)(_RAX + 44) = *yDir;
      Byte4PackVertexColor(color, (unsigned __int8 *)_RAX + 56);
      Profile_Begin(182);
      memcpy_0(v14 + 60, text, v12);
      Profile_EndInternal(NULL);
      v14[v12 + 60] = 0;
    }
  }
  __asm { vmovaps xmm6, [rsp+58h+var_28] }
}

/*
==============
R_AddCmdDrawTextWithCursor
==============
*/
void R_AddCmdDrawTextWithCursor(const char *text, int maxChars, GfxFont *font, Material *fontMaterial, const int fontHeight, float x, float y, float xScale, float yScale, char tracking, float rotation, const vec4_t *color, const FontGlowStyle *glowStyle, bool usePost, int cursorPos, char cursor, int allowGPadColor, int allowGPadAnySize, Material *iconsMaterial)
{
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 

  __asm
  {
    vmovss  xmm0, [rsp+0A8h+rotation]
    vmovss  xmm1, [rsp+0A8h+xScale]
    vmovss  [rsp+0A8h+var_58], xmm0
    vmovss  xmm0, [rsp+0A8h+yScale]
    vmovss  [rsp+0A8h+var_68], xmm0
    vmovss  xmm0, [rsp+0A8h+y]
    vmovss  [rsp+0A8h+var_70], xmm1
    vmovss  xmm1, [rsp+0A8h+x]
    vmovss  [rsp+0A8h+var_78], xmm0
    vmovss  [rsp+0A8h+var_80], xmm1
  }
  AddBaseDrawTextCmd(text, maxChars, font, fontMaterial, fontHeight, v24, v25, v26, v27, tracking, v28, color, cursorPos, cursor, glowStyle, usePost, allowGPadColor, allowGPadAnySize, iconsMaterial, 0);
}

/*
==============
R_AddCmdDrawTextWithEffects
==============
*/
void R_AddCmdDrawTextWithEffects(const char *text, int maxChars, GfxFont *font, Material *fontMaterial, const int fontHeight, float x, float y, float xScale, float yScale, char tracking, float rotation, const vec4_t *color, const FontDecodeStyle *decodeStyle, const FontGlowStyle *glowStyle, bool usePost, Material *iconsMaterial, bool tintIcons)
{
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 

  __asm
  {
    vmovss  xmm0, [rsp+0A8h+rotation]
    vmovss  xmm1, [rsp+0A8h+xScale]
    vmovss  [rsp+0A8h+var_58], xmm0
    vmovss  xmm0, [rsp+0A8h+yScale]
    vmovss  [rsp+0A8h+var_68], xmm0
    vmovss  xmm0, [rsp+0A8h+y]
    vmovss  [rsp+0A8h+var_70], xmm1
    vmovss  xmm1, [rsp+0A8h+x]
    vmovss  [rsp+0A8h+var_78], xmm0
    vmovss  [rsp+0A8h+var_80], xmm1
  }
  _RAX = AddBaseDrawTextCmd(text, maxChars, font, fontMaterial, fontHeight, v25, v26, v27, v28, tracking, v29, color, -1, 0, glowStyle, usePost, tintIcons, 0, iconsMaterial, 1);
  if ( _RAX )
  {
    _RCX = decodeStyle;
    if ( decodeStyle )
    {
      if ( decodeStyle->lastTextSet )
      {
        if ( decodeStyle->maxRandomCharsToDisplay )
        {
          _RAX->renderFlags |= 0x40u;
          __asm
          {
            vmovups xmm0, xmmword ptr [rcx]
            vmovups xmmword ptr [rax+3Ch], xmm0
          }
          *(_DWORD *)&_RAX->decodeStyle.useGameTime = *(_DWORD *)&decodeStyle->useGameTime;
        }
      }
    }
  }
}

/*
==============
R_AddCmdDrawTriangles2D
==============
*/
void R_AddCmdDrawTriangles2D(Material *materialHandle, MaterialTechniqueType techType, unsigned __int16 indexCount, const unsigned __int16 *indices, unsigned __int16 vertexCount, const vec4_t *xyzw, const vec3_t *normal, const unsigned __int8 (*color)[4], const vec2_t *st)
{
  vec3_t angles; 
  vec3_t position; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+0B8h+var_48], xmm0
    vmovss  dword ptr [rsp+0B8h+var_48+4], xmm0
    vmovss  dword ptr [rsp+0B8h+var_48+8], xmm0
    vmovss  dword ptr [rsp+0B8h+var_38], xmm0
    vmovss  dword ptr [rsp+0B8h+var_38+4], xmm0
    vmovss  dword ptr [rsp+0B8h+var_38+8], xmm0
  }
  R_AddCmdDrawTriangles(materialHandle, techType, 2u, indexCount, indices, vertexCount, xyzw, normal, 0, color, st, 0, &position, &angles);
}

/*
==============
R_AddCmdDrawTriangles2D
==============
*/
void R_AddCmdDrawTriangles2D(Material *materialHandle, MaterialTechniqueType techType, unsigned __int16 indexCount, const unsigned __int16 *indices, unsigned __int16 vertexCount, const vec4_t *xyzw, const vec3_t *normal, const GfxColor color, const vec2_t *st)
{
  unsigned __int8 v11[4]; 
  vec3_t angles; 
  vec3_t position; 

  __asm { vxorps  xmm0, xmm0, xmm0 }
  *(GfxColor *)v11 = color;
  __asm
  {
    vmovss  dword ptr [rsp+0A8h+var_30], xmm0
    vmovss  dword ptr [rsp+0A8h+var_30+4], xmm0
    vmovss  dword ptr [rsp+0A8h+var_30+8], xmm0
    vmovss  dword ptr [rsp+0A8h+var_20], xmm0
    vmovss  dword ptr [rsp+0A8h+var_20+4], xmm0
    vmovss  dword ptr [rsp+0A8h+var_20+8], xmm0
  }
  R_AddCmdDrawTriangles(materialHandle, techType, 2u, indexCount, indices, vertexCount, xyzw, normal, 1, (const unsigned __int8 (*)[4])v11, st, 0, &position, &angles);
}

/*
==============
R_AddCmdDrawTriangles3D
==============
*/
void R_AddCmdDrawTriangles3D(Material *materialHandle, MaterialTechniqueType techType, unsigned __int16 indexCount, const unsigned __int16 *indices, unsigned __int16 vertexCount, const vec4_t *xyzw, const vec3_t *normal, const unsigned __int8 (*color)[4], const vec2_t *st)
{
  vec3_t angles; 
  vec3_t position; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+0B8h+var_48], xmm0
    vmovss  dword ptr [rsp+0B8h+var_48+4], xmm0
    vmovss  dword ptr [rsp+0B8h+var_48+8], xmm0
    vmovss  dword ptr [rsp+0B8h+var_38], xmm0
    vmovss  dword ptr [rsp+0B8h+var_38+4], xmm0
    vmovss  dword ptr [rsp+0B8h+var_38+8], xmm0
  }
  R_AddCmdDrawTriangles(materialHandle, techType, 3u, indexCount, indices, vertexCount, xyzw, normal, 0, color, st, 0, &position, &angles);
}

/*
==============
R_AddCmdDrawTriangles3D
==============
*/
void R_AddCmdDrawTriangles3D(Material *materialHandle, MaterialTechniqueType techType, unsigned __int16 indexCount, const unsigned __int16 *indices, unsigned __int16 vertexCount, const vec4_t *xyzw, const vec3_t *normal, const unsigned __int8 (*color)[4], const vec2_t *st, bool doTransform, const vec3_t *position, const vec3_t *angles)
{
  vec3_t v16; 
  vec3_t v17; 

  _RAX = position;
  __asm { vmovsd  xmm0, qword ptr [rax] }
  v17.v[2] = position->v[2];
  _RAX = angles;
  __asm
  {
    vmovsd  qword ptr [rsp+0B8h+var_38], xmm0
    vmovsd  xmm0, qword ptr [rax]
  }
  v16.v[2] = angles->v[2];
  __asm { vmovsd  qword ptr [rsp+0B8h+var_48], xmm0 }
  R_AddCmdDrawTriangles(materialHandle, techType, 3u, indexCount, indices, vertexCount, xyzw, normal, 0, color, st, doTransform, &v17, &v16);
}

/*
==============
R_AddCmdDrawTriangles3D
==============
*/
void R_AddCmdDrawTriangles3D(Material *materialHandle, MaterialTechniqueType techType, unsigned __int16 indexCount, const unsigned __int16 *indices, unsigned __int16 vertexCount, const vec4_t *xyzw, const vec3_t *normal, const GfxColor color, const vec2_t *st)
{
  unsigned __int8 v11[4]; 
  vec3_t angles; 
  vec3_t position; 

  __asm { vxorps  xmm0, xmm0, xmm0 }
  *(GfxColor *)v11 = color;
  __asm
  {
    vmovss  dword ptr [rsp+0A8h+var_30], xmm0
    vmovss  dword ptr [rsp+0A8h+var_30+4], xmm0
    vmovss  dword ptr [rsp+0A8h+var_30+8], xmm0
    vmovss  dword ptr [rsp+0A8h+var_20], xmm0
    vmovss  dword ptr [rsp+0A8h+var_20+4], xmm0
    vmovss  dword ptr [rsp+0A8h+var_20+8], xmm0
  }
  R_AddCmdDrawTriangles(materialHandle, techType, 3u, indexCount, indices, vertexCount, xyzw, normal, 1, (const unsigned __int8 (*)[4])v11, st, 0, &position, &angles);
}

/*
==============
R_AddCmdDrawTriangles3D
==============
*/
void R_AddCmdDrawTriangles3D(Material *materialHandle, MaterialTechniqueType techType, unsigned __int16 indexCount, const unsigned __int16 *indices, unsigned __int16 vertexCount, const vec4_t *xyzw, const vec3_t *normal, const GfxColor color, const vec2_t *st, bool doTransform, const vec3_t *position, const vec3_t *angles)
{
  unsigned __int8 v16[4]; 
  vec3_t v17; 
  vec3_t v18; 

  *(GfxColor *)v16 = color;
  _RAX = position;
  __asm { vmovsd  xmm0, qword ptr [rax] }
  v18.v[2] = position->v[2];
  _RAX = angles;
  __asm
  {
    vmovsd  qword ptr [rsp+0A8h+var_20], xmm0
    vmovsd  xmm0, qword ptr [rax]
  }
  v17.v[2] = angles->v[2];
  __asm { vmovsd  qword ptr [rsp+0A8h+var_30], xmm0 }
  R_AddCmdDrawTriangles(materialHandle, techType, 3u, indexCount, indices, vertexCount, xyzw, normal, 1, (const unsigned __int8 (*)[4])v16, st, doTransform, &v18, &v17);
}

/*
==============
R_AddCmdDrawTriangles
==============
*/
void R_AddCmdDrawTriangles(Material *materialHandle, MaterialTechniqueType techType, unsigned __int8 dimensions, unsigned __int16 indexCount, const unsigned __int16 *indices, unsigned __int16 vertexCount, const vec4_t *xyzw, const vec3_t *normal, bool singleColor, const unsigned __int8 (*color)[4], const vec2_t *st, bool doTransform, const vec3_t *position, const vec3_t *angles)
{
  const Material *v20; 
  const MaterialTechniqueSet *techniqueSet; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 
  GfxCmdDrawTriangles *CommandBufferVarSize_GfxCmdDrawTriangles; 
  GfxCmdDrawTriangles *v30; 
  __int64 v32; 
  __int64 v57; 
  int v80; 
  __int64 v81; 
  _DWORD *v82; 
  unsigned int v83; 
  unsigned int v86; 
  unsigned int Size; 
  unsigned int Size_4; 
  vec3_t v89; 
  vec3_t v90; 
  void *v91; 
  void *v92; 
  void *v93; 
  Material *v94; 
  tmat33_t<vec3_t> axis; 

  v93 = (void *)indices;
  v91 = (void *)color;
  v92 = (void *)st;
  *(_QWORD *)v89.v = angles;
  v94 = materialHandle;
  *(_QWORD *)v90.v = normal;
  v20 = R_RenderCommandMaterial(materialHandle);
  if ( !v20 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 6364, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 464, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
      __debugbreak();
  }
  if ( !v20->techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 465, ASSERT_TYPE_ASSERT, "( ( material->techniqueSet ) )", "( material->name ) = %s", v20->name) )
    __debugbreak();
  techniqueSet = v20->techniqueSet;
  if ( !techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 515, ASSERT_TYPE_ASSERT, "(techSet)", (const char *)&queryFormat, "techSet") )
    __debugbreak();
  if ( Material_TechSetHasTechnique(techniqueSet, techType) )
  {
    v22 = 2 * ((indexCount + 1) & 0xFFFFFFFE);
    v23 = 16 * vertexCount;
    Size = 12 * vertexCount;
    Size_4 = v23 + 24 + Size;
    v86 = 4 * vertexCount + Size_4;
    v24 = v22 + 8 * vertexCount + v86;
    if ( v24 <= 0xFFFF )
    {
      CommandBufferVarSize_GfxCmdDrawTriangles = R_GetCommandBufferVarSize_GfxCmdDrawTriangles_(RC_DRAW_TRIANGLES, v24);
      v30 = CommandBufferVarSize_GfxCmdDrawTriangles;
      if ( CommandBufferVarSize_GfxCmdDrawTriangles )
      {
        CommandBufferVarSize_GfxCmdDrawTriangles->material = v20;
        CommandBufferVarSize_GfxCmdDrawTriangles->techType = techType;
        CommandBufferVarSize_GfxCmdDrawTriangles->dimensions = dimensions;
        __asm
        {
          vmovaps [rsp+180h+var_40], xmm6
          vmovaps [rsp+180h+var_50], xmm7
        }
        CommandBufferVarSize_GfxCmdDrawTriangles->indexCount = indexCount;
        __asm { vmovaps [rsp+180h+var_60], xmm8 }
        CommandBufferVarSize_GfxCmdDrawTriangles->vertexCount = vertexCount;
        Profile_Begin(182);
        _RSI = v30 + 1;
        if ( doTransform )
        {
          AnglesToAxis(*(const vec3_t **)v89.v, &axis);
          if ( vertexCount )
          {
            v32 = vertexCount;
            _RAX = &xyzw->v[2];
            do
            {
              _RSI = (GfxCmdDrawTriangles *)((char *)_RSI + 16);
              __asm
              {
                vmovss  xmm7, dword ptr [rax-8]
                vmovss  xmm6, dword ptr [rax-4]
                vmovss  xmm8, dword ptr [rax]
              }
              _RAX += 4;
              __asm
              {
                vmulss  xmm3, xmm6, dword ptr [rbp+80h+axis+0Ch]
                vmulss  xmm2, xmm7, dword ptr [rbp+80h+axis]
                vmulss  xmm0, xmm8, dword ptr [rbp+80h+axis+18h]
                vaddss  xmm3, xmm3, xmm2
                vmulss  xmm2, xmm8, dword ptr [rbp+80h+axis+1Ch]
                vaddss  xmm1, xmm3, xmm0
                vaddss  xmm5, xmm1, dword ptr [rcx]
                vmulss  xmm1, xmm7, dword ptr [rbp+80h+axis+4]
                vmulss  xmm3, xmm6, dword ptr [rbp+80h+axis+10h]
                vaddss  xmm3, xmm3, xmm1
                vmulss  xmm1, xmm8, dword ptr [rbp+80h+axis+20h]
                vaddss  xmm0, xmm3, xmm2
                vmulss  xmm2, xmm7, dword ptr [rbp+80h+axis+8]
                vmulss  xmm3, xmm6, dword ptr [rbp+80h+axis+14h]
                vaddss  xmm4, xmm0, dword ptr [rcx+4]
                vaddss  xmm3, xmm3, xmm2
                vaddss  xmm0, xmm3, xmm1
                vaddss  xmm2, xmm0, dword ptr [rcx+8]
              }
              *(_DWORD *)&_RSI[-1].vertexCount = 1065353216;
              __asm
              {
                vmovss  dword ptr [rsi-8], xmm2
                vmovss  dword ptr [rsi-10h], xmm5
                vmovss  dword ptr [rsi-0Ch], xmm4
              }
              --v32;
            }
            while ( v32 );
          }
        }
        else
        {
          memcpy_0(&v30[1], xyzw, v23);
        }
        if ( *(_QWORD *)v90.v )
        {
          _RCX = (char *)&v30[1] + v23;
          if ( doTransform )
          {
            if ( vertexCount )
            {
              _RAX = *(_QWORD *)v90.v + 8i64;
              __asm { vmovaps [rsp+180h+var_70], xmm9 }
              v57 = vertexCount;
              do
              {
                _RCX += 12;
                __asm
                {
                  vmovss  xmm8, dword ptr [rax-8]
                  vmovss  xmm7, dword ptr [rax-4]
                  vmovss  xmm9, dword ptr [rax]
                }
                _RAX += 12i64;
                __asm
                {
                  vmulss  xmm2, xmm7, dword ptr [rbp+80h+axis+0Ch]
                  vmulss  xmm1, xmm8, dword ptr [rbp+80h+axis]
                  vmulss  xmm0, xmm8, dword ptr [rbp+80h+axis+4]
                  vaddss  xmm3, xmm2, xmm1
                  vmulss  xmm2, xmm9, dword ptr [rbp+80h+axis+18h]
                  vmulss  xmm1, xmm8, dword ptr [rbp+80h+axis+8]
                  vaddss  xmm6, xmm3, xmm2
                  vmulss  xmm3, xmm7, dword ptr [rbp+80h+axis+10h]
                  vmulss  xmm2, xmm9, dword ptr [rbp+80h+axis+1Ch]
                  vaddss  xmm4, xmm3, xmm0
                  vmulss  xmm3, xmm7, dword ptr [rbp+80h+axis+14h]
                  vaddss  xmm5, xmm4, xmm2
                  vmulss  xmm2, xmm9, dword ptr [rbp+80h+axis+20h]
                  vaddss  xmm4, xmm3, xmm1
                  vaddss  xmm1, xmm4, xmm2
                  vmovss  dword ptr [rcx-4], xmm1
                  vmovss  dword ptr [rcx-0Ch], xmm6
                  vmovss  dword ptr [rcx-8], xmm5
                }
                --v57;
              }
              while ( v57 );
              __asm { vmovaps xmm9, [rsp+180h+var_70] }
            }
          }
          else
          {
            memcpy_0(_RCX, *(const void **)v90.v, Size);
          }
        }
        __asm
        {
          vmovaps xmm8, [rsp+180h+var_60]
          vmovaps xmm7, [rsp+180h+var_50]
          vmovaps xmm6, [rsp+180h+var_40]
        }
        if ( v91 )
        {
          if ( singleColor )
          {
            if ( vertexCount )
            {
              v80 = *(_DWORD *)v91;
              v81 = vertexCount;
              v82 = (_DWORD *)((char *)&v30->header.id + Size_4);
              while ( v81 )
              {
                *v82++ = v80;
                --v81;
              }
            }
          }
          else
          {
            memcpy_0((char *)v30 + Size_4, v91, 4 * (unsigned int)vertexCount);
          }
        }
        v83 = 8 * vertexCount;
        if ( v92 )
          memcpy_0((char *)v30 + v86, v92, v83);
        memcpy_0((char *)&v30->header + 4 * vertexCount + v83 + Size_4, v93, v22);
        Profile_EndInternal(NULL);
      }
    }
    else
    {
      _RAX = *(_QWORD *)v89.v;
      __asm { vmovsd  xmm0, qword ptr [rax] }
      v90.v[2] = *(float *)(*(_QWORD *)v89.v + 8i64);
      _RAX = position;
      __asm
      {
        vmovsd  [rbp+80h+var_D0], xmm0
        vmovsd  xmm0, qword ptr [rax]
      }
      v89.v[2] = position->v[2];
      __asm { vmovsd  [rbp+80h+var_E0], xmm0 }
      R_AddCmdDrawTriangles_Split(v94, techType, dimensions, indexCount, (const unsigned __int16 *)v93, vertexCount, xyzw, normal, singleColor, (const unsigned __int8 (*)[4])v91, (const vec2_t *)v92, doTransform, &v89, &v90);
    }
  }
}

/*
==============
R_AddCmdDrawTriangles_Split
==============
*/
void R_AddCmdDrawTriangles_Split(Material *materialHandle, MaterialTechniqueType techType, unsigned __int8 dimensions, unsigned __int16 indexCount, const unsigned __int16 *indices, unsigned __int16 vertexCount, const vec4_t *xyzw, const vec3_t *normal, bool singleColor, const unsigned __int8 (*color)[4], const vec2_t *st, bool doTransform, const vec3_t *position, const vec3_t *angles)
{
  int v19; 
  _DWORD *m_ptr; 
  int v21; 
  int v22; 
  __int64 v23; 
  const unsigned __int8 (*v24)[4]; 
  unsigned __int16 v25; 
  _DWORD *v26; 
  __int64 i; 
  unsigned int v28; 
  int v29; 
  const unsigned __int16 *v30; 
  __int64 v31; 
  int v32; 
  int v33; 
  __int64 v34; 
  int v35; 
  int v36; 
  __int64 v37; 
  int v38; 
  Material *defaultMaterial; 
  __int64 v40; 
  int v41; 
  int v42; 
  unsigned __int64 v43; 
  _QWORD *CommandBufferInternal; 
  _QWORD *v45; 
  char *Value; 
  int *v47; 
  _QWORD *v48; 
  char *v49; 
  __int64 v50; 
  unsigned __int64 v51; 
  ThreadContext CurrentThreadContext; 
  vec2_t *v55; 
  _BYTE *v56; 
  int *v57; 
  __int64 v58; 
  __int64 v83; 
  _WORD *v103; 
  __int64 v104; 
  __int64 v110; 
  __int64 v111; 
  int v113; 
  unsigned int v114; 
  int v115; 
  int v116; 
  unsigned int v117; 
  unsigned int v119; 
  unsigned int v120; 
  int *v121; 
  _QWORD *v122; 
  __int64 v123; 
  _DWORD *v125; 
  __int64 v126; 
  Mem_LargeLocal v127; 
  Mem_LargeLocal v128; 
  tmat33_t<vec3_t> axis; 
  char v130; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
  }
  v19 = indexCount;
  Mem_LargeLocal::Mem_LargeLocal(&v128, 0x40000ui64, "IndexMappingsArray srcIndexToDestIndex");
  m_ptr = v128.m_ptr;
  v125 = v128.m_ptr;
  Mem_LargeLocal::Mem_LargeLocal(&v127, 0x40000ui64, "IndexMappingsArray destIndexToSrcIndex");
  v121 = (int *)v127.m_ptr;
  v21 = 0;
  v115 = 0;
  v22 = v19;
  v116 = v19;
  if ( v19 )
  {
    v23 = 0i64;
    v123 = 0i64;
    v24 = color;
    do
    {
      v25 = 0;
      v26 = m_ptr;
      for ( i = 0x10000i64; i; --i )
        *v26++ = -1;
      v28 = 24;
      v29 = v21;
      v113 = v21;
      v126 = v23;
      if ( v21 < v22 )
      {
        v30 = &indices[v23 + 2];
        do
        {
          v31 = *(v30 - 2);
          v32 = m_ptr[v31];
          v33 = 46;
          if ( v32 != -1 )
            v33 = 6;
          v34 = *(v30 - 1);
          v35 = v33 + 40;
          if ( m_ptr[v34] != -1 )
            v35 = v33;
          v36 = v35 + 40;
          if ( m_ptr[*v30] != -1 )
            v36 = v35;
          v28 += v36;
          if ( v28 > 0xFFF7 )
            break;
          if ( v32 == -1 )
          {
            m_ptr[v31] = v25;
            v121[v25++] = *(v30 - 2);
            LOWORD(v34) = *(v30 - 1);
          }
          if ( m_ptr[(unsigned __int16)v34] == -1 )
          {
            m_ptr[(unsigned __int16)v34] = v25;
            v121[v25++] = *(v30 - 1);
          }
          v37 = *v30;
          if ( m_ptr[v37] == -1 )
          {
            m_ptr[v37] = v25;
            v121[v25++] = *v30;
          }
          v21 += 3;
          v23 += 3i64;
          v30 += 3;
        }
        while ( v21 < v116 );
        v123 = v23;
        v115 = v21;
        v24 = color;
        v29 = v113;
      }
      v38 = v21 - v29;
      defaultMaterial = materialHandle;
      if ( materialHandle )
      {
        if ( !materialHandle->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 456, ASSERT_TYPE_ASSERT, "(handle->name)", (const char *)&queryFormat, "handle->name") )
          __debugbreak();
        if ( !*materialHandle->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 457, ASSERT_TYPE_ASSERT, "(handle->name[0])", (const char *)&queryFormat, "handle->name[0]") )
          __debugbreak();
      }
      else
      {
        defaultMaterial = rgp.defaultMaterial;
      }
      v40 = v25;
      v41 = 16 * v25;
      v114 = v41 + 24;
      v42 = 12 * v25;
      v120 = v42 + v41 + 24;
      v119 = v120 + 4 * v25;
      v117 = v120 + v42;
      v43 = (int)(v120 + v42 + 2 * ((v38 + 1) & 0xFFFFFFFE));
      if ( ((v43 + 7) & 0xFFFFFFFFFFFFFFF8ui64) < 0x18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2076, ASSERT_TYPE_ASSERT, "(AlignUp( size, alignof( T ) ) >= sizeof( T ))", (const char *)&queryFormat, "AlignUp( size, alignof( T ) ) >= sizeof( T )") )
        __debugbreak();
      CommandBufferInternal = R_GetCommandBufferInternal(RC_DRAW_TRIANGLES, v43, 8ui64);
      v45 = CommandBufferInternal;
      v122 = CommandBufferInternal;
      if ( !CommandBufferInternal )
        break;
      CommandBufferInternal[1] = defaultMaterial;
      *((_DWORD *)CommandBufferInternal + 1) = techType;
      *((_BYTE *)CommandBufferInternal + 16) = dimensions;
      if ( v38 >= 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 6249, ASSERT_TYPE_ASSERT, "(destIndexCount < 0xffff)", (const char *)&queryFormat, "destIndexCount < 0xffff") )
        __debugbreak();
      if ( (v38 < 0 || (unsigned int)v38 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v38, "signed", v38) )
        __debugbreak();
      *((_WORD *)v45 + 9) = v38;
      *((_WORD *)v45 + 10) = v25;
      Value = (char *)Sys_GetValue(0);
      v47 = (int *)(Value + 9376);
      if ( (unsigned int)(*((_DWORD *)Value + 2344) + 1) >= 3 )
      {
        LODWORD(v111) = 3;
        LODWORD(v110) = *((_DWORD *)Value + 2344) + 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v110, v111) )
          __debugbreak();
      }
      if ( (unsigned int)++*v47 >= 3 )
      {
        LODWORD(v111) = 3;
        LODWORD(v110) = *v47;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v110, v111) )
          __debugbreak();
      }
      v48 = Value + 2088;
      v49 = Value + 40;
      if ( *v48 < (unsigned __int64)v49 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
        __debugbreak();
      *v48 += 8i64;
      if ( *v48 >= (unsigned __int64)v48 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
        __debugbreak();
      *(_QWORD *)*v48 = v47;
      if ( *v48 <= (unsigned __int64)v49 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
        __debugbreak();
      v50 = *v47;
      v51 = __rdtsc();
      v47[v50 + 2] = v51;
      if ( Sys_HasValidCurrentThreadContext() )
        CurrentThreadContext = Sys_GetCurrentThreadContext();
      else
        CurrentThreadContext = THREAD_CONTEXT_COUNT;
      CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 182, NULL, 0);
      _RSI = v45 + 3;
      _RBX = (float *)((char *)v45 + v114);
      v55 = (vec2_t *)((char *)v122 + v119);
      v56 = (char *)v122 + v120;
      AnglesToAxis(angles, &axis);
      if ( (_DWORD)v40 )
      {
        v57 = v121;
        v58 = v40;
        _R9 = normal;
        _R15 = xyzw;
        do
        {
          _RAX = 2i64 * *v57;
          if ( doTransform )
          {
            __asm
            {
              vmovss  xmm7, dword ptr [r15+rax*8]
              vmovss  xmm8, dword ptr [r15+rax*8+4]
              vmovss  xmm9, dword ptr [r15+rax*8+8]
              vmulss  xmm3, xmm7, dword ptr [rbp+80h+axis]
              vmulss  xmm2, xmm8, dword ptr [rbp+80h+axis+0Ch]
              vaddss  xmm4, xmm3, xmm2
              vmulss  xmm1, xmm9, dword ptr [rbp+80h+axis+18h]
              vaddss  xmm6, xmm4, xmm1
              vmulss  xmm3, xmm7, dword ptr [rbp+80h+axis+4]
              vmulss  xmm1, xmm8, dword ptr [rbp+80h+axis+10h]
              vaddss  xmm4, xmm3, xmm1
              vmulss  xmm0, xmm9, dword ptr [rbp+80h+axis+1Ch]
              vaddss  xmm5, xmm4, xmm0
              vmulss  xmm3, xmm7, dword ptr [rbp+80h+axis+8]
              vmulss  xmm2, xmm8, dword ptr [rbp+80h+axis+14h]
              vaddss  xmm4, xmm3, xmm2
              vmulss  xmm0, xmm9, dword ptr [rbp+80h+axis+20h]
              vaddss  xmm3, xmm4, xmm0
              vaddss  xmm2, xmm6, dword ptr [rax]
              vaddss  xmm1, xmm5, dword ptr [rax+4]
              vaddss  xmm0, xmm3, dword ptr [rax+8]
              vmovss  dword ptr [rsi], xmm2
              vmovss  dword ptr [rsi+4], xmm1
              vmovss  dword ptr [rsi+8], xmm0
            }
            *((_DWORD *)_RSI + 3) = 1065353216;
          }
          else
          {
            *(vec4_t *)_RSI = xyzw[*v57];
          }
          _RSI += 2;
          if ( normal )
          {
            v83 = *v57;
            _RCX = 3 * v83;
            if ( doTransform )
            {
              __asm
              {
                vmovss  xmm7, dword ptr [r9+rcx*4]
                vmovss  xmm8, dword ptr [r9+rcx*4+4]
                vmovss  xmm9, dword ptr [r9+rcx*4+8]
                vmulss  xmm3, xmm7, dword ptr [rbp+80h+axis]
                vmulss  xmm2, xmm8, dword ptr [rbp+80h+axis+0Ch]
                vaddss  xmm4, xmm3, xmm2
                vmulss  xmm1, xmm9, dword ptr [rbp+80h+axis+18h]
                vaddss  xmm6, xmm4, xmm1
                vmulss  xmm3, xmm7, dword ptr [rbp+80h+axis+4]
                vmulss  xmm1, xmm8, dword ptr [rbp+80h+axis+10h]
                vaddss  xmm4, xmm3, xmm1
                vmulss  xmm0, xmm9, dword ptr [rbp+80h+axis+1Ch]
                vaddss  xmm5, xmm4, xmm0
                vmulss  xmm3, xmm7, dword ptr [rbp+80h+axis+8]
                vmulss  xmm2, xmm8, dword ptr [rbp+80h+axis+14h]
                vaddss  xmm4, xmm3, xmm2
                vmulss  xmm0, xmm9, dword ptr [rbp+80h+axis+20h]
                vaddss  xmm2, xmm4, xmm0
                vmovss  dword ptr [rbx], xmm6
                vmovss  dword ptr [rbx+4], xmm5
                vmovss  dword ptr [rbx+8], xmm2
              }
            }
            else
            {
              *_RBX = normal[v83].v[0];
              _RBX[1] = normal[*v57].v[1];
              _RBX[2] = normal[*v57].v[2];
            }
            _RBX += 3;
          }
          if ( st )
            *v55++ = st[*v57];
          if ( v24 )
          {
            if ( singleColor )
            {
              *v56 = *(_BYTE *)v24;
              v56[1] = (*v24)[1];
              v56[2] = (*v24)[2];
              v56[3] = (*v24)[3];
            }
            else
            {
              *v56 = v24[*v57][0];
              v56[1] = v24[*v57][1];
              v56[2] = v24[*v57][2];
              v56[3] = v24[*v57][3];
            }
            v56 += 4;
          }
          ++v57;
          --v58;
        }
        while ( v58 );
        m_ptr = v125;
      }
      v103 = (_WORD *)((char *)v122 + v117);
      v104 = v126;
      v23 = v123;
      if ( v126 < v123 )
      {
        do
          *v103++ = m_ptr[indices[v104++]];
        while ( v104 < v123 );
        v24 = color;
      }
      Profile_EndInternal(NULL);
      v21 = v115;
      v22 = v116;
    }
    while ( v115 < v116 );
  }
  Mem_LargeLocal::~Mem_LargeLocal(&v127);
  Mem_LargeLocal::~Mem_LargeLocal(&v128);
  _R11 = &v130;
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
R_AddCmdEndOfList
==============
*/
void R_AddCmdEndOfList(void)
{
  R_GetCommandBufferInternal(RC_END_OF_LIST, 4ui64, 2ui64);
}

/*
==============
R_AddCmdEndSurface
==============
*/
void R_AddCmdEndSurface(void)
{
  R_GetCommandBufferInternal(RC_END_SURFACE, 4ui64, 2ui64);
}

/*
==============
R_AddCmdProjectionSet2D
==============
*/
void R_AddCmdProjectionSet2D(void)
{
  _DWORD *CommandBufferInternal; 

  CommandBufferInternal = R_GetCommandBufferInternal(RC_PROJECTION_SET, 8ui64, 4ui64);
  if ( CommandBufferInternal )
    CommandBufferInternal[1] = 0;
}

/*
==============
R_AddCmdProjectionSet3D
==============
*/
void R_AddCmdProjectionSet3D(void)
{
  _DWORD *CommandBufferInternal; 

  CommandBufferInternal = R_GetCommandBufferInternal(RC_PROJECTION_SET, 8ui64, 4ui64);
  if ( CommandBufferInternal )
    CommandBufferInternal[1] = 1;
}

/*
==============
R_AddCmdSaveScreenSection
==============
*/

void __fastcall R_AddCmdSaveScreenSection(double viewX, double viewY, double viewWidth, double viewHeight, int clientID)
{
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmm9, xmm0
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
    vmovaps xmm8, xmm1
  }
  if ( (unsigned int)clientID > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 5871, ASSERT_TYPE_ASSERT, "( 0 ) <= ( clientID ) && ( clientID ) <= ( 2 )", "clientID not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", clientID, 0i64, 2) )
    __debugbreak();
  _RBX = R_GetCommandBufferInternal(RC_SAVE_SCREEN_SECTION, 0x18ui64, 4ui64);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 5875, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  __asm
  {
    vmovss  dword ptr [rbx+4], xmm9
    vmovaps xmm9, [rsp+88h+var_48]
    vmovss  dword ptr [rbx+8], xmm8
    vmovaps xmm8, [rsp+88h+var_38]
    vmovss  dword ptr [rbx+0Ch], xmm7
    vmovaps xmm7, [rsp+88h+var_28]
    vmovss  dword ptr [rbx+10h], xmm6
    vmovaps xmm6, [rsp+88h+var_18]
  }
  _RBX[5] = clientID;
}

/*
==============
R_AddCmdSetCodeTexture
==============
*/
void R_AddCmdSetCodeTexture(unsigned int constant, const GfxImage *image)
{
  _DWORD *CommandBufferInternal; 

  CommandBufferInternal = R_GetCommandBufferInternal(RC_SET_CODE_TEXTURE, 0x10ui64, 8ui64);
  if ( CommandBufferInternal )
  {
    CommandBufferInternal[1] = constant;
    *((_QWORD *)CommandBufferInternal + 1) = image;
  }
}

/*
==============
R_AddCmdSetFirstUIMask
==============
*/

void __fastcall R_AddCmdSetFirstUIMask(double maskX, double maskY, double maskWidth, double maskHeight, float maskRotation, float alphaScale, float alphaOffset, float maskUMin, float maskVMin, float maskUMax, float maskVMax, const vec2_t *viewportSize, GfxImage *image)
{
  GfxCmdSetUIMask *CommandBufferInternal; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
    vmovaps xmm8, xmm1
    vmovaps xmm9, xmm0
  }
  CommandBufferInternal = (GfxCmdSetUIMask *)R_GetCommandBufferInternal(RC_SET_FIRST_UI_MASK, 0x30ui64, 8ui64);
  if ( CommandBufferInternal )
  {
    __asm
    {
      vmovss  xmm1, [rsp+0B8h+maskVMax]
      vmovss  xmm0, [rsp+0B8h+maskUMax]
      vmovss  [rsp+0B8h+var_60], xmm1
      vmovss  xmm1, [rsp+0B8h+maskVMin]
      vmovss  [rsp+0B8h+var_68], xmm0
      vmovss  xmm0, [rsp+0B8h+maskUMin]
      vmovss  [rsp+0B8h+var_70], xmm1
      vmovss  xmm1, [rsp+0B8h+alphaOffset]
      vmovss  [rsp+0B8h+var_78], xmm0
      vmovss  xmm0, [rsp+0B8h+alphaScale]
      vmovss  [rsp+0B8h+var_80], xmm1
      vmovss  xmm1, [rsp+0B8h+maskRotation]
      vmovss  [rsp+0B8h+var_88], xmm0
      vmovss  [rsp+0B8h+var_90], xmm1
      vmovaps xmm1, xmm9; maskX
      vmovaps xmm3, xmm7; maskWidth
      vmovaps xmm2, xmm8; maskY
      vmovss  [rsp+0B8h+var_98], xmm6
    }
    R_SetUIMaskCommandParams(CommandBufferInternal, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v38, v39, v40, v41, v42, v43, v44, v45, viewportSize, image);
  }
  _R11 = &retaddr;
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
R_AddCmdSetScissorRect
==============
*/
void R_AddCmdSetScissorRect(int x, int y, int width, int height)
{
  _DWORD *CommandBufferInternal; 
  __int64 v9; 

  if ( x < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 3705, ASSERT_TYPE_ASSERT, "( ( x >= 0 ) )", "( x ) = %i", x) )
    __debugbreak();
  if ( y < 0 )
  {
    LODWORD(v9) = y;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 3706, ASSERT_TYPE_ASSERT, "( ( y >= 0 ) )", "( y ) = %i", v9) )
      __debugbreak();
  }
  if ( width < 0 )
  {
    LODWORD(v9) = width;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 3707, ASSERT_TYPE_ASSERT, "( ( width >= 0 ) )", "( width ) = %i", v9) )
      __debugbreak();
  }
  if ( height < 0 )
  {
    LODWORD(v9) = height;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 3708, ASSERT_TYPE_ASSERT, "( ( height >= 0 ) )", "( height ) = %i", v9) )
      __debugbreak();
  }
  CommandBufferInternal = R_GetCommandBufferInternal(RC_SET_SCISSOR, 0x14ui64, 4ui64);
  if ( !CommandBufferInternal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 3712, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  CommandBufferInternal[2] = y;
  CommandBufferInternal[3] = width;
  CommandBufferInternal[4] = height;
  CommandBufferInternal[1] = x;
}

/*
==============
R_AddCmdSetSecondUIMask
==============
*/

void __fastcall R_AddCmdSetSecondUIMask(double maskX, double maskY, double maskWidth, double maskHeight, float maskRotation, float alphaScale, float alphaOffset, float maskUMin, float maskVMin, float maskUMax, float maskVMax, const vec2_t *viewportSize, GfxImage *image)
{
  GfxCmdSetUIMask *CommandBufferInternal; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
    vmovaps xmm8, xmm1
    vmovaps xmm9, xmm0
  }
  CommandBufferInternal = (GfxCmdSetUIMask *)R_GetCommandBufferInternal(RC_SET_SECOND_UI_MASK, 0x30ui64, 8ui64);
  if ( CommandBufferInternal )
  {
    __asm
    {
      vmovss  xmm1, [rsp+0B8h+maskVMax]
      vmovss  xmm0, [rsp+0B8h+maskUMax]
      vmovss  [rsp+0B8h+var_60], xmm1
      vmovss  xmm1, [rsp+0B8h+maskVMin]
      vmovss  [rsp+0B8h+var_68], xmm0
      vmovss  xmm0, [rsp+0B8h+maskUMin]
      vmovss  [rsp+0B8h+var_70], xmm1
      vmovss  xmm1, [rsp+0B8h+alphaOffset]
      vmovss  [rsp+0B8h+var_78], xmm0
      vmovss  xmm0, [rsp+0B8h+alphaScale]
      vmovss  [rsp+0B8h+var_80], xmm1
      vmovss  xmm1, [rsp+0B8h+maskRotation]
      vmovss  [rsp+0B8h+var_88], xmm0
      vmovss  [rsp+0B8h+var_90], xmm1
      vmovaps xmm1, xmm9; maskX
      vmovaps xmm3, xmm7; maskWidth
      vmovaps xmm2, xmm8; maskY
      vmovss  [rsp+0B8h+var_98], xmm6
    }
    R_SetUIMaskCommandParams(CommandBufferInternal, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v38, v39, v40, v41, v42, v43, v44, v45, viewportSize, image);
  }
  _R11 = &retaddr;
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
R_AddCmdSetUIBlur
==============
*/

void __fastcall R_AddCmdSetUIBlur(const bool enabled, double scale)
{
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  _RAX = R_GetCommandBufferInternal(RC_SET_UI_BLUR, 8ui64, 4ui64);
  if ( _RAX )
  {
    if ( enabled && frontEndDataOut->viewInfoCount )
    {
      __asm
      {
        vmovss  dword ptr [rax+4], xmm6
        vmovaps xmm6, [rsp+38h+var_18]
      }
      return;
    }
    _RAX[1] = 0;
  }
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
}

/*
==============
R_AddCmdSetUICalibrationSwatchColor
==============
*/
void R_AddCmdSetUICalibrationSwatchColor(const vec4_t *color)
{
  float *CommandBufferInternal; 

  CommandBufferInternal = (float *)R_GetCommandBufferInternal(RC_SET_UI_CALIBRATION_SWATCH_COLOR, 0x14ui64, 4ui64);
  if ( CommandBufferInternal )
  {
    CommandBufferInternal[1] = color->v[0];
    CommandBufferInternal[2] = color->v[1];
    CommandBufferInternal[3] = color->v[2];
    CommandBufferInternal[4] = color->v[3];
  }
}

/*
==============
R_AddCmdSetUIColorMatrix
==============
*/
void R_AddCmdSetUIColorMatrix(const tmat33_t<vec3_t> *matrix)
{
  _RBX = matrix;
  _RAX = R_GetCommandBufferInternal(RC_SET_UI_COLOR_MATRIX, 0x28ui64, 4ui64);
  if ( _RAX )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx]
      vmovups ymmword ptr [rax+4], ymm0
    }
    _RAX[9] = LODWORD(_RBX->m[2].v[2]);
  }
}

/*
==============
R_AddCmdSetUIColorOp
==============
*/

void __fastcall R_AddCmdSetUIColorOp(const unsigned __int8 op, double param)
{
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  _RAX = R_GetCommandBufferInternal(RC_SET_UI_COLOR_OP, 0xCui64, 4ui64);
  if ( _RAX )
  {
    __asm { vmovss  dword ptr [rax+8], xmm6 }
    _RAX[4] = op;
  }
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
}

/*
==============
R_AddCmdSetUIGlitch
==============
*/
void R_AddCmdSetUIGlitch(const unsigned __int8 effectIntensity, const unsigned __int8 blockWidth, const unsigned __int8 blockHeight, const unsigned __int8 distortRange, const float maskPitch)
{
  _RAX = R_GetCommandBufferInternal(RC_SET_UI_GLITCH, 0xCui64, 4ui64);
  if ( _RAX )
  {
    __asm
    {
      vmovss  xmm0, [rsp+28h+maskPitch]
      vmovss  dword ptr [rax+8], xmm0
    }
    _RAX[4] = effectIntensity;
    _RAX[5] = blockWidth;
    _RAX[6] = blockHeight;
    _RAX[7] = distortRange;
  }
}

/*
==============
R_AddCmdSetUIPixelGrid
==============
*/
void R_AddCmdSetUIPixelGrid(const unsigned __int8 blockWidth, const unsigned __int8 blockHeight, const unsigned __int8 gutterWidth, const unsigned __int8 gutterHeight, const float contrast)
{
  _RAX = R_GetCommandBufferInternal(RC_SET_UI_PIXEL_GRID, 0xCui64, 4ui64);
  if ( _RAX )
  {
    __asm
    {
      vmovss  xmm0, [rsp+28h+contrast]
      vmovss  dword ptr [rax+8], xmm0
    }
    _RAX[4] = blockWidth;
    _RAX[5] = blockHeight;
    _RAX[6] = gutterWidth;
    _RAX[7] = gutterHeight;
  }
}

/*
==============
R_AddCmdSetViewportValues
==============
*/
void R_AddCmdSetViewportValues(int x, int y, int width, int height)
{
  _DWORD *CommandBufferInternal; 
  __int64 v9; 

  if ( width <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 3687, ASSERT_TYPE_ASSERT, "( ( width > 0 ) )", "( width ) = %i", width) )
    __debugbreak();
  if ( height <= 0 )
  {
    LODWORD(v9) = height;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 3688, ASSERT_TYPE_ASSERT, "( ( height > 0 ) )", "( height ) = %i", v9) )
      __debugbreak();
  }
  CommandBufferInternal = R_GetCommandBufferInternal(RC_SET_VIEWPORT, 0x14ui64, 4ui64);
  if ( !CommandBufferInternal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 3692, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  CommandBufferInternal[2] = y;
  CommandBufferInternal[3] = width;
  CommandBufferInternal[4] = height;
  CommandBufferInternal[1] = x;
}

/*
==============
R_AddCmdUIRttBegin
==============
*/
void R_AddCmdUIRttBegin(unsigned int rttHandle)
{
  _DWORD *CommandBufferInternal; 

  CommandBufferInternal = R_GetCommandBufferInternal(RC_RTT_BEGIN, 0x28ui64, 8ui64);
  if ( CommandBufferInternal )
  {
    CommandBufferInternal[1] = rttHandle;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 6568, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
      __debugbreak();
    MEMORY[4] = rttHandle;
  }
}

/*
==============
R_AddCmdUIRttEnd
==============
*/
void R_AddCmdUIRttEnd(LocalClientNum_t clientIndex, unsigned int rttHandle)
{
  _DWORD *CommandBufferInternal; 

  R_RTT_NotifyUpdated(clientIndex, rttHandle);
  CommandBufferInternal = R_GetCommandBufferInternal(RC_RTT_END, 0x28ui64, 8ui64);
  if ( CommandBufferInternal )
  {
    CommandBufferInternal[1] = rttHandle;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 6578, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
      __debugbreak();
    MEMORY[4] = rttHandle;
  }
}

/*
==============
R_AddCmdUISetCodeSampler
==============
*/
void R_AddCmdUISetCodeSampler(unsigned __int16 sampler, bool singleChannel)
{
  _WORD *CommandBufferInternal; 

  CommandBufferInternal = R_GetCommandBufferInternal(RC_SET_UI_SAMPLER, 8ui64, 2ui64);
  if ( CommandBufferInternal )
  {
    CommandBufferInternal[2] = sampler;
    *((_BYTE *)CommandBufferInternal + 6) = singleChannel;
  }
}

/*
==============
R_AddCmdUISetPixelShapeParams
==============
*/

void __fastcall R_AddCmdUISetPixelShapeParams(GfxPixelShapeType pixelShapeType, double innerRadius, double outerRadius)
{
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps xmm7, xmm1
    vmovaps xmm6, xmm2
  }
  if ( pixelShapeType != GFX_PIXEL_SHAPE_TYPE_CIRCLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 6598, ASSERT_TYPE_ASSERT, "(pixelShapeType == GFX_PIXEL_SHAPE_TYPE_CIRCLE)", (const char *)&queryFormat, "pixelShapeType == GFX_PIXEL_SHAPE_TYPE_CIRCLE") )
    __debugbreak();
  _RAX = R_GetCommandBufferInternal(RC_SET_UI_PIXEL_SHAPE_PARAMS, 0xCui64, 4ui64);
  __asm
  {
    vmovss  dword ptr [rax+4], xmm7
    vmovaps xmm7, [rsp+58h+var_28]
    vmovss  dword ptr [rax+8], xmm6
    vmovaps xmm6, [rsp+58h+var_18]
  }
}

/*
==============
R_AddCmdUISetScopeIndex
==============
*/
void R_AddCmdUISetScopeIndex(int index, bool applyScopeBufferWeight)
{
  _DWORD *CommandBufferInternal; 

  if ( index >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 6587, ASSERT_TYPE_ASSERT, "(index < 2)", (const char *)&queryFormat, "index < 2") )
    __debugbreak();
  CommandBufferInternal = R_GetCommandBufferInternal(RC_SET_UI_SCOPE_FILTER, 0xCui64, 4ui64);
  if ( CommandBufferInternal )
  {
    CommandBufferInternal[1] = index;
    *((_BYTE *)CommandBufferInternal + 8) = applyScopeBufferWeight;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 6589, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
      __debugbreak();
    MEMORY[4] = index;
    MEMORY[8] = applyScopeBufferWeight;
  }
}

/*
==============
R_AddDrawRect2DEntry
==============
*/

void __fastcall R_AddDrawRect2DEntry(GfxCmdDrawRect2D *cmd, double x, double y, double width, float height, const GfxColor *color)
{
  GfxCmdDrawRect2D *v6; 
  unsigned __int64 v9; 

  v6 = cmd;
  __asm { vmovss  xmm0, [rsp+58h+height] }
  _R8 = cmd->rectCount;
  __asm
  {
    vmovss  dword ptr [rcx+r8*4+8], xmm1
    vmovss  dword ptr [rcx+r8*4+0Ch], xmm2
    vmovss  dword ptr [rcx+r8*4+10h], xmm3
    vmovss  dword ptr [rcx+r8*4+14h], xmm0
  }
  cmd->rects[_R8].color = *color;
  v9 = 20i64 * ++cmd->rectCount + 8;
  if ( v9 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned __int16)v9, "unsigned", v9) )
    __debugbreak();
  if ( v6->header.byteCount < (unsigned __int16)v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 5998, ASSERT_TYPE_ASSERT, "(cmd->header.byteCount >= truncate_cast<GfxCmdHeaderSize_t>( sizeof( GfxCmdDrawRect2D ) + ( cmd->rectCount - 1 ) * sizeof( GfxCmdDrawRect2D::Rect ) ))", (const char *)&queryFormat, "cmd->header.byteCount >= truncate_cast<GfxCmdHeaderSize_t>( sizeof( GfxCmdDrawRect2D ) + ( cmd->rectCount - 1 ) * sizeof( GfxCmdDrawRect2D::Rect ) )") )
    __debugbreak();
}

/*
==============
R_AlignNextCommand
==============
*/
bool R_AlignNextCommand(const GfxRenderCommand renderCmd, const unsigned __int64 alignment)
{
  unsigned __int64 v4; 
  unsigned __int64 v5; 
  unsigned __int8 *cmds; 
  unsigned __int64 usedTotal; 
  unsigned __int64 v8; 
  bool result; 
  unsigned __int16 v10; 
  GfxCmdArray *v11; 
  unsigned __int64 v12; 
  __int64 v13; 

  if ( !Sys_IsUpdateScreenThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 1926, ASSERT_TYPE_ASSERT, "(Sys_IsUpdateScreenThread())", (const char *)&queryFormat, "Sys_IsUpdateScreenThread()") )
    __debugbreak();
  if ( (unsigned int)renderCmd > RC_SET_UI_SAMPLER )
  {
    LODWORD(v13) = renderCmd;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 1927, ASSERT_TYPE_ASSERT, "( ( renderCmd >= 0 && renderCmd < RC_COUNT ) )", "( renderCmd ) = %i", v13) )
      __debugbreak();
  }
  v4 = alignment - 1;
  v5 = alignment & (alignment - 1);
  if ( v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 1928, ASSERT_TYPE_ASSERT, "( ( IsPowerOf2( alignment ) ) )", "( alignment ) = %zu", alignment) )
    __debugbreak();
  if ( alignment > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 1929, ASSERT_TYPE_ASSERT, "( ( alignment <= GFXCMD_MAX_ALIGNMENT ) )", "( alignment ) = %zu", alignment) )
    __debugbreak();
  cmds = s_cmdList->cmds;
  if ( (!alignment || v5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 670, ASSERT_TYPE_ASSERT, "(align > 0 && IsPowerOf2( align ))", (const char *)&queryFormat, "align > 0 && IsPowerOf2( align )") )
    __debugbreak();
  if ( (v4 & (unsigned __int64)cmds) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 1930, ASSERT_TYPE_ASSERT, "(IsAligned( s_cmdList->cmds, alignment ))", (const char *)&queryFormat, "IsAligned( s_cmdList->cmds, alignment )") )
    __debugbreak();
  if ( !rg.inFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 1932, ASSERT_TYPE_ASSERT, "(rg.inFrame)", (const char *)&queryFormat, "rg.inFrame") )
    __debugbreak();
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 1934, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  if ( frontEndDataOut->finishReady && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 1936, ASSERT_TYPE_ASSERT, "(!frontEndDataOut->finishReady)", (const char *)&queryFormat, "!frontEndDataOut->finishReady") )
    __debugbreak();
  usedTotal = s_cmdList->usedTotal;
  if ( (!alignment || v5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 679, ASSERT_TYPE_ASSERT, "(align > 0 && IsPowerOf2( align ))", (const char *)&queryFormat, "align > 0 && IsPowerOf2( align )") )
    __debugbreak();
  v8 = (~v4 & (usedTotal + alignment - 1)) - s_cmdList->usedTotal;
  if ( v8 )
  {
    result = R_CheckCommandBufferWarnings(renderCmd, v8);
    if ( !result )
      return result;
    if ( !s_cmdList->lastCmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 1948, ASSERT_TYPE_ASSERT, "(s_cmdList->lastCmd)", (const char *)&queryFormat, "s_cmdList->lastCmd") )
      __debugbreak();
    v10 = truncate_cast<unsigned short,unsigned __int64>(v8 + s_cmdList->lastCmd->byteCount);
    v11 = s_cmdList;
    s_cmdList->lastCmd->byteCount = v10;
    v12 = 0i64;
    v11->usedTotal += v8;
    if ( renderCmd < RC_FIRST_NONCRITICAL )
      v12 = v8;
    v11->usedCritical += v12;
  }
  return 1;
}

/*
==============
R_AllocateConstantBufferBegin
==============
*/
GfxConstantBufferDesc *R_AllocateConstantBufferBegin(GfxConstantBufferDesc *result, CmdBufState *state, __int64 binding, unsigned int size)
{
  GfxConstantBufferAllocations *constantBufferAllocations; 
  GfxConstantBufferInfo *constantBufferInfo; 
  unsigned int v8; 
  int beginIndexReady; 
  unsigned __int8 *v10; 
  GfxConstantBufferDesc *v11; 
  __int64 v12; 
  int constantPageOffset; 

  constantBufferAllocations = state->constantBufferAllocations;
  if ( !constantBufferAllocations && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 697, ASSERT_TYPE_ASSERT, "(constantBufferAllocations)", (const char *)&queryFormat, "constantBufferAllocations") )
    __debugbreak();
  constantBufferInfo = constantBufferAllocations->constantBufferInfo;
  if ( !constantBufferAllocations->constantBufferInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 703, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  if ( constantBufferInfo->type >= (unsigned int)GFX_CONSTANT_BUFFER_INFO_COUNT )
  {
    LODWORD(v12) = constantBufferInfo->type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 704, ASSERT_TYPE_ASSERT, "(unsigned)( info->type ) < (unsigned)( GFX_CONSTANT_BUFFER_INFO_COUNT )", "info->type doesn't index GFX_CONSTANT_BUFFER_INFO_COUNT\n\t%i not in [0, %i)", v12, 2) )
      __debugbreak();
  }
  v8 = (size + 63) & 0xFFFFFFC0;
  if ( constantBufferInfo->type )
  {
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 643, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
      __debugbreak();
    constantPageOffset = constantBufferAllocations->constantPageOffset;
    if ( constantBufferAllocations->reserveOverflow )
      goto LABEL_26;
    if ( constantPageOffset + v8 - constantBufferAllocations->constantLastCheckedOffset > constantBufferAllocations->reserveSize )
    {
      constantBufferAllocations->reserveOverflow = 1;
      R_WarnOncePerFrame(R_WARN_CONSTANT_BUFFER_RESERVE_OVERFLOW, state, binding);
    }
    if ( constantBufferAllocations->reserveOverflow )
    {
LABEL_26:
      v10 = &constantBufferInfo->linear.buf[constantBufferAllocations->constantLastCheckedOffset];
    }
    else
    {
      constantBufferAllocations->constantPageOffset += v8;
      v10 = &constantBufferInfo->linear.buf[constantPageOffset];
    }
  }
  else
  {
    if ( v8 >= constantBufferInfo->linear.bufSize )
    {
      LODWORD(v12) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 676, ASSERT_TYPE_ASSERT, "( ( size < ring->bufSize ) )", "( size ) = %i", v12) )
        __debugbreak();
    }
    beginIndexReady = 0;
    if ( constantBufferInfo->ring[0].ringBuffer.beginIndexReady + v8 <= constantBufferInfo->linear.bufSize )
      beginIndexReady = constantBufferInfo->ring[0].ringBuffer.beginIndexReady;
    R_DynamicRingBufferAcquire(&constantBufferInfo->ring[0].ringBuffer, beginIndexReady, beginIndexReady + v8);
    if ( !beginIndexReady )
      FlushGpuCacheRange(g_dx.immediateContext, 0x8840000u, constantBufferInfo->linear.buf, constantBufferInfo->linear.bufSize);
    v10 = &constantBufferInfo->linear.buf[beginIndexReady];
  }
  result->bufferData = v10;
  v11 = result;
  result->bufferSize = v8;
  return v11;
}

/*
==============
R_AllocateConstantBufferEnd
==============
*/
void R_AllocateConstantBufferEnd(CmdBufState *state, const GfxConstantBufferDesc *cbuff)
{
  ;
}

/*
==============
R_Async2D_Render
==============
*/
void R_Async2D_Render(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, GfxBackEndData *gfxData, const GfxAsync2DRenderResources *resources, const bool receivePPFX)
{
  const void *v18; 
  __int64 v19; 
  __int64 v20; 
  GfxCmdBuf *v21; 
  GfxCmdBufContext v23; 
  GfxAsync2DRenderData data; 

  _RBX = gfxContext;
  _RDI = resources;
  memset_0(&data.resources, 0, 0x80ui64);
  __asm { vmovups ymm1, ymmword ptr [rdi+20h] }
  data.triList.verts = data.triList.vertsBuffer;
  data.resources.exposureBuffer = NULL;
  data.triList.maxIndices = 6144;
  data.triList.maxVertices = 4096;
  data.triList.indices = data.triList.indsBuffer;
  *(_QWORD *)&data.triList.indexCount = 0i64;
  *(_QWORD *)&data.triList.viewStatsTarget = 0i64;
  data.triList.finishedFilling = 0;
  data.viewInfo = viewInfo;
  data.gfxData = gfxData;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rbp+23050h+data.resources.universalClut], xmm0
  }
  data.triList.resetStats = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups xmmword ptr [rsp+23150h+data.gfxContext.source], xmm0
    vmovups ymm0, ymmword ptr [rdi]
    vmovups ymmword ptr [rbp+23050h+data.resources.displayColor.baseclass_0.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [rdi+40h]
    vmovups ymmword ptr [rbp+23050h+data.resources.sceneColor.baseclass_0.m_surfaceID], ymm1
    vmovups ymm1, ymmword ptr [rdi+60h]
    vmovups ymmword ptr [rbp+23050h+data.resources.sceneDepth.baseclass_0.m_surfaceID], ymm0
    vmovups xmm0, xmmword ptr [rdi+80h]
    vmovups ymmword ptr [rbp+23050h+data.resources.packedStencil.m_surfaceID], ymm1
    vmovsd  xmm1, qword ptr [rdi+90h]
    vmovups xmmword ptr [rbp+23050h+data.resources.universalClut], xmm0
    vmovsd  [rbp+23050h+data.resources.exposureBuffer], xmm1
  }
  if ( receivePPFX )
  {
    v18 = viewInfo->displayCmds[3];
    v19 = 913320i64;
    v20 = 904194i64;
  }
  else
  {
    v18 = viewInfo->displayCmds[1];
    v19 = 904200i64;
    v20 = 904193i64;
  }
  v21 = (GfxCmdBuf *)((char *)gfxData + v19);
  RB_Async2D_InitContext(&data, (GfxCmdBuf *)((char *)gfxData + v19), receivePPFX);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+23150h+data.gfxContext.source]
    vmovdqa [rsp+23150h+var_23130], xmm0
  }
  RB_ExecuteRenderCommandsLoop(&v23, v18, NULL);
  RB_Async2D_ShutdownContext(&data, v21);
  *((_BYTE *)&gfxData->mesh[0].indexCount + v20) = 0;
}

/*
==============
R_BeginClientCmdList2D
==============
*/
void R_BeginClientCmdList2D(const GfxClientCmdListType list)
{
  __int64 v1; 
  GfxViewInfo *v2; 
  __int64 v3; 
  int v4; 

  v1 = list;
  if ( !Sys_IsUpdateScreenThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2126, ASSERT_TYPE_ASSERT, "(Sys_IsUpdateScreenThread())", (const char *)&queryFormat, "Sys_IsUpdateScreenThread()") )
    __debugbreak();
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2127, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  if ( frontEndDataOut->finishReady && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2129, ASSERT_TYPE_ASSERT, "(!frontEndDataOut->finishReady)", (const char *)&queryFormat, "!frontEndDataOut->finishReady") )
    __debugbreak();
  if ( !Sys_IsUpdateScreenThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2111, ASSERT_TYPE_ASSERT, "(Sys_IsUpdateScreenThread())", (const char *)&queryFormat, "Sys_IsUpdateScreenThread()") )
    __debugbreak();
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2112, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  if ( frontEndDataOut->finishReady && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2114, ASSERT_TYPE_ASSERT, "(!frontEndDataOut->finishReady)", (const char *)&queryFormat, "!frontEndDataOut->finishReady") )
    __debugbreak();
  v2 = &frontEndDataOut->viewInfo[frontEndDataOut->viewInfoIndex];
  if ( (unsigned int)v1 >= 0x10 )
  {
    v4 = 16;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2119, ASSERT_TYPE_ASSERT, "(unsigned)( list ) < (unsigned)( ( sizeof( *array_counter( viewInfo->displayCmds ) ) + 0 ) )", "list doesn't index ARRAY_COUNT( viewInfo->displayCmds )\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  R_AlignNextCommand(RC_END_OF_LIST, 8ui64);
  v2->displayCmds[v1] = &s_cmdList->cmds[s_cmdList->usedTotal];
}

/*
==============
R_BeginClientCmdList2D
==============
*/
void R_BeginClientCmdList2D(void)
{
  unsigned int v0; 
  const void **v1; 
  GfxViewInfo *v2; 

  if ( !Sys_IsUpdateScreenThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2147, ASSERT_TYPE_ASSERT, "(Sys_IsUpdateScreenThread())", (const char *)&queryFormat, "Sys_IsUpdateScreenThread()") )
    __debugbreak();
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2148, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  if ( frontEndDataOut->finishReady && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2150, ASSERT_TYPE_ASSERT, "(!frontEndDataOut->finishReady)", (const char *)&queryFormat, "!frontEndDataOut->finishReady") )
    __debugbreak();
  v0 = 0;
  v1 = &frontEndDataOut->viewInfo[frontEndDataOut->viewInfoIndex].displayCmds[1];
  do
  {
    *(v1 - 1) = NULL;
    v0 += 16;
    *v1 = NULL;
    v1[1] = NULL;
    v1[2] = NULL;
    v1[3] = NULL;
    v1[4] = NULL;
    v1[5] = NULL;
    v1[6] = NULL;
    v1[7] = NULL;
    v1[8] = NULL;
    v1[9] = NULL;
    v1[10] = NULL;
    v1[11] = NULL;
    v1[12] = NULL;
    v1[13] = NULL;
    v1[14] = NULL;
    v1 += 16;
  }
  while ( v0 < 0x10 );
  if ( !Sys_IsUpdateScreenThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2126, ASSERT_TYPE_ASSERT, "(Sys_IsUpdateScreenThread())", (const char *)&queryFormat, "Sys_IsUpdateScreenThread()") )
    __debugbreak();
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2127, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  if ( frontEndDataOut->finishReady && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2129, ASSERT_TYPE_ASSERT, "(!frontEndDataOut->finishReady)", (const char *)&queryFormat, "!frontEndDataOut->finishReady") )
    __debugbreak();
  if ( !Sys_IsUpdateScreenThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2111, ASSERT_TYPE_ASSERT, "(Sys_IsUpdateScreenThread())", (const char *)&queryFormat, "Sys_IsUpdateScreenThread()") )
    __debugbreak();
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2112, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  if ( frontEndDataOut->finishReady && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2114, ASSERT_TYPE_ASSERT, "(!frontEndDataOut->finishReady)", (const char *)&queryFormat, "!frontEndDataOut->finishReady") )
    __debugbreak();
  v2 = &frontEndDataOut->viewInfo[frontEndDataOut->viewInfoIndex];
  R_AlignNextCommand(RC_END_OF_LIST, 8ui64);
  v2->displayCmds[0] = &s_cmdList->cmds[s_cmdList->usedTotal];
}

/*
==============
R_BeginFrame
==============
*/
void R_BeginFrame(void)
{
  if ( !++rg.frontEndFrameCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 5647, ASSERT_TYPE_ASSERT, "(rg.frontEndFrameCount > 0)", (const char *)&queryFormat, "rg.frontEndFrameCount > 0") )
    __debugbreak();
  R_GPU_RecordLatencyEvent(LATENCY_EVENT_BEGIN_FRAME, rg.frontEndFrameCount);
  if ( rg.inFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 5657, ASSERT_TYPE_ASSERT, "(!rg.inFrame)", (const char *)&queryFormat, "!rg.inFrame") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  cs:?rg@@3Ur_globals_t@@A.invViewScale, xmm0; r_globals_t rg
  }
  rg.inFrame = 1;
  rg.lodParms.valid = 0;
  rg.correctedLodParms.valid = 0;
  if ( Sys_IsMainThread() )
    R_UpdateFrontEndDvarOptions();
  R_TrySortMaterialsInternal(1);
  rgp.materialOverridePhysicalBucketIndex = (LOBYTE(rgp.materialOverridePhysicalBucketIndex) - 1) & 1;
  rgp.materialOverridePhysicalMaterialIndex = 0;
  rgp.materialOverrideTextureTableBucketIndex = (LOBYTE(rgp.materialOverrideTextureTableBucketIndex) - 1) & 1;
  rgp.materialOverrideTextureTableIndex = 0;
}

/*
==============
R_BeginSharedCmdList
==============
*/
void R_BeginSharedCmdList(void)
{
  if ( !Sys_IsUpdateScreenThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2163, ASSERT_TYPE_ASSERT, "(Sys_IsUpdateScreenThread())", (const char *)&queryFormat, "Sys_IsUpdateScreenThread()") )
    __debugbreak();
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2164, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  if ( frontEndDataOut->finishReady && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2166, ASSERT_TYPE_ASSERT, "(!frontEndDataOut->finishReady)", (const char *)&queryFormat, "!frontEndDataOut->finishReady") )
    __debugbreak();
  R_AlignNextCommand(RC_END_OF_LIST, 8ui64);
  frontEndDataOut->cmds = &s_cmdList->cmds[s_cmdList->usedTotal];
}

/*
==============
R_CheckCommandBufferWarnings
==============
*/
char R_CheckCommandBufferWarnings(const GfxRenderCommand renderCmd, const unsigned __int64 bytes)
{
  GfxCmdArray *v3; 
  unsigned __int64 usedCritical; 
  unsigned __int64 usedTotal; 
  __int64 v8; 
  unsigned __int64 v14; 
  unsigned __int64 v15; 
  GfxRenderCommand v17; 

  v3 = s_cmdList;
  if ( renderCmd < RC_FIRST_NONCRITICAL )
  {
    usedCritical = s_cmdList->usedCritical;
    if ( usedCritical < 0x1E00 && bytes + usedCritical >= 0x1E00 && !s_cmdList->criticalWarnCount )
    {
      s_cmdList->criticalWarnCount = 1;
      Com_PrintWarning(8, "RENDERCOMMAND_CRITICAL_WARN_SIZE (%i bytes) reached\n", 7680i64);
      v3 = s_cmdList;
    }
  }
  usedTotal = v3->usedTotal;
  v8 = s_renderCmdWarnSize;
  if ( usedTotal < s_renderCmdWarnSize && bytes + usedTotal >= s_renderCmdWarnSize && !v3->warnCount )
  {
    v3->warnCount = 1;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rdx
    }
    if ( v8 < 0 )
      __asm { vaddss  xmm0, xmm0, cs:__real@5f800000 }
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@3a800000
      vcvtss2sd xmm2, xmm0, xmm0
      vmovq   r8, xmm2
    }
    Com_PrintWarning(8, "RENDERCOMMAND_WARN_SIZE (%.0f KB) reached\n", _R8);
    v3 = s_cmdList;
  }
  v14 = v3->usedTotal;
  v15 = s_renderCmdBufferSize - v14;
  if ( renderCmd >= RC_FIRST_NONCRITICAL )
    v15 = v15 + v3->usedCritical - 0x2000;
  if ( bytes <= v15 )
    return 1;
  if ( renderCmd < RC_FIRST_NONCRITICAL )
  {
    v17 = renderCmd;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 1917, ASSERT_TYPE_ASSERT, "(renderCmd >= RC_FIRST_NONCRITICAL)", "%s\n\trc %i used %zu critical %zu bytes %zu", "renderCmd >= RC_FIRST_NONCRITICAL", v17, v14, v3->usedCritical, bytes) )
      __debugbreak();
  }
  return 0;
}

/*
==============
R_CheckReserveBuffers
==============
*/
_BOOL8 R_CheckReserveBuffers(GfxCmdBufState *state)
{
  GfxConstantBufferAllocations *constantBufferAllocations; 
  int v3; 
  int v4; 
  bool v5; 
  bool v6; 

  constantBufferAllocations = state->constantBufferAllocations;
  if ( !constantBufferAllocations && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 1007, ASSERT_TYPE_ASSERT, "(constantBufferAllocations)", (const char *)&queryFormat, "constantBufferAllocations") )
    __debugbreak();
  v3 = R_CheckReserveConstantBuffer(state);
  constantBufferAllocations->reserveOverflow = 0;
  v4 = v3;
  v5 = R_CheckReserveDescriptorHeaps(state->descState);
  state->descState->heapOverflow = 0;
  v6 = !v4 || !v5;
  constantBufferAllocations->aborting = v6;
  return v5 && v4;
}

/*
==============
R_CheckReserveConstantBuffer
==============
*/
__int64 R_CheckReserveConstantBuffer(GfxCmdBufState *state)
{
  GfxConstantBufferAllocations *constantBufferAllocations; 
  GfxConstantBufferInfo *constantBufferInfo; 
  int v6; 
  unsigned int v9; 
  int v10; 
  signed int reserveSize; 
  unsigned int v18; 
  __int64 result; 
  unsigned __int32 *p_offset; 
  int v22; 
  int v23; 
  __int64 v24; 
  __int64 v25; 
  unsigned __int32 constantPageOffset; 
  int v28; 
  signed __int32 v29; 

  constantBufferAllocations = state->constantBufferAllocations;
  if ( !constantBufferAllocations && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 855, ASSERT_TYPE_ASSERT, "(constantBufferAllocations)", (const char *)&queryFormat, "constantBufferAllocations") )
    __debugbreak();
  constantBufferInfo = constantBufferAllocations->constantBufferInfo;
  if ( !constantBufferAllocations->constantBufferInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 858, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  if ( constantBufferInfo->type >= (unsigned int)GFX_CONSTANT_BUFFER_INFO_COUNT )
  {
    LODWORD(v24) = constantBufferInfo->type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 860, ASSERT_TYPE_ASSERT, "(unsigned)( info->type ) < (unsigned)( GFX_CONSTANT_BUFFER_INFO_COUNT )", "info->type doesn't index GFX_CONSTANT_BUFFER_INFO_COUNT\n\t%i not in [0, %i)", v24, 2) )
      __debugbreak();
  }
  if ( constantBufferInfo->type )
  {
    if ( constantBufferAllocations->reserveOverflow )
    {
      constantBufferAllocations->constantPageOffset = constantBufferAllocations->constantLastCheckedOffset;
      return 1i64;
    }
    constantPageOffset = constantBufferAllocations->constantPageOffset;
    v28 = constantPageOffset % constantBufferInfo->linear.pageSize + constantBufferAllocations->reserveSize;
    if ( constantBufferAllocations->reserveSize + constantPageOffset <= constantBufferInfo->linear.testFailOffset )
    {
      if ( v28 < (signed int)constantBufferInfo->linear.pageSize )
      {
LABEL_35:
        constantBufferAllocations->constantLastCheckedOffset = constantPageOffset;
        return 1i64;
      }
      p_offset = (unsigned __int32 *)&constantBufferInfo->linear.offset;
      v22 = v28 / constantBufferInfo->linear.pageSize;
      while ( 1 )
      {
        constantPageOffset = *p_offset;
        v29 = v22 * constantBufferInfo->linear.pageSize + *p_offset;
        if ( v29 > (signed int)constantBufferInfo->linear.bufSize )
          break;
        if ( ((unsigned __int8)p_offset & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &constantBufferInfo->ring[0].bufSize + 1) )
          __debugbreak();
        if ( _InterlockedCompareExchange((volatile signed __int32 *)p_offset, v29, constantPageOffset) == constantPageOffset )
        {
          constantBufferAllocations->constantPageOffset = constantPageOffset;
          goto LABEL_35;
        }
      }
    }
    R_WarnOncePerFrame(R_WARN_CONSTANT_BUFFER_OVERFLOW);
    v23 = constantBufferInfo->linear.pageSize - 1;
    constantBufferAllocations->constantLastCheckedOffset = -1;
    constantBufferAllocations->constantPageOffset = v23;
    return 0i64;
  }
  else
  {
    _RSI = &constantBufferInfo->ring[0].ringBuffer.pendingSize;
    __asm
    {
      vmovaps [rsp+88h+var_48], xmm6
      vxorps  xmm6, xmm6, xmm6
    }
    v6 = 0;
    while ( 1 )
    {
      if ( *((_BYTE *)_RSI + 2069) )
      {
        __asm
        {
          vmovss  xmm2, dword ptr [rsi+810h]
          vmovss  xmm0, cs:?rg@@3Ur_globals_t@@A.ringFractionForFlush; r_globals_t rg
        }
        v9 = _RSI[2];
        v10 = *_RSI;
        reserveSize = constantBufferAllocations->reserveSize;
        __asm
        {
          vcmpeqss xmm1, xmm2, xmm6
          vblendvps xmm3, xmm2, xmm0, xmm1
          vxorps  xmm2, xmm2, xmm2
          vcvtsi2ss xmm2, xmm2, edi
          vmulss  xmm0, xmm2, xmm3
          vcvttss2si eax, xmm0
        }
        if ( *_RSI >= _EAX )
          break;
        v18 = *(_RSI - 2);
        if ( v18 >= v9 )
        {
          LODWORD(v25) = _RSI[2];
          LODWORD(v24) = *(_RSI - 2);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 783, ASSERT_TYPE_ASSERT, "(unsigned)( beginIndexReady ) < (unsigned)( bufSize )", "beginIndexReady doesn't index bufSize\n\t%i not in [0, %i)", v24, v25) )
            __debugbreak();
        }
        if ( (int)(v18 + reserveSize) > (int)v9 )
          v10 += v9 - v18;
        if ( (int)(v9 - v10) < reserveSize )
          break;
      }
      ++v6;
      _RSI += 532;
      if ( v6 )
      {
        result = 1i64;
        goto LABEL_22;
      }
    }
    result = 0i64;
LABEL_22:
    __asm { vmovaps xmm6, [rsp+88h+var_48] }
  }
  return result;
}

/*
==============
R_ClearClientCmdList2D
==============
*/
void R_ClearClientCmdList2D(void)
{
  unsigned int v0; 
  const void **v1; 

  if ( !Sys_IsUpdateScreenThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2147, ASSERT_TYPE_ASSERT, "(Sys_IsUpdateScreenThread())", (const char *)&queryFormat, "Sys_IsUpdateScreenThread()") )
    __debugbreak();
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2148, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  if ( frontEndDataOut->finishReady && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2150, ASSERT_TYPE_ASSERT, "(!frontEndDataOut->finishReady)", (const char *)&queryFormat, "!frontEndDataOut->finishReady") )
    __debugbreak();
  v0 = 0;
  v1 = &frontEndDataOut->viewInfo[frontEndDataOut->viewInfoIndex].displayCmds[1];
  do
  {
    *(v1 - 1) = NULL;
    v0 += 16;
    *v1 = NULL;
    v1[1] = NULL;
    v1[2] = NULL;
    v1[3] = NULL;
    v1[4] = NULL;
    v1[5] = NULL;
    v1[6] = NULL;
    v1[7] = NULL;
    v1[8] = NULL;
    v1[9] = NULL;
    v1[10] = NULL;
    v1[11] = NULL;
    v1[12] = NULL;
    v1[13] = NULL;
    v1[14] = NULL;
    v1 += 16;
  }
  while ( v0 < 0x10 );
}

/*
==============
R_CopyViewInfoInternal
==============
*/
void R_CopyViewInfoInternal(GfxViewInfo *outViewInfo, const GfxViewInfo *viewInfo, const char *fileAndLine)
{
  memcpy_0(outViewInfo, viewInfo, sizeof(GfxViewInfo));
}

/*
==============
R_DebugShader_AdjustColorChannel
==============
*/

double __fastcall R_DebugShader_AdjustColorChannel(double x, double _XMM1_8)
{
  char v2; 
  char v3; 

  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
  }
  if ( v2 )
  {
    __asm { vmovss  xmm0, cs:__real@bf800000 }
  }
  else
  {
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@3b808081
      vcomiss xmm0, cs:__real@3d20e411
    }
    if ( v2 | v3 )
    {
      __asm { vmulss  xmm0, xmm0, cs:__real@3d9e8391 }
    }
    else
    {
      __asm
      {
        vmulss  xmm0, xmm0, cs:__real@3f72a76f
        vaddss  xmm0, xmm0, cs:__real@3d55891a; X
        vmovss  xmm1, cs:__real@4019999a; Y
      }
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    }
  }
  return *(double *)&_XMM0;
}

/*
==============
R_EndFrame
==============
*/
void R_EndFrame(void)
{
  GfxCmdArray *commands; 
  int v1; 
  __m256i v8; 
  R_RT_Handle result; 
  R_RT_Handle v10; 

  R_TransferDebugGlobals(&frontEndDataOut->debugGlobals);
  R_GetCommandBufferInternal(RC_END_OF_LIST, 4ui64, 2ui64);
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 1391, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  commands = frontEndDataOut->commands;
  v1 = ((_BYTE)g_frameIndex - 1) & 1;
  commands->usedTotal = 0i64;
  commands->usedCritical = 0i64;
  commands->lastCmd = NULL;
  *(_QWORD *)&commands->criticalWarnCount = 0i64;
  g_frameIndex = v1;
  *(_QWORD *)&rg.viewInfoCount = 0i64;
  R_RT_GetGlobal(&result, R_RENDERTARGET_DISPLAY_BUFFER_FRONTEND);
  R_RT_GetGlobal(&v10, R_RENDERTARGET_DISPLAY_BUFFER_PREV_FRONTEND);
  if ( (result.m_surfaceID & 0x7FFF) != 0 )
    v8.m256i_i16[0] = result.m_surfaceID & 0x7FFF | 0x8000;
  else
    v8.m256i_i16[0] = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+98h+result.m_tracking.m_allocCounter]
    vmovsd  xmm1, [rsp+98h+result.m_tracking.m_location]
    vmovups xmmword ptr [rsp+98h+var_68+8], xmm0
    vmovsd  qword ptr [rsp+98h+var_68+18h], xmm1
    vmovups ymm0, [rsp+98h+var_68]
    vmovups ymmword ptr cs:?g_R_RT_globals@@3PAVR_RT_Handle@@A.m_surfaceID+120h, ymm0; R_RT_Handle near * g_R_RT_globals
  }
  if ( (v10.m_surfaceID & 0x7FFF) != 0 )
    v8.m256i_i16[0] = v10.m_surfaceID & 0x7FFF | 0x8000;
  else
    v8.m256i_i16[0] = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+98h+var_28.m_tracking.m_allocCounter]
    vmovsd  xmm1, [rsp+98h+var_28.m_tracking.m_location]
    vmovups xmmword ptr [rsp+98h+var_68+8], xmm0
    vmovsd  qword ptr [rsp+98h+var_68+18h], xmm1
    vmovups ymm0, [rsp+98h+var_68]
    vmovups ymmword ptr cs:?g_R_RT_globals@@3PAVR_RT_Handle@@A.m_surfaceID+100h, ymm0; R_RT_Handle near * g_R_RT_globals
  }
  R_Stats_EndFrame();
  if ( !rg.inFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 5711, ASSERT_TYPE_ASSERT, "(rg.inFrame)", (const char *)&queryFormat, "rg.inFrame") )
    __debugbreak();
  rg.inFrame = 0;
}

/*
==============
R_EndFrameConstantBufferInfo
==============
*/
void R_EndFrameConstantBufferInfo(GfxConstantBufferInfo *info, unsigned __int64 fence)
{
  char v7; 
  GfxConstantBufferInfoType type; 
  int v13; 

  if ( info->type >= (unsigned int)GFX_CONSTANT_BUFFER_INFO_COUNT )
  {
    v13 = 2;
    type = info->type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 901, ASSERT_TYPE_ASSERT, "(unsigned)( info->type ) < (unsigned)( GFX_CONSTANT_BUFFER_INFO_COUNT )", "info->type doesn't index GFX_CONSTANT_BUFFER_INFO_COUNT\n\t%i not in [0, %i)", type, v13) )
      __debugbreak();
  }
  if ( info->type )
  {
    *(double *)&_XMM0 = I_random();
    _RAX = r_randomFailConstantBuffer;
    __asm { vcomiss xmm0, dword ptr [rax+28h] }
    if ( v7 )
    {
      *(double *)&_XMM0 = I_random();
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, rax
        vmulss  xmm0, xmm0, xmm1
        vcvttss2si rax, xmm0
      }
    }
    else
    {
      LODWORD(_RAX) = -1;
    }
    info->linear.testFailOffset = _RAX;
    info->linear.offset = 0;
  }
  else
  {
    R_DynamicRingBufferInsertGivenFence(&info->ring[0].ringBuffer, fence);
  }
}

/*
==============
R_FlushConstantBufferInfo
==============
*/
void R_FlushConstantBufferInfo(GfxConstantBufferInfo *info)
{
  const char *v2; 
  int v3; 
  const char *v4; 
  GfxConstantBufferInfoType type; 
  int v6; 

  if ( info->type >= (unsigned int)GFX_CONSTANT_BUFFER_INFO_COUNT )
  {
    v6 = 2;
    type = info->type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 940, ASSERT_TYPE_ASSERT, "(unsigned)( info->type ) < (unsigned)( GFX_CONSTANT_BUFFER_INFO_COUNT )", "info->type doesn't index GFX_CONSTANT_BUFFER_INFO_COUNT\n\t%i not in [0, %i)", type, v6) )
      __debugbreak();
  }
  if ( info->type )
  {
    if ( info->linear.buf )
      goto LABEL_11;
    v2 = "linear->buf";
    v3 = 928;
    v4 = "(linear->buf)";
  }
  else
  {
    if ( info->linear.buf )
      goto LABEL_11;
    v2 = "ring->buf";
    v3 = 918;
    v4 = "(ring->buf)";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", v3, ASSERT_TYPE_ASSERT, v4, (const char *)&queryFormat, v2) )
    __debugbreak();
LABEL_11:
  if ( !R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 18, ASSERT_TYPE_ASSERT, "(R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  FlushGpuCacheRange(g_dx.immediateContext, 0x8000000u, info->linear.buf, info->linear.bufSize);
}

/*
==============
R_GPUDvarsChanged
==============
*/
bool R_GPUDvarsChanged()
{
  const dvar_t *v0; 
  const dvar_t *v1; 
  const dvar_t *v2; 
  const dvar_t *v3; 

  v0 = DCONST_DVARBOOL_r_gpuLateAllocParamCacheAllowed;
  if ( !DCONST_DVARBOOL_r_gpuLateAllocParamCacheAllowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_gpuLateAllocParamCacheAllowed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( rg.gpuLateAllocParamCacheAllowed != v0->current.enabled )
    return 1;
  v1 = DCONST_DVARINT_r_gpuLateAllocParamCacheSubdiv;
  if ( !DCONST_DVARINT_r_gpuLateAllocParamCacheSubdiv && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_gpuLateAllocParamCacheSubdiv") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( rg.gpuLateAllocParamCacheSubdiv != v1->current.integer )
    return 1;
  v2 = DCONST_DVARINT_r_gpuLateAllocParamCacheSubdivDepthOnly;
  if ( !DCONST_DVARINT_r_gpuLateAllocParamCacheSubdivDepthOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_gpuLateAllocParamCacheSubdivDepthOnly") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( rg.gpuLateAllocParamCacheSubdivDepthOnly != v2->current.integer )
    return 1;
  v3 = DCONST_DVARINT_r_gpuLateAllocParamCacheBSP;
  if ( !DCONST_DVARINT_r_gpuLateAllocParamCacheBSP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_gpuLateAllocParamCacheBSP") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  return rg.gpuLateAllocParamCacheBSP != v3->current.integer || rg.gpuLateAllocParamCacheBSPDepthOnly != Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuLateAllocParamCacheBSPDepthOnly, "r_gpuLateAllocParamCacheBSPDepthOnly") || rg.gpuLateAllocParamCacheST != Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuLateAllocParamCacheST, "r_gpuLateAllocParamCacheST") || rg.gpuLateAllocParamCacheSTDepthOnly != Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuLateAllocParamCacheSTDepthOnly, "r_gpuLateAllocParamCacheSTDepthOnly") || rg.gpuLateAllocParamCacheEffects != Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuLateAllocParamCacheEffects, "r_gpuLateAllocParamCacheEffects") || rg.gpuLateAllocParamCacheDefault != Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuLateAllocParamCacheDefault, "r_gpuLateAllocParamCacheDefault") || rg.gpuLateAllocParamCacheDefaultDepthOnly != Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuLateAllocParamCacheDefaultDepthOnly, "r_gpuLateAllocParamCacheDefaultDepthOnly") || rg.gpuVSWaveLimitAllowed != Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_gpuVSWaveLimitAllowed, "r_gpuVSWaveLimitAllowed") || rg.gpuVSWaveLimitSubdiv != Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuVSWaveLimitSubdiv, "r_gpuVSWaveLimitSubdiv") || rg.gpuVSWaveLimitSubdivDepthOnly != Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuVSWaveLimitSubdivDepthOnly, "r_gpuVSWaveLimitSubdivDepthOnly") || rg.gpuVSWaveLimitBSP != Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuVSWaveLimitBSP, "r_gpuVSWaveLimitBSP") || rg.gpuVSWaveLimitBSPDepthOnly != Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuVSWaveLimitBSPDepthOnly, "r_gpuVSWaveLimitBSPDepthOnly") || rg.gpuVSWaveLimitST != Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuVSWaveLimitST, "r_gpuVSWaveLimitST") || rg.gpuVSWaveLimitSTDepthOnly != Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuVSWaveLimitSTDepthOnly, "r_gpuVSWaveLimitSTDepthOnly") || rg.gpuVSWaveLimitEffects != Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuVSWaveLimitEffects, "r_gpuVSWaveLimitEffects") || rg.gpuVSWaveLimitDefault != Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuVSWaveLimitDefault, "r_gpuVSWaveLimitDefault") || rg.gpuVSWaveLimitDefaultDepthOnly != Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuVSWaveLimitDefaultDepthOnly, "r_gpuVSWaveLimitDefaultDepthOnly") || rg.gpuPSWaveLimitAllowed != Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_gpuPSWaveLimitAllowed, "r_gpuPSWaveLimitAllowed") || rg.gpuPSWaveLimitSubdiv != Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuPSWaveLimitSubdiv, "r_gpuPSWaveLimitSubdiv") || rg.gpuPSWaveLimitSubdivDepthOnly != Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuPSWaveLimitSubdivDepthOnly, "r_gpuPSWaveLimitSubdivDepthOnly") || rg.gpuPSWaveLimitBSP != Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuPSWaveLimitBSP, "r_gpuPSWaveLimitBSP") || rg.gpuPSWaveLimitBSPDepthOnly != Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuPSWaveLimitBSPDepthOnly, "r_gpuPSWaveLimitBSPDepthOnly") || rg.gpuPSWaveLimitST != Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuPSWaveLimitST, "r_gpuPSWaveLimitST") || rg.gpuPSWaveLimitSTDepthOnly != Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuPSWaveLimitSTDepthOnly, "r_gpuPSWaveLimitSTDepthOnly") || rg.gpuPSWaveLimitEffects != Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuPSWaveLimitEffects, "r_gpuPSWaveLimitEffects") || rg.gpuPSWaveLimitDefault != Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuPSWaveLimitDefault, "r_gpuPSWaveLimitDefault") || rg.gpuPSWaveLimitDefaultDepthOnly != Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuPSWaveLimitDefaultDepthOnly, "r_gpuPSWaveLimitDefaultDepthOnly") || rg.gpuCpGroupedDrawsAllowed != Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_gpuCpGroupedDrawsAllowed, "r_gpuCpGroupedDrawsAllowed") || rg.gpuCpGroupedDrawsForShadowsAndDepthPrepasses != Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_gpuCpGroupedDrawsForShadowsAndDepthPrepasses, "r_gpuCpGroupedDrawsForShadowsAndDepthPrepasses") || rg.gpuCpGroupedDrawsForDepthPrepassMaterial != Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_gpuCpGroupedDrawsForDepthPrepassMaterial, "r_gpuCpGroupedDrawsForDepthPrepassMaterial") || rg.gpuShaderPrecacheAllowed != Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_gpuShaderPrecacheAllowed, "r_gpuShaderPrecacheAllowed") || rg.gpuVSPrecacheAllowed != Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_gpuVSPrecacheAllowed, "r_gpuVSPrecacheAllowed") || rg.gpuPSPrecacheAllowed != Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_gpuPSPrecacheAllowed, "r_gpuPSPrecacheAllowed") || rg.gpuCULimitAllowed != Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_gpuCULimitAllowed, "r_gpuCULimitAllowed") || rg.gpuDepthOnlyCULimit != Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuDepthOnlyCULimit, "r_gpuDepthOnlyCULimit");
}

/*
==============
R_GetCommandBufferInternal
==============
*/
void *R_GetCommandBufferInternal(const GfxRenderCommand renderCmd, const unsigned __int64 bytes, const unsigned __int64 alignment)
{
  GfxCmdArray *v6; 
  GfxCmdHeader *v7; 
  unsigned __int64 v8; 
  void *result; 
  __int64 v10; 

  if ( !Sys_IsUpdateScreenThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2033, ASSERT_TYPE_ASSERT, "(Sys_IsUpdateScreenThread())", (const char *)&queryFormat, "Sys_IsUpdateScreenThread()") )
    __debugbreak();
  if ( (unsigned int)renderCmd > RC_SET_UI_SAMPLER )
  {
    LODWORD(v10) = renderCmd;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2034, ASSERT_TYPE_ASSERT, "( ( renderCmd >= 0 && renderCmd < RC_COUNT ) )", "( renderCmd ) = %i", v10) )
      __debugbreak();
  }
  if ( bytes >= s_renderCmdBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2035, ASSERT_TYPE_ASSERT, "( ( bytes < s_renderCmdBufferSize ) )", "( bytes ) = %zu", bytes) )
    __debugbreak();
  if ( bytes > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2036, ASSERT_TYPE_ASSERT, "( ( bytes <= GFXCMDHEADER_MAX_BYTE_COUNT ) )", "( bytes ) = %zu", bytes) )
    __debugbreak();
  if ( !s_cmdList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2037, ASSERT_TYPE_ASSERT, "(s_cmdList)", (const char *)&queryFormat, "s_cmdList") )
    __debugbreak();
  if ( !s_cmdList->cmds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2038, ASSERT_TYPE_ASSERT, "(s_cmdList->cmds)", (const char *)&queryFormat, "s_cmdList->cmds") )
    __debugbreak();
  if ( !rg.inFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2039, ASSERT_TYPE_ASSERT, "(rg.inFrame)", (const char *)&queryFormat, "rg.inFrame") )
    __debugbreak();
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2040, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  if ( frontEndDataOut->finishReady && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2042, ASSERT_TYPE_ASSERT, "(!frontEndDataOut->finishReady)", (const char *)&queryFormat, "!frontEndDataOut->finishReady") )
    __debugbreak();
  if ( LUI_CoD_IsInUpdateFrame() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2046, ASSERT_TYPE_ASSERT, "(!LUI_CoD_IsInUpdateFrame())", (const char *)&queryFormat, "!LUI_CoD_IsInUpdateFrame()") )
    __debugbreak();
  if ( !R_AlignNextCommand(renderCmd, alignment) || !R_CheckCommandBufferWarnings(renderCmd, bytes) )
    return 0i64;
  v6 = s_cmdList;
  v7 = (GfxCmdHeader *)&s_cmdList->cmds[s_cmdList->usedTotal];
  if ( !alignment || ((alignment - 1) & alignment) != 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 670, ASSERT_TYPE_ASSERT, "(align > 0 && IsPowerOf2( align ))", (const char *)&queryFormat, "align > 0 && IsPowerOf2( align )") )
      __debugbreak();
    v6 = s_cmdList;
  }
  if ( ((alignment - 1) & (unsigned __int64)v7) != 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2059, ASSERT_TYPE_ASSERT, "(IsAligned( reinterpret_cast<uintptr_t>( header ), alignment ))", (const char *)&queryFormat, "IsAligned( reinterpret_cast<uintptr_t>( header ), alignment )") )
      __debugbreak();
    v6 = s_cmdList;
  }
  v6->usedTotal += bytes;
  v8 = 0i64;
  v6->lastCmd = v7;
  result = v7;
  if ( renderCmd < RC_FIRST_NONCRITICAL )
    v8 = bytes;
  v6->usedCritical += v8;
  v7->id = renderCmd;
  v7->byteCount = bytes;
  return result;
}

/*
==============
R_GetFrameIndex
==============
*/
__int64 R_GetFrameIndex()
{
  return g_frameIndex;
}

/*
==============
R_GetMultiLightGridFXLightingWorldBuffers
==============
*/
GfxMultiLightGridFXLightingBuffers *R_GetMultiLightGridFXLightingWorldBuffers(int frameIndex, int codeMesh)
{
  if ( s_world.draw.lightGridType == GFX_LIGHTGRID_TYPE_MULTI )
    return &s_multiLightGridFXLightingWorldBuffers[codeMesh][frameIndex % 2];
  else
    return 0i64;
}

/*
==============
R_GrowCommandBuffer
==============
*/
GfxCmdHeader *R_GrowCommandBuffer(const GfxRenderCommand renderCmd, const int additionalByteCount)
{
  GfxCmdArray *v4; 
  signed __int64 v5; 
  unsigned __int8 *v6; 
  unsigned __int64 v7; 
  GfxCmdHeader *lastCmd; 
  GfxCmdHeader *result; 

  if ( !Sys_IsUpdateScreenThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2086, ASSERT_TYPE_ASSERT, "(Sys_IsUpdateScreenThread())", (const char *)&queryFormat, "Sys_IsUpdateScreenThread()") )
    __debugbreak();
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2087, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  if ( frontEndDataOut->finishReady && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2089, ASSERT_TYPE_ASSERT, "(!frontEndDataOut->finishReady)", (const char *)&queryFormat, "!frontEndDataOut->finishReady") )
    __debugbreak();
  v4 = s_cmdList;
  if ( !s_cmdList->lastCmd )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2091, ASSERT_TYPE_ASSERT, "(s_cmdList->lastCmd)", (const char *)&queryFormat, "s_cmdList->lastCmd") )
      __debugbreak();
    v4 = s_cmdList;
  }
  if ( v4->lastCmd->id != renderCmd )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2092, ASSERT_TYPE_ASSERT, "(s_cmdList->lastCmd->id == renderCmd)", (const char *)&queryFormat, "s_cmdList->lastCmd->id == renderCmd") )
      __debugbreak();
    v4 = s_cmdList;
  }
  v5 = (char *)v4->lastCmd - (char *)v4->cmds;
  v6 = &v4->cmds[v4->usedTotal];
  v7 = (int)v5;
  if ( (unsigned __int64)(v5 + 0x80000000i64) > 0xFFFFFFFF )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v5, "signed", (char *)v4->lastCmd - (char *)v4->cmds) )
      __debugbreak();
    v4 = s_cmdList;
  }
  lastCmd = v4->lastCmd;
  v4->usedTotal = v7;
  result = (GfxCmdHeader *)R_GetCommandBufferInternal((const GfxRenderCommand)lastCmd->id, additionalByteCount + lastCmd->byteCount, 1ui64);
  if ( result )
  {
    if ( s_cmdList->lastCmd != result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2102, ASSERT_TYPE_SANITY, "( s_cmdList->lastCmd == bufferStart )", (const char *)&queryFormat, "s_cmdList->lastCmd == bufferStart") )
      __debugbreak();
    return (GfxCmdHeader *)v6;
  }
  return result;
}

/*
==============
R_InitCachedShadowBuffers
==============
*/
void R_InitCachedShadowBuffers(void)
{
  GfxBatchedQuadMeshData (*spotShadowBatchedQuadMesh)[6][8]; 
  __int64 v1; 
  __int64 v2; 
  GfxMeshData *p_meshData; 
  GfxBatchedQuadMeshData (*sunShadowBatchedQuadMesh)[6][2][10]; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 

  R_InitDynamicMesh(&gfxMeshGlob.spotShadowViewMesh.meshData, "Spot Shadow View Mesh", 6u, 4u, 0x20u, 0, 0, 0, 0, 0, 0);
  spotShadowBatchedQuadMesh = gfxMeshGlob.spotShadowBatchedQuadMesh;
  v1 = 6i64;
  do
  {
    v2 = 8i64;
    do
    {
      R_InitDynamicMesh((GfxMeshData *)spotShadowBatchedQuadMesh, "Spot Shadow Batched Quad Mesh", 0x1800u, 0x1000u, 0x20u, 0, 0, 0, 0, 0, 0);
      R_InitBatchedQuadMesh((GfxMeshData *)spotShadowBatchedQuadMesh, 1024);
      spotShadowBatchedQuadMesh = (GfxBatchedQuadMeshData (*)[6][8])((char *)spotShadowBatchedQuadMesh + 1016);
      --v2;
    }
    while ( v2 );
    --v1;
  }
  while ( v1 );
  p_meshData = &gfxMeshGlob.sunShadowCacheQuadMesh[0][0][0][0].meshData;
  sunShadowBatchedQuadMesh = gfxMeshGlob.sunShadowBatchedQuadMesh;
  v5 = 6i64;
  do
  {
    v6 = 2i64;
    do
    {
      v7 = 10i64;
      do
      {
        R_InitDynamicMesh((GfxMeshData *)sunShadowBatchedQuadMesh, "Sun Shadow Batched Quad Mesh", 0x180u, 0x100u, 0x20u, 0, 0, 0, 0, 0, 0);
        R_InitBatchedQuadMesh((GfxMeshData *)sunShadowBatchedQuadMesh, 64);
        R_InitDynamicMesh(p_meshData, "Sun Shadow Cache Quad Mesh", 6u, 4u, 0x20u, 0, 0, 0, 0, 0, 0);
        sunShadowBatchedQuadMesh = (GfxBatchedQuadMeshData (*)[6][2][10])((char *)sunShadowBatchedQuadMesh + 1016);
        p_meshData = (GfxMeshData *)((char *)p_meshData + 1032);
        --v7;
      }
      while ( v7 );
      --v6;
    }
    while ( v6 );
    --v5;
  }
  while ( v5 );
}

/*
==============
R_InitComputeContextData
==============
*/
void R_InitComputeContextData(ComputeContextData *context, unsigned int contextType)
{
  __int64 v2; 
  volatile unsigned int *v4; 
  volatile unsigned int *v5; 
  unsigned int *v6; 
  unsigned int v7; 
  unsigned int *v9; 
  volatile unsigned int *address; 
  unsigned int (__fastcall *AddRef)(IGraphicsUnknown *); 
  const char *v12; 
  const char *v13; 
  int v14; 
  __int64 v15; 
  __int64 v16; 
  int v17; 
  int v18; 
  GfxBufferCreationContext v19; 

  v2 = contextType;
  v4 = (volatile unsigned int *)PMem_Alloc(4ui64, 0x40ui64, MEM_POOL_GPU_PRIVATE, PMEM_STACK_GAME, "Async Compute Fence");
  context->computeFence.address = v4;
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.h", 155, ASSERT_TYPE_ASSERT, "(address)", (const char *)&queryFormat, "address") )
    __debugbreak();
  *context->computeFence.address = 0;
  context->computeFence.count = 0;
  v5 = (volatile unsigned int *)PMem_Alloc(4ui64, 0x40ui64, MEM_POOL_GPU_PRIVATE, PMEM_STACK_GAME, "Async Compute Fence");
  context->graphicsFence.address = v5;
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.h", 155, ASSERT_TYPE_ASSERT, "(address)", (const char *)&queryFormat, "address") )
    __debugbreak();
  *context->graphicsFence.address = 0;
  context->graphicsFence.count = 0;
  v6 = (unsigned int *)PMem_Alloc(4ui64, 0x40ui64, MEM_POOL_GPU_PRIVATE, PMEM_STACK_GAME, "Async Compute End Frame Fence");
  context->endFenceData = v6;
  *v6 = 0;
  if ( g_dx.computeCommandQueue[v2].currAllocIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 309, ASSERT_TYPE_ASSERT, "(g_dx.computeCommandQueue[contextType].currAllocIndex == 0)", (const char *)&queryFormat, "g_dx.computeCommandQueue[contextType].currAllocIndex == 0") )
    __debugbreak();
  v7 = s_computeConstantBufferSizes[v2];
  v19.zoneName = (char *)&queryFormat.fmt + 3;
  context->constantBufferSize = v7;
  v19.objectName = "Async Compute Constant Buffer";
  __asm
  {
    vmovups xmm0, [rsp+78h+var_28]
    vmovdqa [rsp+78h+var_28], xmm0
  }
  R_InitComputeBufferState(&context->constantBuffer, v7, &v19);
  v9 = (unsigned int *)PMem_Alloc(4ui64, 0x40ui64, MEM_POOL_GPU_PRIVATE, PMEM_STACK_GAME, "Async Compute Memcpy Fence");
  context->memcpyFenceData = v9;
  *v9 = 0;
  if ( R_ProfIsEnabled() )
  {
    address = context->computeFence.address;
    AddRef = g_dx.d3d12device->m_pFunction[21].AddRef;
    if ( (_DWORD)v2 )
    {
      if ( ((unsigned int (__fastcall *)(ID3D12Device *, volatile unsigned int *, const wchar_t *))AddRef)(g_dx.d3d12device, address, L"Backend Compute CMP") == -1 )
      {
        v18 = ((__int64 (__fastcall *)(ID3D12Device *, volatile unsigned int *, const wchar_t *))g_dx.d3d12device->m_pFunction[21].AddRef)(g_dx.d3d12device, context->computeFence.address, L"Backend Compute CMP");
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 344, ASSERT_TYPE_ASSERT, "( 0xFFFFFFFFU ) != ( g_dx.d3d12device->RegisterCustomFenceLocationX( (D3D12_GPU_VIRTUAL_ADDRESS)context->computeFence.address, L\"Backend Compute CMP\" ) )", "%s != %s\n\t%i, %i", "0xFFFFFFFFU", "g_dx.d3d12device->RegisterCustomFenceLocationX( (D3D12_GPU_VIRTUAL_ADDRESS)context->computeFence.address, L\"Backend Compute CMP\" )", -1, v18) )
          __debugbreak();
      }
      if ( ((unsigned int (__fastcall *)(ID3D12Device *, volatile unsigned int *, const wchar_t *))g_dx.d3d12device->m_pFunction[21].AddRef)(g_dx.d3d12device, context->graphicsFence.address, L"Backend Compute GFX") == -1 )
      {
        LODWORD(v16) = ((__int64 (__fastcall *)(ID3D12Device *, volatile unsigned int *, const wchar_t *))g_dx.d3d12device->m_pFunction[21].AddRef)(g_dx.d3d12device, context->graphicsFence.address, L"Backend Compute GFX");
        LODWORD(v15) = -1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 345, ASSERT_TYPE_ASSERT, "( 0xFFFFFFFFU ) != ( g_dx.d3d12device->RegisterCustomFenceLocationX( (D3D12_GPU_VIRTUAL_ADDRESS)context->graphicsFence.address, L\"Backend Compute GFX\" ) )", "%s != %s\n\t%i, %i", "0xFFFFFFFFU", "g_dx.d3d12device->RegisterCustomFenceLocationX( (D3D12_GPU_VIRTUAL_ADDRESS)context->graphicsFence.address, L\"Backend Compute GFX\" )", v15, v16) )
          __debugbreak();
      }
      if ( ((unsigned int (__fastcall *)(ID3D12Device *, unsigned int *, const wchar_t *))g_dx.d3d12device->m_pFunction[21].AddRef)(g_dx.d3d12device, context->endFenceData, L"Backend Compute END") == -1 )
      {
        LODWORD(v16) = ((__int64 (__fastcall *)(ID3D12Device *, unsigned int *, const wchar_t *))g_dx.d3d12device->m_pFunction[21].AddRef)(g_dx.d3d12device, context->endFenceData, L"Backend Compute END");
        LODWORD(v15) = -1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 346, ASSERT_TYPE_ASSERT, "( 0xFFFFFFFFU ) != ( g_dx.d3d12device->RegisterCustomFenceLocationX( (D3D12_GPU_VIRTUAL_ADDRESS)context->endFenceData, L\"Backend Compute END\" ) )", "%s != %s\n\t%i, %i", "0xFFFFFFFFU", "g_dx.d3d12device->RegisterCustomFenceLocationX( (D3D12_GPU_VIRTUAL_ADDRESS)context->endFenceData, L\"Backend Compute END\" )", v15, v16) )
          __debugbreak();
      }
      if ( ((unsigned int (__fastcall *)(ID3D12Device *, unsigned int *, const wchar_t *))g_dx.d3d12device->m_pFunction[21].AddRef)(g_dx.d3d12device, context->memcpyFenceData, L"Backend Compute MEM") == -1 )
      {
        LODWORD(v16) = ((__int64 (__fastcall *)(ID3D12Device *, unsigned int *, const wchar_t *))g_dx.d3d12device->m_pFunction[21].AddRef)(g_dx.d3d12device, context->memcpyFenceData, L"Backend Compute MEM");
        v12 = "( 0xFFFFFFFFU ) != ( g_dx.d3d12device->RegisterCustomFenceLocationX( (D3D12_GPU_VIRTUAL_ADDRESS)context->memcpyFenceData, L\"Backend Compute MEM\" ) )";
        v13 = "g_dx.d3d12device->RegisterCustomFenceLocationX( (D3D12_GPU_VIRTUAL_ADDRESS)context->memcpyFenceData, L\"Backend Compute MEM\" )";
        v14 = 347;
LABEL_34:
        LODWORD(v15) = -1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", v14, ASSERT_TYPE_ASSERT, v12, "%s != %s\n\t%i, %i", "0xFFFFFFFFU", v13, v15, v16) )
          __debugbreak();
      }
    }
    else
    {
      if ( ((unsigned int (__fastcall *)(ID3D12Device *, volatile unsigned int *, const wchar_t *))AddRef)(g_dx.d3d12device, address, L"Frontend Compute CMP") == -1 )
      {
        v17 = ((__int64 (__fastcall *)(ID3D12Device *, volatile unsigned int *, const wchar_t *))g_dx.d3d12device->m_pFunction[21].AddRef)(g_dx.d3d12device, context->computeFence.address, L"Frontend Compute CMP");
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 337, ASSERT_TYPE_ASSERT, "( 0xFFFFFFFFU ) != ( g_dx.d3d12device->RegisterCustomFenceLocationX( (D3D12_GPU_VIRTUAL_ADDRESS)context->computeFence.address, L\"Frontend Compute CMP\" ) )", "%s != %s\n\t%i, %i", "0xFFFFFFFFU", "g_dx.d3d12device->RegisterCustomFenceLocationX( (D3D12_GPU_VIRTUAL_ADDRESS)context->computeFence.address, L\"Frontend Compute CMP\" )", -1, v17) )
          __debugbreak();
      }
      if ( ((unsigned int (__fastcall *)(ID3D12Device *, volatile unsigned int *, const wchar_t *))g_dx.d3d12device->m_pFunction[21].AddRef)(g_dx.d3d12device, context->graphicsFence.address, L"Frontend Compute GFX") == -1 )
      {
        LODWORD(v16) = ((__int64 (__fastcall *)(ID3D12Device *, volatile unsigned int *, const wchar_t *))g_dx.d3d12device->m_pFunction[21].AddRef)(g_dx.d3d12device, context->graphicsFence.address, L"Frontend Compute GFX");
        LODWORD(v15) = -1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 338, ASSERT_TYPE_ASSERT, "( 0xFFFFFFFFU ) != ( g_dx.d3d12device->RegisterCustomFenceLocationX( (D3D12_GPU_VIRTUAL_ADDRESS)context->graphicsFence.address, L\"Frontend Compute GFX\" ) )", "%s != %s\n\t%i, %i", "0xFFFFFFFFU", "g_dx.d3d12device->RegisterCustomFenceLocationX( (D3D12_GPU_VIRTUAL_ADDRESS)context->graphicsFence.address, L\"Frontend Compute GFX\" )", v15, v16) )
          __debugbreak();
      }
      if ( ((unsigned int (__fastcall *)(ID3D12Device *, unsigned int *, const wchar_t *))g_dx.d3d12device->m_pFunction[21].AddRef)(g_dx.d3d12device, context->endFenceData, L"Frontend Compute END") == -1 )
      {
        LODWORD(v16) = ((__int64 (__fastcall *)(ID3D12Device *, unsigned int *, const wchar_t *))g_dx.d3d12device->m_pFunction[21].AddRef)(g_dx.d3d12device, context->endFenceData, L"Frontend Compute END");
        LODWORD(v15) = -1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 339, ASSERT_TYPE_ASSERT, "( 0xFFFFFFFFU ) != ( g_dx.d3d12device->RegisterCustomFenceLocationX( (D3D12_GPU_VIRTUAL_ADDRESS)context->endFenceData, L\"Frontend Compute END\" ) )", "%s != %s\n\t%i, %i", "0xFFFFFFFFU", "g_dx.d3d12device->RegisterCustomFenceLocationX( (D3D12_GPU_VIRTUAL_ADDRESS)context->endFenceData, L\"Frontend Compute END\" )", v15, v16) )
          __debugbreak();
      }
      if ( ((unsigned int (__fastcall *)(ID3D12Device *, unsigned int *, const wchar_t *))g_dx.d3d12device->m_pFunction[21].AddRef)(g_dx.d3d12device, context->memcpyFenceData, L"Frontend Compute MEM") == -1 )
      {
        LODWORD(v16) = ((__int64 (__fastcall *)(ID3D12Device *, unsigned int *, const wchar_t *))g_dx.d3d12device->m_pFunction[21].AddRef)(g_dx.d3d12device, context->memcpyFenceData, L"Frontend Compute MEM");
        v12 = "( 0xFFFFFFFFU ) != ( g_dx.d3d12device->RegisterCustomFenceLocationX( (D3D12_GPU_VIRTUAL_ADDRESS)context->memcpyFenceData, L\"Frontend Compute MEM\" ) )";
        v13 = "g_dx.d3d12device->RegisterCustomFenceLocationX( (D3D12_GPU_VIRTUAL_ADDRESS)context->memcpyFenceData, L\"Frontend Compute MEM\" )";
        v14 = 340;
        goto LABEL_34;
      }
    }
  }
  context->computeQueueIndex = v2;
}

/*
==============
R_InitConstantBufferInfoState
==============
*/
void R_InitConstantBufferInfoState(GfxConstantBufferAllocations *constantBufferAllocations, GfxConstantBufferInfo *info, const unsigned int reserveSize)
{
  int v3; 
  int v7; 
  int v8; 

  v3 = 0;
  if ( !info )
    goto LABEL_6;
  if ( info->type >= (unsigned int)GFX_CONSTANT_BUFFER_INFO_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 978, ASSERT_TYPE_ASSERT, "(!info || info->type < GFX_CONSTANT_BUFFER_INFO_COUNT)", (const char *)&queryFormat, "!info || info->type < GFX_CONSTANT_BUFFER_INFO_COUNT") )
    __debugbreak();
  v7 = 1;
  if ( info->type != GFX_CONSTANT_BUFFER_INFO_LINEAR )
LABEL_6:
    v7 = 0;
  LOBYTE(v3) = reserveSize != 0;
  if ( v3 != v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 979, ASSERT_TYPE_ASSERT, "((reserveSize > 0) == (info != nullptr && info->type == GFX_CONSTANT_BUFFER_INFO_LINEAR))", (const char *)&queryFormat, "(reserveSize > 0) == (info != nullptr && info->type == GFX_CONSTANT_BUFFER_INFO_LINEAR)") )
    __debugbreak();
  if ( info && info->type )
  {
    if ( constantBufferAllocations->constantBufferInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 966, ASSERT_TYPE_ASSERT, "(constantBufferAllocations->constantBufferInfo == 0)", (const char *)&queryFormat, "constantBufferAllocations->constantBufferInfo == NULL") )
      __debugbreak();
    constantBufferAllocations->reserveSize = reserveSize;
    v8 = info->linear.pageSize - 1;
  }
  else
  {
    constantBufferAllocations->reserveSize = reserveSize;
    v8 = -1;
  }
  constantBufferAllocations->constantPageOffset = v8;
  constantBufferAllocations->constantLastCheckedOffset = -1;
  constantBufferAllocations->aborting = 0;
  constantBufferAllocations->constantBufferInfo = info;
}

/*
==============
R_InitConstantBufferInfo_Linear
==============
*/
void R_InitConstantBufferInfo_Linear(GfxConstantBufferInfo *info, unsigned int size, unsigned int pageSize)
{
  unsigned int v6; 
  void *v10; 
  HRESULT v11; 
  const char *v12; 
  ID3D12DeviceChild *v13; 
  ID3D12DeviceChild *resource; 
  _BYTE v15[48]; 
  __int64 v16; 
  char v17[56]; 
  void *retaddr; 

  _R11 = &retaddr;
  *(_QWORD *)v15 = 1i64;
  info->type = GFX_CONSTANT_BUFFER_INFO_LINEAR;
  v16 = 0i64;
  v6 = (size + 63) & 0xFFFFFFC0;
  *(_QWORD *)&v15[28] = 65537i64;
  *(_DWORD *)&v15[24] = 1;
  *(_QWORD *)&v15[8] = 0i64;
  *(_QWORD *)&v15[16] = v6;
  *(_QWORD *)&v15[36] = 1i64;
  *(_DWORD *)&v15[44] = 1;
  __asm
  {
    vmovups ymm0, [rsp+0E8h+var_A0]
    vmovups xmm1, [rsp+0E8h+var_80]
    vmovups ymmword ptr [r11-68h], ymm0
    vmovsd  xmm0, [rsp+0E8h+var_70]
    vmovsd  qword ptr [r11-38h], xmm0
    vmovups xmmword ptr [r11-48h], xmm1
  }
  v10 = PMem_Alloc(v6, 0x40ui64, MEM_POOL_GPU_PRIVATE, PMEM_STACK_GAME, "R_InitConstantBufferInfo_Linear");
  v11 = ((__int64 (__fastcall *)(ID3D12Device *, void *, char *, __int64, _QWORD, GUID *, ID3D12DeviceChild **))g_dx.d3d12device->m_pFunction[14].Release)(g_dx.d3d12device, v10, v17, 2243i64, 0i64, &GUID_696442be_a72e_4059_bc79_5b5c98040fad, &resource);
  if ( v11 < 0 )
  {
    v12 = R_ErrorDescription(v11);
    Sys_Error((const ObfuscateErrorText)&stru_14436DF60, 307i64, v12);
  }
  PIXSetDebugName(resource, "R_InitConstantBufferInfo_Linear");
  v13 = resource;
  if ( v10 != (void *)((__int64 (__fastcall *)(ID3D12DeviceChild *))resource->m_pFunction[3].Release)(resource) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 538, ASSERT_TYPE_ASSERT, "(reinterpret_cast< D3D12_GPU_VIRTUAL_ADDRESS >( buf ) == placedResourceBuffer->GetGPUVirtualAddress())", (const char *)&queryFormat, "reinterpret_cast< D3D12_GPU_VIRTUAL_ADDRESS >( buf ) == placedResourceBuffer->GetGPUVirtualAddress()") )
    __debugbreak();
  info->linear.buf = (unsigned __int8 *)((__int64 (__fastcall *)(ID3D12DeviceChild *))v13->m_pFunction[3].Release)(v13);
  info->linear.bufSize = v6;
  info->linear.pageSize = pageSize;
  info->linear.offset = 0;
  info->linear.testFailOffset = -1;
}

/*
==============
R_InitConstantBufferInfo_Ring
==============
*/
void R_InitConstantBufferInfo_Ring(GfxConstantBufferInfo *info, unsigned int *sizes)
{
  unsigned int v3; 
  unsigned int v4; 
  void *v8; 
  HRESULT v9; 
  const char *v10; 
  ID3D12DeviceChild *v11; 
  ID3D12DeviceChild *resource; 
  _BYTE v13[48]; 
  __int64 v14; 
  __m256i v15; 

  info->type = GFX_CONSTANT_BUFFER_INFO_RING;
  v3 = *sizes;
  if ( !*sizes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 571, ASSERT_TYPE_ASSERT, "(size)", (const char *)&queryFormat, "size") )
    __debugbreak();
  *(_QWORD *)&v13[28] = 65537i64;
  *(_DWORD *)&v13[24] = 1;
  *(_QWORD *)&v13[36] = 1i64;
  *(_DWORD *)&v13[44] = 1;
  v4 = (v3 + 63) & 0xFFFFFFC0;
  __asm { vmovups xmm1, xmmword ptr [rsp+68h] }
  *(_QWORD *)&v13[16] = v4;
  *(_QWORD *)v13 = 1i64;
  *(_QWORD *)&v13[8] = 0i64;
  __asm
  {
    vmovups ymm0, [rsp+0E8h+var_A0]
    vmovups [rsp+0E8h+var_68], ymm0
  }
  v14 = 0i64;
  __asm
  {
    vmovsd  xmm0, [rsp+0E8h+var_70]
    vmovsd  [rsp+0E8h+var_38], xmm0
    vmovups [rsp+0E8h+var_48], xmm1
  }
  v8 = PMem_Alloc(v4, 0x40ui64, MEM_POOL_GPU_PRIVATE, PMEM_STACK_GAME, "R_InitConstantBufferInfo_Ring");
  v9 = ((__int64 (__fastcall *)(ID3D12Device *, void *, __m256i *, __int64, _QWORD, GUID *, ID3D12DeviceChild **))g_dx.d3d12device->m_pFunction[14].Release)(g_dx.d3d12device, v8, &v15, 2243i64, 0i64, &GUID_696442be_a72e_4059_bc79_5b5c98040fad, &resource);
  if ( v9 < 0 )
  {
    v10 = R_ErrorDescription(v9);
    Sys_Error((const ObfuscateErrorText)&stru_14436DF60, 307i64, v10);
  }
  PIXSetDebugName(resource, "R_InitConstantBufferInfo_Ring");
  v11 = resource;
  if ( v8 != (void *)((__int64 (__fastcall *)(ID3D12DeviceChild *))resource->m_pFunction[3].Release)(resource) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 596, ASSERT_TYPE_ASSERT, "(reinterpret_cast< D3D12_GPU_VIRTUAL_ADDRESS >( buf ) == placedResourceBuffer->GetGPUVirtualAddress())", (const char *)&queryFormat, "reinterpret_cast< D3D12_GPU_VIRTUAL_ADDRESS >( buf ) == placedResourceBuffer->GetGPUVirtualAddress()") )
    __debugbreak();
  info->linear.buf = (unsigned __int8 *)((__int64 (__fastcall *)(ID3D12DeviceChild *))v11->m_pFunction[3].Release)(v11);
  info->linear.bufSize = v4;
  memset_0(&info->ring[0].ringBuffer, 0, sizeof(info->ring[0].ringBuffer));
  info->ring[0].ringBuffer.bufSize = v4;
  info->ring[0].ringBuffer.settings.fencePendingFct = R_HW_IsFencePending;
  info->ring[0].ringBuffer.name = "Constant";
  info->ring[0].ringBuffer.settings.disableFenceOnAcquire = 1;
}

/*
==============
R_InitFrontEndDvars
==============
*/
void R_InitFrontEndDvars(void)
{
  ;
}

/*
==============
R_InitRenderBuffers
==============
*/
void R_InitRenderBuffers(void)
{
  unsigned int i; 
  GfxBackEndData *BackEndData; 
  unsigned int v4; 
  GfxDescriptorHeapInfo *computeDescHeapInfo; 
  __int64 v6; 
  ID3D12DeviceChild **cmdAllocs; 
  unsigned int v8; 
  ID3D12CommandAllocator **v9; 
  HRESULT v10; 
  const char *v11; 
  const char *v12; 
  const dvar_t *v13; 
  unsigned int j; 
  GfxBackEndData *v15; 
  unsigned int v16; 
  ComputeContextData *contextData; 
  unsigned __int8 *v18; 
  unsigned int *v19; 
  GfxBatchedQuadMeshData (*spotShadowBatchedQuadMesh)[6][8]; 
  __int64 v21; 
  __int64 v22; 
  GfxMeshData *p_meshData; 
  GfxBatchedQuadMeshData (*sunShadowBatchedQuadMesh)[6][2][10]; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  __int128 v28; 
  __int128 v29; 
  GfxBufferCreationContext v30; 

  R_LockGfxImmediateContext();
  for ( i = 0; i < 2; ++i )
  {
    BackEndData = R_GetBackEndData(i);
    R_InitConstantBufferInfo_Linear(&BackEndData->constantBufferInfo, 0xC00000u, 0x20000u);
    R_InitConstantBufferInfo_Linear(&BackEndData->async2D.constBufferInfo, 0x40000u, 0x2000u);
    R_InitDescriptorHeapInfo_Linear(&BackEndData->async2D.descHeapInfo, D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV, 1u, 0xC00u, 0x80u, 64);
    *(_QWORD *)&v28 = (char *)&queryFormat.fmt + 3;
    *((_QWORD *)&v28 + 1) = "GfxBackEndData.async2D.indices";
    __asm
    {
      vmovups xmm0, [rsp+0B8h+var_58]
      vmovdqa [rsp+0B8h+var_38], xmm0
    }
    R_InitDynamicIndexBufferState(&BackEndData->async2D.indices, 30720, &v30);
    *(_QWORD *)&v29 = (char *)&queryFormat.fmt + 3;
    *((_QWORD *)&v29 + 1) = "GfxBackEndData.async2D.vertices";
    __asm
    {
      vmovups xmm0, [rsp+0B8h+var_48]
      vmovdqa [rsp+0B8h+var_38], xmm0
    }
    R_InitDynamicVertexBufferState(&BackEndData->async2D.vertices, 655360, 0, D3D12_RESOURCE_STATE_GENERIC_READ, &v30);
    R_InitDescriptorHeapInfo_Linear(&BackEndData->drawDescHeapInfo, D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV, 0, g_secondaryDescriptorHeapSize, g_secondaryDescriptorHeapDangerZone, g_secondaryDescriptorHeapPageSize);
    v4 = 0;
    computeDescHeapInfo = BackEndData->computeDescHeapInfo;
    v6 = 0i64;
    do
    {
      R_InitDescriptorHeapInfo_Linear(computeDescHeapInfo, D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV, v4 + 2, g_computeDescriptorHeapSizes[v6], g_computeDescriptorHeapDangerZones[v6], g_computeDescriptorHeapPageSizes[v6]);
      ++v4;
      ++v6;
      ++computeDescHeapInfo;
    }
    while ( v4 < 2 );
    cmdAllocs = BackEndData->cmdAllocs;
    v8 = 0;
    v9 = BackEndData->cmdAllocs;
    do
    {
      v10 = ((__int64 (__fastcall *)(ID3D12Device *, _QWORD, GUID *, ID3D12CommandAllocator **))g_dx.d3d12device->m_pFunction[3].QueryInterface)(g_dx.d3d12device, 0i64, &GUID_6102dee4_af59_4b09_b999_b44d73f09b24, v9);
      if ( v10 < 0 )
      {
        v11 = R_ErrorDescription(v10);
        Sys_Error((const ObfuscateErrorText)&stru_144426AE0, 1199i64, v11);
      }
      v12 = j_va("Cmdbuf command allocator %d", v8);
      PIXSetDebugName(*cmdAllocs, v12);
      ++v8;
      ++v9;
      ++cmdAllocs;
    }
    while ( v8 < 6 );
    v13 = r_emissive_surf_vert_limit;
    if ( !r_emissive_surf_vert_limit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    R_InitDynamicMesh(BackEndData->mesh, "GFXMESH_CODE_EMISSIVE", 0x30000u, v13->current.unsignedInt, 0x30u, 0x4000u, 0x4000u, 0x600u, 0, 0x600u, 0);
    R_InitDynamicMesh(&BackEndData->mesh[1], "GFXMESH_CODE_SUNSHADOW_TRANS", 0x18000u, 0x10000u, 0x30u, 0x4000u, 0x4000u, 0x600u, 0, 0x600u, 0);
    R_InitDynamicMesh(&BackEndData->mesh[2], "GFXMESH_GLASS", 0x4800u, 0, 0, 0, 0, 0, 0, 0, 0x2100u);
    R_InitDynamicMesh(&BackEndData->mesh[3], "GFXMESH_FLARE", 0x1200u, 0xC00u, 0x30u, 0, 0, 0x100u, 0x100u, 0, 0);
    BackEndData->endFence = 0i64;
    PIXSetDebugFenceName(&BackEndData->endFence, "End Fence");
  }
  for ( j = 0; j < 2; ++j )
  {
    v15 = R_GetBackEndData(j);
    v16 = 0;
    contextData = v15->compute.contextData;
    do
      R_InitComputeContextData(contextData++, v16++);
    while ( v16 < 2 );
    v18 = (unsigned __int8 *)R_AllocGlobalVariable(0x100000ui64, "computeCmds");
    R_InitComputeCmdList(&v15->compute.cmdListData, v18, 0x100000);
    v19 = (unsigned int *)PMem_Alloc(4ui64, 0x40ui64, MEM_POOL_GPU_PRIVATE, PMEM_STACK_GAME, "Gfx Compute Memcpy Fence");
    v15->memcpyFenceData = v19;
    *v19 = 0;
  }
  R_InitDynamicMesh(&gfxMeshGlob.spotShadowViewMesh.meshData, "Spot Shadow View Mesh", 6u, 4u, 0x20u, 0, 0, 0, 0, 0, 0);
  spotShadowBatchedQuadMesh = gfxMeshGlob.spotShadowBatchedQuadMesh;
  v21 = 6i64;
  do
  {
    v22 = 8i64;
    do
    {
      R_InitDynamicMesh((GfxMeshData *)spotShadowBatchedQuadMesh, "Spot Shadow Batched Quad Mesh", 0x1800u, 0x1000u, 0x20u, 0, 0, 0, 0, 0, 0);
      R_InitBatchedQuadMesh((GfxMeshData *)spotShadowBatchedQuadMesh, 1024);
      spotShadowBatchedQuadMesh = (GfxBatchedQuadMeshData (*)[6][8])((char *)spotShadowBatchedQuadMesh + 1016);
      --v22;
    }
    while ( v22 );
    --v21;
  }
  while ( v21 );
  p_meshData = &gfxMeshGlob.sunShadowCacheQuadMesh[0][0][0][0].meshData;
  sunShadowBatchedQuadMesh = gfxMeshGlob.sunShadowBatchedQuadMesh;
  v25 = 6i64;
  do
  {
    v26 = 2i64;
    do
    {
      v27 = 10i64;
      do
      {
        R_InitDynamicMesh((GfxMeshData *)sunShadowBatchedQuadMesh, "Sun Shadow Batched Quad Mesh", 0x180u, 0x100u, 0x20u, 0, 0, 0, 0, 0, 0);
        R_InitBatchedQuadMesh((GfxMeshData *)sunShadowBatchedQuadMesh, 64);
        R_InitDynamicMesh(p_meshData, "Sun Shadow Cache Quad Mesh", 6u, 4u, 0x20u, 0, 0, 0, 0, 0, 0);
        sunShadowBatchedQuadMesh = (GfxBatchedQuadMeshData (*)[6][2][10])((char *)sunShadowBatchedQuadMesh + 1016);
        p_meshData = (GfxMeshData *)((char *)p_meshData + 1032);
        --v27;
      }
      while ( v27 );
      --v26;
    }
    while ( v26 );
    --v25;
  }
  while ( v25 );
  R_UnlockGfxImmediateContext();
}

/*
==============
R_InitRenderCommands
==============
*/
void R_InitRenderCommands(void)
{
  GfxCmdArray *v0; 
  unsigned int i; 
  GfxBackEndData *BackEndData; 
  unsigned __int8 *v3; 

  s_renderCmdBufferSize = 184320i64;
  v0 = g_frontEndCmds;
  s_renderCmdWarnSize = 138240i64;
  for ( i = 0; i < 2; ++i )
  {
    BackEndData = R_GetBackEndData(i);
    v3 = (unsigned __int8 *)R_AllocGlobalVariable(s_renderCmdBufferSize, "rendercmds");
    v0->cmds = v3;
    if ( ((unsigned __int8)v3 & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 457, ASSERT_TYPE_ASSERT, "(IsAligned( g_frontEndCmds[dataIndex].cmds, GFXCMD_MAX_ALIGNMENT ))", (const char *)&queryFormat, "IsAligned( g_frontEndCmds[dataIndex].cmds, GFXCMD_MAX_ALIGNMENT )") )
      __debugbreak();
    R_InitDebugEntry(&BackEndData->debugGlobals);
    ++v0;
  }
  R_InitSceneBuffers();
  if ( frontEndDataOut )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 472, ASSERT_TYPE_ASSERT, "(!frontEndDataOut)", (const char *)&queryFormat, "!frontEndDataOut") )
      __debugbreak();
  }
}

/*
==============
R_IssueRenderCommandsBegin
==============
*/
void R_IssueRenderCommandsBegin(unsigned int type)
{
  int v2; 
  bool v3; 

  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 1658, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  v2 = 0;
  if ( r_smp_backend->current.enabled )
    LOBYTE(v2) = !r_glob.isRenderingRemoteUpdate;
  frontEndDataOut->renderFromBackEnd = v2;
  frontEndDataOut->drawType = type;
  if ( (type & 2) != 0 )
  {
    R_RegisterRenderFrame();
    Sys_ProfBeginNamedEvent(0xFFFF7F50, "dev perf counters");
    Profile_ResetCounters(0);
    Sys_ProfEndNamedEvent();
  }
  if ( frontEndDataOut->renderFromBackEnd )
  {
    if ( !Sys_IsMainThread2() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 1675, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread2())", (const char *)&queryFormat, "Sys_IsMainThread2()") )
      __debugbreak();
    v3 = DB_AreFastfileLoadsCompleted();
    s_deferWakeRenderer = !v3;
    if ( v3 )
    {
      frontEndDataOut->beginReady = 1;
      R_WakeRenderer(frontEndDataOut);
    }
  }
}

/*
==============
R_IssueRenderCommandsEmissive
==============
*/
void R_IssueRenderCommandsEmissive(void)
{
  frontEndDataOut->emissiveReady = 1;
}

/*
==============
R_IssueRenderCommandsEnd
==============
*/
void R_IssueRenderCommandsEnd()
{
  bool v3; 
  GfxBackEndData *v4; 
  int renderFromBackEnd; 
  GfxBackEndData *v54; 
  bool IsMainThread; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  if ( !Sys_IsUpdateScreenThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 1731, ASSERT_TYPE_ASSERT, "(Sys_IsUpdateScreenThread())", (const char *)&queryFormat, "Sys_IsUpdateScreenThread()", -2i64) )
    __debugbreak();
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 1732, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  Profile2_UpdateEntry(35);
  if ( ((unsigned __int8)&dword_14FDE805C & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE805C) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE805C);
  r_glob.allowAddDrawCall = 0;
  v3 = !Sys_IsMainThread();
  v4 = frontEndDataOut;
  if ( !v3 && (frontEndDataOut->drawType & 2) != 0 )
  {
    if ( frontEndDataOut->frontendFramePass != R_RT_GetFrontendFramePass() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 1741, ASSERT_TYPE_ASSERT, "(frontEndDataOut->frontendFramePass == R_RT_GetFrontendFramePass())", (const char *)&queryFormat, "frontEndDataOut->frontendFramePass == R_RT_GetFrontendFramePass()") )
      __debugbreak();
    R_RT_EndFrontendFrame();
    v4 = frontEndDataOut;
  }
  renderFromBackEnd = v4->renderFromBackEnd;
  v4->finishReady = 1;
  R_TG_SetupPhase(&frontEndDataOut->viewInfo[frontEndDataOut->viewInfoIndex], frontEndDataOut->smpFrame, 6u);
  _RBX = frontEndDataOut;
  __asm
  {
    vmovss  xmm7, cs:__real@40000000
    vxorps  xmm6, xmm6, xmm6
  }
  if ( (frontEndDataOut->drawType & 2) != 0 )
  {
    __asm
    {
      vmovss  xmm2, cs:__real@49340000
      vmulss  xmm0, xmm2, dword ptr [rax+28h]
      vcvttss2si rsi, xmm0
      vmulss  xmm1, xmm2, dword ptr [rax+28h]
      vcvttss2si rbp, xmm1
      vmulss  xmm1, xmm2, dword ptr [rax+2Ch]
      vcvttss2si r14, xmm1
    }
    if ( !frontEndDataOut->skinnedCacheVb && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 1420, ASSERT_TYPE_ASSERT, "(frontEndDataOut->skinnedCacheVb)", (const char *)&queryFormat, "frontEndDataOut->skinnedCacheVb") )
      __debugbreak();
    rg.skinnedCacheReachedCorpseThreshold = frontEndDataOut->skinnedCacheVb->used >= (unsigned int)_RSI;
    rg.skinnedCacheReachedLODThreshold = frontEndDataOut->skinnedCacheVb->used >= (unsigned int)_RBP;
    rg.skinnedCacheLeftLODThreshold = frontEndDataOut->skinnedCacheVb->used < (unsigned int)_R14;
    if ( Com_GameMode_SupportsFeature(WEAPON_CHARGING_IN|0x80) )
    {
      if ( rg.skinnedCacheReachedLODThreshold )
      {
        _RCX = r_skinnedLodBias;
        __asm { vmovss  xmm2, dword ptr [rcx+28h] }
        _RAX = r_skinnedLodBiasStep;
        __asm
        {
          vmovss  xmm0, dword ptr [rax+28h]
          vmulss  xmm1, xmm0, xmm7
          vucomiss xmm2, xmm0
        }
        if ( rg.skinnedCacheReachedLODThreshold )
        {
          __asm { vucomiss xmm2, xmm1 }
          if ( rg.skinnedCacheReachedLODThreshold )
            __asm { vmovaps xmm1, xmm0 }
        }
      }
      else
      {
        if ( !rg.skinnedCacheLeftLODThreshold )
          goto LABEL_29;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+7ACCh]
          vmulss  xmm1, xmm0, dword ptr [rax+28h]
        }
        _RCX = r_skinnedLodBias;
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+28h]
          vsubss  xmm1, xmm0, xmm1
          vmaxss  xmm1, xmm1, xmm6
        }
      }
      Dvar_SetFloat_Internal(_RCX, *(float *)&_XMM1);
    }
    else
    {
      _RCX = r_skinnedLodBias;
      __asm { vucomiss xmm6, dword ptr [rcx+28h] }
    }
  }
LABEL_29:
  _RBX = frontEndDataOut;
  if ( (frontEndDataOut->drawType & 2) == 0 )
    goto LABEL_38;
  __asm
  {
    vmovss  xmm1, cs:__real@4a000000
    vmulss  xmm0, xmm1, dword ptr [rax+28h]
    vcvttss2si rdx, xmm0
    vmulss  xmm1, xmm1, dword ptr [rax+2Ch]
    vcvttss2si r8, xmm1
  }
  rg.skinnedSubdivCacheReachedLODThreshold = frontEndDataOut->subdivCacheVb->used >= (unsigned int)_RDX;
  rg.skinnedSubdivCacheLeftLODThreshold = frontEndDataOut->subdivCacheVb->used < (unsigned int)_R8;
  if ( Com_GameMode_SupportsFeature(WEAPON_CHARGING_IN|0x80) )
  {
    if ( rg.skinnedSubdivCacheReachedLODThreshold )
    {
      _RAX = r_skinnedSubdivLodBiasStep;
      __asm { vmovss  xmm1, dword ptr [rax+28h] }
      _RCX = r_skinnedSubdivLodBias;
      __asm { vucomiss xmm1, dword ptr [rcx+28h] }
      if ( !rg.skinnedSubdivCacheReachedLODThreshold )
        __asm { vmulss  xmm1, xmm1, xmm7 }
    }
    else
    {
      if ( !rg.skinnedSubdivCacheLeftLODThreshold )
        goto LABEL_38;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+7ACCh]
        vmulss  xmm1, xmm0, dword ptr [rax+28h]
      }
      _RCX = r_skinnedSubdivLodBias;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+28h]
        vsubss  xmm1, xmm0, xmm1
        vmaxss  xmm1, xmm1, xmm6
      }
    }
    Dvar_SetFloat_Internal(_RCX, *(float *)&_XMM1);
  }
  else
  {
    _RCX = r_skinnedSubdivLodBias;
    __asm { vucomiss xmm6, dword ptr [rcx+28h] }
  }
LABEL_38:
  _RBX = frontEndDataOut;
  if ( (frontEndDataOut->drawType & 2) != 0 )
  {
    __asm
    {
      vmovss  xmm1, cs:__real@48800000
      vmulss  xmm0, xmm1, dword ptr [rax+28h]
      vcvttss2si rdx, xmm0
      vmulss  xmm1, xmm1, dword ptr [rax+2Ch]
      vcvttss2si r8, xmm1
    }
    rg.sceneSurfsReachedLODThreshold = frontEndDataOut->surfPos >= (unsigned int)_RDX;
    rg.sceneSurfsLeftLODThreshold = frontEndDataOut->surfPos < (unsigned int)_R8;
    if ( Com_GameMode_SupportsFeature(WEAPON_CHARGING_LOOP|0x80) )
    {
      if ( rg.sceneSurfsReachedLODThreshold )
      {
        _RAX = r_sceneSurfsLodBiasStep;
        __asm { vmovss  xmm1, dword ptr [rax+28h] }
        _RCX = r_sceneSurfsLodBias;
        __asm { vucomiss xmm1, dword ptr [rcx+28h] }
        if ( !rg.sceneSurfsReachedLODThreshold )
          __asm { vmulss  xmm1, xmm1, xmm7 }
        goto LABEL_46;
      }
      if ( rg.sceneSurfsLeftLODThreshold )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+7ACCh]
          vmulss  xmm1, xmm0, dword ptr [rax+28h]
        }
        _RCX = r_sceneSurfsLodBias;
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+28h]
          vsubss  xmm1, xmm0, xmm1
          vmaxss  xmm1, xmm1, xmm6
        }
LABEL_46:
        Dvar_SetFloat_Internal(_RCX, *(float *)&_XMM1);
      }
    }
    else
    {
      _RCX = r_sceneSurfsLodBias;
      __asm { vucomiss xmm6, dword ptr [rcx+28h] }
    }
  }
  v54 = frontEndDataOut;
  frontEndDataOut = NULL;
  if ( renderFromBackEnd == 1 && s_deferWakeRenderer )
    R_WakeRenderer(v54);
  if ( Sys_IsMainThread() )
    Sys_UpdateActiveWorkerThreads();
  IsMainThread = Sys_IsMainThread();
  if ( renderFromBackEnd == 1 )
  {
    if ( !IsMainThread && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 1785, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    R_ReleaseThreadOwnership();
  }
  else
  {
    if ( IsMainThread )
      R_SyncRenderThread();
    if ( Sys_IsMainThread() )
    {
      rbBackendDataCopier.m_commands[0].m_consumerThreadId = 0;
      rbBackendDataCopier.m_commands[1].m_consumerThreadId = 0;
      rbBackendDataCopier.m_commands[2].m_consumerThreadId = 0;
      RB_DrawFrame(v54);
      rbBackendDataCopier.m_commands[0].m_consumerThreadId = 0;
      rbBackendDataCopier.m_commands[1].m_consumerThreadId = 0;
      rbBackendDataCopier.m_commands[2].m_consumerThreadId = 0;
    }
    else
    {
      RB_DrawFrame(v54);
    }
  }
  Profile2_UpdateEntry(35);
  if ( ((unsigned __int64)&dword_14FDE805C & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE805C) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE805C);
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_38]
    vmovaps xmm7, [rsp+88h+var_48]
  }
}

/*
==============
R_IssueRenderCommandsHud2D
==============
*/
void R_IssueRenderCommandsHud2D(void)
{
  frontEndDataOut->hud2DReady = 1;
}

/*
==============
R_IssueRenderCommandsOpaque
==============
*/
void R_IssueRenderCommandsOpaque(void)
{
  frontEndDataOut->opaqueReady = 1;
}

/*
==============
R_IssueRenderCommandsShadow
==============
*/
void R_IssueRenderCommandsShadow(void)
{
  frontEndDataOut->shadowReady = 1;
}

/*
==============
R_MultiLightGridFXLighting_InitWorld
==============
*/
void R_MultiLightGridFXLighting_InitWorld(void)
{
  signed int v0; 
  GfxMultiLightGridFXLightingBuffers *v1; 
  GfxBackEndData *BackEndData; 

  if ( s_world.draw.lightGridType == GFX_LIGHTGRID_TYPE_MULTI )
  {
    v0 = 0;
    PMem_BeginAlloc("Multi LightGrid FX lighting buffers", PMEM_STACK_GAME);
    v1 = s_multiLightGridFXLightingWorldBuffers[1];
    do
    {
      BackEndData = R_GetBackEndData(v0);
      R_InitWorldMultiLightGridFXLightingBuffers(BackEndData->mesh, v1 - 2, 0x40000u);
      R_InitWorldMultiLightGridFXLightingBuffers(&BackEndData->mesh[1], v1, 0xC000u);
      ++v0;
      ++v1;
    }
    while ( v0 < 2 );
    PMem_EndAlloc("Multi LightGrid FX lighting buffers", PMEM_STACK_GAME);
  }
}

/*
==============
R_MultiLightGridFXLighting_ShutdownWorld
==============
*/
void R_MultiLightGridFXLighting_ShutdownWorld(void)
{
  GfxMultiLightGridFXLightingBuffers *v0; 
  __int64 v1; 
  StreamerMemLoan result; 

  if ( s_world.draw.lightGridType == GFX_LIGHTGRID_TYPE_MULTI )
  {
    v0 = s_multiLightGridFXLightingWorldBuffers[1];
    v1 = 2i64;
    do
    {
      R_ShutdownWorldMultiLightGridFXLightingBuffers(v0 - 2);
      R_ShutdownWorldMultiLightGridFXLightingBuffers(v0++);
      --v1;
    }
    while ( v1 );
    PMem_Free(&result, "Multi LightGrid FX lighting buffers", PMEM_STACK_GAME);
    StreamerMemLoan::~StreamerMemLoan(&result);
  }
}

/*
==============
R_PIP_ToggleSmpFrame
==============
*/
void R_PIP_ToggleSmpFrame(LocalClientNum_t localClientNum)
{
  int v2; 
  unsigned int v3; 

  if ( frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2753, ASSERT_TYPE_ASSERT, "(!frontEndDataOut)", (const char *)&queryFormat, "!frontEndDataOut") )
    __debugbreak();
  if ( Sys_IsMainThread() )
    R_ReleaseThreadOwnership();
  Sys_ProfBeginNamedEvent(0xFF404040, "wait renderer2");
  Sys_ProcessWorkerCmdsWithTimeout(Sys_IsRendererReady2, NULL);
  Sys_ProfEndNamedEvent();
  v2 = ((_BYTE)s_smpFrame - 1) & 1;
  s_smpFrame = v2;
  frontEndDataOut = R_GetBackEndData(v2);
  v3 = Sys_Milliseconds();
  R_ResetGPUHangDetection(v3);
  R_ToggleSmpFrameInternal(localClientNum);
}

/*
==============
R_PerformMaterialModelSurfSort
==============
*/
void R_PerformMaterialModelSurfSort(const bool allowRenderSync, const int transientSort)
{
  if ( allowRenderSync )
  {
    if ( DB_IsDoingSPHotLoad() && Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 5316, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "This code path should not be taken") )
      __debugbreak();
    Sys_ProfBeginNamedEvent(0xFFFF7F50, "R_SyncRenderThread");
    R_SyncRenderThread();
    Sys_ProfEndNamedEvent();
  }
  if ( transientSort )
  {
    Material_SortCheck();
  }
  else
  {
    Sys_ProfBeginNamedEvent(0xFF708090, "Material_Sort");
    Material_Sort();
    Sys_ProfEndNamedEvent();
  }
  Sys_ProfBeginNamedEvent(0xFF708090, "R_SortWorldSurfaces");
  if ( rgp.world )
    R_SortWorldSurfaces(transientSort);
  Sys_ProfEndNamedEvent();
}

/*
==============
R_PreAbortRenderCommands
==============
*/
void R_PreAbortRenderCommands(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 1837, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( frontEndDataOut )
    frontEndDataOut->abortReady = 1;
}

/*
==============
R_ReleaseThreadOwnership
==============
*/
void R_ReleaseThreadOwnership(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 1553, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( r_glob.startedRenderThread && r_glob.mainThreadHasOwnership )
  {
    r_glob.mainThreadHasOwnership = 0;
    Sys_ReleaseThreadOwnership();
  }
}

/*
==============
R_RenderCommandMaterial
==============
*/
Material *R_RenderCommandMaterial(Material *material)
{
  if ( !material )
    return rgp.defaultMaterial;
  if ( !material->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 456, ASSERT_TYPE_ASSERT, "(handle->name)", (const char *)&queryFormat, "handle->name") )
    __debugbreak();
  if ( !*material->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 457, ASSERT_TYPE_ASSERT, "(handle->name[0])", (const char *)&queryFormat, "handle->name[0]") )
    __debugbreak();
  return material;
}

/*
==============
R_ResetCollectionVisibilityCache
==============
*/
void R_ResetCollectionVisibilityCache(void)
{
  GfxWorld *world; 
  bitarray_dynamic *p_collectionTransientZonePrevFrameVisibility; 
  unsigned int v2; 
  unsigned int wordCount; 
  unsigned int v4; 
  unsigned int *array; 
  unsigned __int64 i; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  GfxCollsctionVisibilityCache *v10; 
  __int64 j; 
  __int64 v12; 
  const unsigned __int16 **collections; 

  world = rgp.world;
  if ( rgp.world && rgp.world->smodels.collectionVisData )
  {
    p_collectionTransientZonePrevFrameVisibility = &rgp.world->smodels.collectionTransientZonePrevFrameVisibility;
    v2 = 0;
    wordCount = rgp.world->smodels.collectionTransientZonePrevFrameVisibility.wordCount;
    if ( wordCount )
    {
      if ( wordCount >= 4 && (p_collectionTransientZonePrevFrameVisibility->array > (unsigned int *)p_collectionTransientZonePrevFrameVisibility || &p_collectionTransientZonePrevFrameVisibility->array[(unsigned __int64)(wordCount - 1)] < (unsigned int *)p_collectionTransientZonePrevFrameVisibility) )
      {
        v4 = wordCount & 0xFFFFFFFC;
        do
          v2 += 4;
        while ( v2 < v4 );
        array = p_collectionTransientZonePrevFrameVisibility->array;
        for ( i = (16 * ((unsigned __int64)v4 >> 2)) >> 2; i; --i )
          *array++ = 0;
        world = rgp.world;
      }
      if ( v2 < wordCount )
      {
        v7 = v2;
        v8 = wordCount - v2;
        v9 = v7;
        do
        {
          p_collectionTransientZonePrevFrameVisibility->array[v9++] = 0;
          --v8;
        }
        while ( v8 );
        world = rgp.world;
      }
    }
    memset_0(world->smodels.collectionVisRefCount, 0, world->smodels.collectionCount);
    memset_0(rgp.world->smodels.collectionVisData, 0, 4i64 * rgp.world->smodels.collectionVisDataCount);
  }
  v10 = &s_collectionVisibilityCache;
  for ( j = 1536i64; j; --j )
  {
    v10->collectionCount[0] = 0;
    v10 = (GfxCollsctionVisibilityCache *)((char *)v10 + 2);
  }
  v12 = 192i64;
  collections = s_collectionVisibilityCache.collections;
  do
  {
    *collections = NULL;
    collections[1] = NULL;
    collections[2] = NULL;
    collections += 8;
    *(collections - 5) = NULL;
    *(collections - 4) = NULL;
    *(collections - 3) = NULL;
    *(collections - 2) = NULL;
    *(collections - 1) = NULL;
    --v12;
  }
  while ( v12 );
}

/*
==============
R_ResetGlobalViews
==============
*/
void R_ResetGlobalViews(void)
{
  *(_QWORD *)&rg.viewInfoCount = 0i64;
}

/*
==============
R_SetInputWorldDefaults
==============
*/
void R_SetInputWorldDefaults(GfxCmdBufInput *input)
{
  GfxImage *blackImage; 

  blackImage = rgp.blackImage;
  if ( !input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  input->codeImages[0] = blackImage;
  input->codeImages[79] = rgp.blackImage;
  input->codePersistentImages[15] = rgp.defaultWaveWaterFloatZImage;
  input->codeImages[77] = rgp.defaultWaveWaterFloatZImage;
  input->codePersistentImages[25] = rgp.blackImage3D;
  input->codePersistentImages[26] = rgp.whiteImage3D;
  input->codePersistentImages[27] = rgp.whiteImage;
  input->codePersistentImages[10] = rgp.whiteImage;
  input->codePersistentImages[0] = rgp.whiteImage;
  input->codePersistentImages[5] = rgp.zeroImage;
  input->codePersistentImages[6] = rgp.blackImage;
  input->codePersistentImages[2] = rgp.blackShadowImage;
  input->codePersistentImages[3] = rgp.blackShadowImage;
  input->codePersistentImages[4] = rgp.blackShadowImage;
  input->codePersistentImages[1] = rgp.blackShadowImage;
  input->codePersistentImages[7] = rgp.blackImage;
  input->codeImages[36] = rgp.whiteImage;
  input->codeImages[37] = rgp.whiteImage;
  input->codeImages[38] = rgp.defaultFogLightmapImage;
  input->codePersistentImages[11] = rgp.blackImage;
  input->codePersistentImages[12] = rgp.blackImage;
  input->codeImages[83] = rgp.blackUintImage;
}

/*
==============
R_SetUIMaskCommandParams
==============
*/

void __fastcall R_SetUIMaskCommandParams(GfxCmdSetUIMask *cmd, double maskX, double maskY, double maskWidth, float maskHeight, float maskRotation, float alphaScale, float alphaOffset, float maskUMin, float maskVMin, float maskUMax, float maskVMax, const vec2_t *viewportSize, GfxImage *image)
{
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  char v106; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  dword ptr [rax+18h], xmm2
    vmovss  dword ptr [rax+10h], xmm1
  }
  _RDI = cmd;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0E8h+var_88], xmm13
    vmovaps [rsp+0E8h+var_98], xmm14
    vmovaps [rsp+0E8h+var_A8], xmm15
    vmovaps xmm6, xmm3
  }
  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 3584, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, [rsp+0E8h+arg_20]
    vmaxss  xmm0, xmm0, cs:__real@00800000
    vmovss  xmm1, [rsp+0E8h+arg_28]
    vmaxss  xmm6, xmm6, cs:__real@00800000
    vmovss  [rsp+0E8h+arg_20], xmm0
    vmulss  xmm0, xmm1, cs:__real@3c8efa35
  }
  *(double *)&_XMM0 = j___libm_sse2_sincosf_(cmd, v14, v15, v16);
  __asm
  {
    vmovss  xmm12, cs:__real@3f000000
    vmovss  xmm9, [rsp+0E8h+arg_50]
    vsubss  xmm10, xmm9, [rsp+0E8h+arg_40]
    vmovss  xmm7, cs:__real@3f800000
  }
  _RAX = viewportSize;
  _R11 = &v106;
  __asm
  {
    vmovss  xmm1, [rsp+0E8h+arg_30]
    vmovss  xmm15, [rsp+0E8h+arg_58]
    vmovups xmm8, xmm0
    vmovss  xmm11, dword ptr [rax]
    vmovss  xmm13, dword ptr [rax+4]
    vmovups [rsp+0E8h+var_B8], xmm0
    vshufps xmm2, xmm0, xmm0, 1
    vmovss  xmm0, [rsp+0E8h+arg_38]
    vmovss  dword ptr [rdi+8], xmm0
    vmovss  dword ptr [rdi+4], xmm1
    vdivss  xmm5, xmm7, xmm6
    vmulss  xmm3, xmm10, xmm12
    vmulss  xmm0, xmm3, xmm2
    vmulss  xmm1, xmm0, xmm11
    vmulss  xmm2, xmm1, xmm5
    vmovss  dword ptr [rdi+18h], xmm2
    vmulss  xmm0, xmm3, xmm8
    vmulss  xmm1, xmm0, xmm13
    vmulss  xmm2, xmm1, xmm5
    vmovss  dword ptr [rdi+1Ch], xmm2
    vmovss  xmm2, [rsp+0E8h+arg_20]
    vsubss  xmm2, xmm2, xmm13
    vsubss  xmm0, xmm6, xmm11
    vmulss  xmm1, xmm0, xmm12
    vaddss  xmm8, xmm1, [rsp+0E8h+arg_8]
    vaddss  xmm1, xmm9, [rsp+0E8h+arg_40]
    vmulss  xmm0, xmm2, xmm12
    vaddss  xmm6, xmm0, [rsp+0E8h+arg_10]
    vmovups xmm0, [rsp+0E8h+var_B8]
    vshufps xmm9, xmm0, xmm0, 1
    vmulss  xmm0, xmm6, xmm0
    vmulss  xmm4, xmm1, xmm12
    vmulss  xmm2, xmm8, xmm9
    vsubss  xmm1, xmm2, xmm0
    vmulss  xmm2, xmm1, xmm10
    vmovups xmm10, [rsp+0E8h+var_B8]
    vmulss  xmm3, xmm2, xmm5
    vdivss  xmm5, xmm7, [rsp+0E8h+arg_20]
    vsubss  xmm7, xmm15, [rsp+0E8h+arg_48]
    vsubss  xmm0, xmm4, xmm3
    vmovss  dword ptr [rdi+28h], xmm0
    vmulss  xmm0, xmm7, xmm12
    vmulss  xmm1, xmm0, xmm10
    vmulss  xmm0, xmm7, cs:__real@bf000000
    vmulss  xmm2, xmm1, xmm11
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmulss  xmm1, xmm0, xmm9
    vaddss  xmm0, xmm15, [rsp+0E8h+arg_48]
    vmulss  xmm3, xmm2, xmm5
    vmulss  xmm2, xmm1, xmm13
    vmulss  xmm1, xmm8, xmm10
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovss  dword ptr [rdi+20h], xmm3
    vmulss  xmm3, xmm2, xmm5
    vmulss  xmm2, xmm6, xmm9
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmulss  xmm4, xmm0, xmm12
    vaddss  xmm0, xmm2, xmm1
    vmulss  xmm2, xmm0, xmm7
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovss  dword ptr [rdi+24h], xmm3
    vmulss  xmm3, xmm2, xmm5
    vsubss  xmm1, xmm4, xmm3
  }
  _RDI->image = image;
  __asm
  {
    vmovss  dword ptr [rdi+2Ch], xmm1
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, [rsp+0E8h+var_98]
    vmovaps xmm15, [rsp+0E8h+var_A8]
  }
}

/*
==============
R_SetupCollectionVisibility
==============
*/
void R_SetupCollectionVisibility(const GfxBackEndData *const backEndData)
{
  GfxWorld *world; 
  unsigned int v3; 
  unsigned __int8 *collectionVisRefCount; 
  unsigned int *collectionVisData; 
  bitarray<1536> *p_transientVisibility; 
  __int64 v7; 
  unsigned int *array; 
  _DWORD *v9; 
  int v10; 
  int v11; 
  unsigned int v12; 
  unsigned int v13; 
  __int64 v14; 
  __int64 v15; 
  unsigned int v16; 
  unsigned __int64 v17; 
  unsigned __int16 v18; 
  const unsigned __int16 *v19; 
  __int64 v20; 
  unsigned __int64 v21; 
  GfxWorldTransientZone *v23; 
  unsigned int collectionCount; 
  const unsigned __int16 *collections; 
  __int64 v26; 
  unsigned __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  unsigned int wordCount; 
  GfxWorld *v31; 
  __int64 v32; 
  bitarray<1536> *v33; 
  _DWORD *v34; 
  unsigned int v35; 
  int v36; 

  if ( rgp.world->smodels.collectionVisData )
  {
    Profile_Begin(207);
    world = rgp.world;
    v31 = rgp.world;
    v3 = 0;
    v35 = 0;
    collectionVisRefCount = rgp.world->smodels.collectionVisRefCount;
    collectionVisData = rgp.world->smodels.collectionVisData;
    wordCount = rgp.world->smodels.collectionTransientZonePrevFrameVisibility.wordCount;
    if ( !wordCount )
      goto LABEL_51;
    p_transientVisibility = &backEndData->transientVisibility;
    v7 = 0i64;
    v32 = 0i64;
    v33 = &backEndData->transientVisibility;
    while ( 1 )
    {
      array = world->smodels.collectionTransientZonePrevFrameVisibility.array;
      v9 = (unsigned int *)((char *)p_transientVisibility->array + v7);
      v34 = v9;
      v10 = 32 * v3;
      v36 = 32 * v3;
      v11 = *v9 ^ *(unsigned int *)((char *)array + v7);
      if ( !v11 )
        goto LABEL_50;
      do
      {
        v12 = __lzcnt(v11);
        if ( v12 >= 0x20 )
        {
          LODWORD(v29) = 32;
          LODWORD(v28) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v28, v29) )
            __debugbreak();
        }
        v13 = 0x80000000 >> v12;
        v14 = v10 + v12;
        v11 &= ~v13;
        if ( (unsigned int)v14 >= 0x600 )
        {
          LODWORD(v29) = 1536;
          LODWORD(v28) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2263, ASSERT_TYPE_ASSERT, "(unsigned)( transientZoneIndex ) < (unsigned)( ( sizeof( *array_counter( g_worldDraw->transientZones ) ) + 0 ) )", "transientZoneIndex doesn't index ARRAY_COUNT( g_worldDraw->transientZones )\n\t%i not in [0, %i)", v28, v29) )
            __debugbreak();
        }
        if ( (unsigned int)v14 >= world->smodels.collectionTransientZonePrevFrameVisibility.bitCount )
        {
          LODWORD(v29) = world->smodels.collectionTransientZonePrevFrameVisibility.bitCount;
          LODWORD(v28) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v28, v29) )
            __debugbreak();
        }
        v15 = (unsigned int)v14;
        v16 = 0x80000000 >> (v14 & 0x1F);
        v17 = (unsigned __int64)(unsigned int)v14 >> 5;
        if ( (v16 & world->smodels.collectionTransientZonePrevFrameVisibility.array[v17]) != 0 )
        {
          v18 = s_collectionVisibilityCache.collectionCount[v14];
          v19 = s_collectionVisibilityCache.collections[v14];
          if ( !v18 )
            goto LABEL_48;
          v20 = v18;
          do
          {
            v21 = *v19;
            if ( !collectionVisRefCount[v21] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2273, ASSERT_TYPE_ASSERT, "(collectionRefCounts[sortedCollectionIndex] > 0)", (const char *)&queryFormat, "collectionRefCounts[sortedCollectionIndex] > 0") )
              __debugbreak();
            if ( (unsigned __int16)v21 >= rgp.world->smodels.collectionCount )
            {
              LODWORD(v29) = rgp.world->smodels.collectionCount;
              LODWORD(v28) = (unsigned __int16)v21;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2274, ASSERT_TYPE_ASSERT, "(unsigned)( sortedCollectionIndex ) < (unsigned)( rgp.world->smodels.collectionCount )", "sortedCollectionIndex doesn't index rgp.world->smodels.collectionCount\n\t%i not in [0, %i)", v28, v29) )
                __debugbreak();
            }
            if ( collectionVisRefCount[v21]-- == 1 )
              collectionVisData[v21 >> 5] &= ~(0x80000000 >> (v21 & 0x1F));
            ++v19;
            --v20;
          }
          while ( v20 );
        }
        else
        {
          if ( (unsigned int)v14 >= 0x600 )
          {
            LODWORD(v29) = 1536;
            LODWORD(v28) = v14;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v28, v29) )
              __debugbreak();
          }
          if ( (v16 & v33->array[v17]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2285, ASSERT_TYPE_ASSERT, "(backEndData->transientVisibility.testBit( transientZoneIndex ))", (const char *)&queryFormat, "backEndData->transientVisibility.testBit( transientZoneIndex )") )
            __debugbreak();
          v23 = g_worldDraw->transientZones[v14];
          if ( !v23 )
          {
            LODWORD(v29) = v14;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2289, ASSERT_TYPE_ASSERT, "(transientZone)", "%s\n\tTransient Zone Ptr for index %u is null", "transientZone", v29) )
              __debugbreak();
          }
          collectionCount = v23->collectionCount;
          collections = v23->collections;
          v26 = collectionCount;
          if ( collectionCount > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)collectionCount, "unsigned", v23->collectionCount) )
            __debugbreak();
          s_collectionVisibilityCache.collectionCount[v15] = collectionCount;
          s_collectionVisibilityCache.collections[v15] = collections;
          if ( collectionCount )
          {
            do
            {
              v27 = *collections;
              if ( collectionVisRefCount[v27] == 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2299, ASSERT_TYPE_ASSERT, "(collectionRefCounts[sortedCollectionIndex] < 255)", (const char *)&queryFormat, "collectionRefCounts[sortedCollectionIndex] < 255") )
                __debugbreak();
              if ( (unsigned __int16)v27 >= rgp.world->smodels.collectionCount )
              {
                LODWORD(v29) = rgp.world->smodels.collectionCount;
                LODWORD(v28) = (unsigned __int16)v27;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2300, ASSERT_TYPE_ASSERT, "(unsigned)( sortedCollectionIndex ) < (unsigned)( rgp.world->smodels.collectionCount )", "sortedCollectionIndex doesn't index rgp.world->smodels.collectionCount\n\t%i not in [0, %i)", v28, v29) )
                  __debugbreak();
              }
              ++collectionVisRefCount[v27];
              ++collections;
              collectionVisData[v27 >> 5] |= 0x80000000 >> (v27 & 0x1F);
              --v26;
            }
            while ( v26 );
          }
        }
        world = v31;
LABEL_48:
        v10 = v36;
      }
      while ( v11 );
      array = world->smodels.collectionTransientZonePrevFrameVisibility.array;
      v7 = v32;
      v3 = v35;
      v9 = v34;
LABEL_50:
      ++v3;
      *(unsigned int *)((char *)array + v7) = *v9;
      v7 += 4i64;
      p_transientVisibility = v33;
      v35 = v3;
      v32 = v7;
      if ( v3 >= wordCount )
      {
LABEL_51:
        Profile_EndInternal(NULL);
        return;
      }
    }
  }
}

/*
==============
R_ShutdownConstantBufferInfoState
==============
*/
void R_ShutdownConstantBufferInfoState(GfxConstantBufferAllocations *constantBufferAllocations)
{
  GfxConstantBufferInfo *constantBufferInfo; 

  constantBufferInfo = constantBufferAllocations->constantBufferInfo;
  if ( !constantBufferAllocations->constantBufferInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 995, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  if ( constantBufferInfo->type == GFX_CONSTANT_BUFFER_INFO_LINEAR )
    constantBufferAllocations->constantBufferInfo = NULL;
}

/*
==============
R_ShutdownRenderCommands
==============
*/
void R_ShutdownRenderCommands(void)
{
  unsigned int i; 
  GfxBackEndData *BackEndData; 

  for ( i = 0; i < 2; ++i )
  {
    BackEndData = R_GetBackEndData(i);
    R_ShutdownDebugEntry(&BackEndData->debugGlobals);
  }
}

/*
==============
R_SkinCacheReachedCorpseThreshold
==============
*/
__int64 R_SkinCacheReachedCorpseThreshold()
{
  return (unsigned int)rg.skinnedCacheReachedCorpseThreshold;
}

/*
==============
R_SyncRenderThread
==============
*/
void R_SyncRenderThread(void)
{
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "R_SyncRenderThread");
  if ( !Sys_IsRenderThread() )
  {
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 1336, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()", -2i64) )
      __debugbreak();
    if ( r_glob.allowAddDrawCall && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 1339, ASSERT_TYPE_ASSERT, "(!r_glob.allowAddDrawCall)", (const char *)&queryFormat, "!r_glob.allowAddDrawCall") )
      __debugbreak();
    if ( r_glob.remoteScreenUpdateNesting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 1348, ASSERT_TYPE_ASSERT, "(r_glob.remoteScreenUpdateNesting == 0)", (const char *)&queryFormat, "r_glob.remoteScreenUpdateNesting == 0") )
      __debugbreak();
    if ( r_glob.startedRenderThread )
    {
      if ( !g_dx.d3d12device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 1355, ASSERT_TYPE_ASSERT, "(g_dx.d3d12device)", (const char *)&queryFormat, "g_dx.d3d12device") )
        __debugbreak();
      if ( !r_glob.mainThreadHasOwnership )
      {
        if ( frontEndDataOut && frontEndDataOut->beginReady && !frontEndDataOut->finishReady && !frontEndDataOut->abortReady && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 1365, ASSERT_TYPE_ASSERT, "(!frontEndDataOut || !frontEndDataOut->beginReady || frontEndDataOut->finishReady || frontEndDataOut->abortReady)", (const char *)&queryFormat, "!frontEndDataOut || !frontEndDataOut->beginReady || frontEndDataOut->finishReady || frontEndDataOut->abortReady") )
          __debugbreak();
        Profile_Begin(189);
        Sys_FrontEndSleep();
        Profile_EndInternal(NULL);
        r_glob.mainThreadHasOwnership = 1;
      }
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
R_ToggleSmpFrame
==============
*/

void __fastcall R_ToggleSmpFrame(LocalClientNum_t localClientNum, double _XMM1_8, double _XMM2_8, double _XMM3_8)
{
  bool v6; 
  int v110; 
  unsigned int v111; 
  int skinnedCachePeak; 
  unsigned __int64 pFrameTimesUSec[32]; 

  if ( frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2774, ASSERT_TYPE_ASSERT, "(!frontEndDataOut)", (const char *)&queryFormat, "!frontEndDataOut") )
    __debugbreak();
  if ( Sys_IsMainThread() )
    R_ReleaseThreadOwnership();
  Sys_ProfBeginNamedEvent(0xFF404040, "wait renderer2");
  Sys_ProcessWorkerCmdsWithTimeout(Sys_IsRendererReady2, NULL);
  Sys_ProfEndNamedEvent();
  v6 = rg.viewInfoCount == 0;
  if ( !rg.viewInfoCount )
  {
    __asm { vmovaps xmmword ptr [rsp+150h+var_18+8], xmm6 }
    CG_Draw_CalculateFPS();
    CG_Draw_CopyLastFrameTimesUSec(pFrameTimesUSec, 0x20u);
    __asm
    {
      vmovsd  xmm0, cs:__real@43f0000000000000
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2sd xmm2, xmm2, rax
    }
    if ( (pFrameTimesUSec[1] & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddsd  xmm2, xmm2, xmm0 }
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2sd xmm1, xmm1, rax
    }
    if ( (pFrameTimesUSec[0] & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddsd  xmm1, xmm1, xmm0 }
    __asm
    {
      vxorps  xmm3, xmm3, xmm3
      vaddsd  xmm4, xmm2, xmm1
      vcvtsi2sd xmm3, xmm3, rax
    }
    if ( (pFrameTimesUSec[2] & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddsd  xmm3, xmm3, xmm0 }
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vaddsd  xmm2, xmm4, xmm3
      vcvtsi2sd xmm1, xmm1, rax
    }
    if ( (pFrameTimesUSec[3] & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddsd  xmm1, xmm1, xmm0 }
    __asm
    {
      vaddsd  xmm3, xmm2, xmm1
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2sd xmm2, xmm2, rax
    }
    if ( (pFrameTimesUSec[4] & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddsd  xmm2, xmm2, xmm0 }
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vaddsd  xmm4, xmm3, xmm2
      vcvtsi2sd xmm1, xmm1, rax
    }
    if ( (pFrameTimesUSec[5] & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddsd  xmm1, xmm1, xmm0 }
    __asm
    {
      vxorps  xmm2, xmm2, xmm2
      vaddsd  xmm3, xmm4, xmm1
      vcvtsi2sd xmm2, xmm2, rax
    }
    if ( (pFrameTimesUSec[6] & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddsd  xmm2, xmm2, xmm0 }
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vaddsd  xmm4, xmm3, xmm2
      vcvtsi2sd xmm1, xmm1, rax
    }
    if ( (pFrameTimesUSec[7] & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddsd  xmm1, xmm1, xmm0 }
    __asm
    {
      vxorps  xmm2, xmm2, xmm2
      vaddsd  xmm3, xmm4, xmm1
      vcvtsi2sd xmm2, xmm2, rax
    }
    if ( (pFrameTimesUSec[8] & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddsd  xmm2, xmm2, xmm0 }
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vaddsd  xmm4, xmm3, xmm2
      vcvtsi2sd xmm1, xmm1, rax
    }
    if ( (pFrameTimesUSec[9] & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddsd  xmm1, xmm1, xmm0 }
    __asm
    {
      vxorps  xmm2, xmm2, xmm2
      vaddsd  xmm3, xmm4, xmm1
      vcvtsi2sd xmm2, xmm2, rax
    }
    if ( (pFrameTimesUSec[10] & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddsd  xmm2, xmm2, xmm0 }
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vaddsd  xmm4, xmm3, xmm2
      vcvtsi2sd xmm1, xmm1, rax
    }
    if ( (pFrameTimesUSec[11] & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddsd  xmm1, xmm1, xmm0 }
    __asm
    {
      vxorps  xmm2, xmm2, xmm2
      vaddsd  xmm3, xmm4, xmm1
      vcvtsi2sd xmm2, xmm2, rax
    }
    if ( (pFrameTimesUSec[12] & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddsd  xmm2, xmm2, xmm0 }
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vaddsd  xmm4, xmm3, xmm2
      vcvtsi2sd xmm1, xmm1, rax
    }
    if ( (pFrameTimesUSec[13] & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddsd  xmm1, xmm1, xmm0 }
    __asm
    {
      vxorps  xmm2, xmm2, xmm2
      vaddsd  xmm3, xmm4, xmm1
      vcvtsi2sd xmm2, xmm2, rax
    }
    if ( (pFrameTimesUSec[14] & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddsd  xmm2, xmm2, xmm0 }
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vaddsd  xmm4, xmm3, xmm2
      vcvtsi2sd xmm1, xmm1, rax
    }
    if ( (pFrameTimesUSec[15] & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddsd  xmm1, xmm1, xmm0 }
    __asm
    {
      vxorps  xmm2, xmm2, xmm2
      vaddsd  xmm3, xmm4, xmm1
      vcvtsi2sd xmm2, xmm2, rax
    }
    if ( (pFrameTimesUSec[16] & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddsd  xmm2, xmm2, xmm0 }
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vaddsd  xmm4, xmm3, xmm2
      vcvtsi2sd xmm1, xmm1, rax
    }
    if ( (pFrameTimesUSec[17] & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddsd  xmm1, xmm1, xmm0 }
    __asm
    {
      vxorps  xmm2, xmm2, xmm2
      vaddsd  xmm3, xmm4, xmm1
      vcvtsi2sd xmm2, xmm2, rax
    }
    if ( (pFrameTimesUSec[18] & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddsd  xmm2, xmm2, xmm0 }
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vaddsd  xmm4, xmm3, xmm2
      vcvtsi2sd xmm1, xmm1, rax
    }
    if ( (pFrameTimesUSec[19] & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddsd  xmm1, xmm1, xmm0 }
    __asm
    {
      vxorps  xmm2, xmm2, xmm2
      vaddsd  xmm3, xmm4, xmm1
      vcvtsi2sd xmm2, xmm2, rax
    }
    if ( (pFrameTimesUSec[20] & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddsd  xmm2, xmm2, xmm0 }
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vaddsd  xmm4, xmm3, xmm2
      vcvtsi2sd xmm1, xmm1, rax
    }
    if ( (pFrameTimesUSec[21] & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddsd  xmm1, xmm1, xmm0 }
    __asm
    {
      vxorps  xmm2, xmm2, xmm2
      vaddsd  xmm3, xmm4, xmm1
      vcvtsi2sd xmm2, xmm2, rax
    }
    if ( (pFrameTimesUSec[22] & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddsd  xmm2, xmm2, xmm0 }
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vaddsd  xmm4, xmm3, xmm2
      vcvtsi2sd xmm1, xmm1, rax
    }
    if ( (pFrameTimesUSec[23] & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddsd  xmm1, xmm1, xmm0 }
    __asm
    {
      vxorps  xmm2, xmm2, xmm2
      vaddsd  xmm3, xmm4, xmm1
      vcvtsi2sd xmm2, xmm2, rax
    }
    if ( (pFrameTimesUSec[24] & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddsd  xmm2, xmm2, xmm0 }
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vaddsd  xmm4, xmm3, xmm2
      vcvtsi2sd xmm1, xmm1, rax
    }
    if ( (pFrameTimesUSec[25] & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddsd  xmm1, xmm1, xmm0 }
    __asm
    {
      vxorps  xmm2, xmm2, xmm2
      vaddsd  xmm3, xmm4, xmm1
      vcvtsi2sd xmm2, xmm2, rax
    }
    if ( (pFrameTimesUSec[26] & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddsd  xmm2, xmm2, xmm0 }
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vaddsd  xmm4, xmm3, xmm2
      vcvtsi2sd xmm1, xmm1, rax
    }
    if ( (pFrameTimesUSec[27] & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddsd  xmm1, xmm1, xmm0 }
    __asm
    {
      vxorps  xmm2, xmm2, xmm2
      vaddsd  xmm3, xmm4, xmm1
      vcvtsi2sd xmm2, xmm2, rax
    }
    if ( (pFrameTimesUSec[28] & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddsd  xmm2, xmm2, xmm0 }
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vaddsd  xmm4, xmm3, xmm2
      vcvtsi2sd xmm1, xmm1, rax
    }
    if ( (pFrameTimesUSec[29] & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddsd  xmm1, xmm1, xmm0 }
    __asm
    {
      vxorps  xmm2, xmm2, xmm2
      vaddsd  xmm3, xmm4, xmm1
      vcvtsi2sd xmm2, xmm2, rax
    }
    if ( (pFrameTimesUSec[30] & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddsd  xmm2, xmm2, xmm0 }
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vaddsd  xmm4, xmm3, xmm2
      vcvtsi2sd xmm1, xmm1, rax
    }
    if ( (pFrameTimesUSec[31] & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddsd  xmm1, xmm1, xmm0 }
    __asm
    {
      vaddsd  xmm0, xmm4, xmm1
      vmulsd  xmm1, xmm0, cs:__real@3e60c6f7a0b5ed8d
      vcvtsd2ss xmm6, xmm1, xmm1
    }
    _RAX = R_GetBackEndData(s_smpFrame);
    __asm
    {
      vmovss  dword ptr [rax+7ACCh], xmm6
      vmovaps xmm6, xmmword ptr [rsp+150h+var_18+8]
    }
  }
  v110 = ((_BYTE)s_smpFrame - 1) & 1;
  s_smpFrame = v110;
  frontEndDataOut = R_GetBackEndData(v110);
  v111 = Sys_Milliseconds();
  R_ResetGPUHangDetection(v111);
  if ( v6 && !R_Screenshot_InProcess() )
  {
    ++gfxBuf.skinnedCacheFrameCount;
    gfxBuf.skinnedCacheVbPoolFrame = (gfxBuf.skinnedCacheVbPoolFrame + 1) % 3;
  }
  R_ToggleSmpFrameInternal(localClientNum);
  if ( v6 )
  {
    if ( rg.stats )
    {
      skinnedCachePeak = 16 * frontEndDataOut->skinnedCacheVb->used;
      rg.stats->skinnedCache = skinnedCachePeak;
      if ( rg.stats->skinnedCachePeak > skinnedCachePeak )
        skinnedCachePeak = rg.stats->skinnedCachePeak;
      rg.stats->skinnedCachePeak = skinnedCachePeak;
    }
    frontEndDataOut->skinnedCacheVb->used = 0;
    frontEndDataOut->subdivCacheVb->used = 0;
  }
}

/*
==============
R_ToggleSmpFrameInternal
==============
*/
void R_ToggleSmpFrameInternal(LocalClientNum_t localClientNum)
{
  __int64 v2; 
  bool v3; 
  __int64 v4; 
  __int64 v5; 
  GfxBackEndData *v6; 
  __int64 v10; 
  __int64 v11; 
  unsigned int v12; 
  __int64 v13; 
  unsigned int v14; 
  __int64 v15; 
  bool enabled; 
  bool v17; 
  volatile int surfPos; 
  GfxMultiLightGridFXLightingBuffers *v19; 
  GfxMultiLightGridFXLightingBuffers *v20; 
  GfxBackEndData *v21; 
  __int64 relightingIndexToCopy; 
  const dvar_t *v23; 
  int integer; 
  const dvar_t *v25; 
  signed int v26; 
  signed int v27; 
  unsigned int v30; 
  unsigned __int64 v31; 
  __int64 v32; 
  XZoneHandleUnique ZoneUniqueHandleFromWorldTransientIndex; 
  unsigned __int16 FrontendFramePass; 
  __int64 v49; 
  R_RT_Handle result; 
  char v51[192]; 

  gfxBuf.mayhemChannelsBufferPoolFrame = (gfxBuf.mayhemChannelsBufferPoolFrame + 1) % 2;
  gfxBuf.tessFactorsBufferPoolFrame = (gfxBuf.tessFactorsBufferPoolFrame + 1) % 2;
  v2 = (gfxBuf.skinnedCacheVbPoolFrame + 2) % 3;
  frontEndDataOut->skinnedCacheVbPrevFrame = &gfxBuf.skinnedCacheVbPool[v2];
  frontEndDataOut->subdivCacheVbPrevFrame = &gfxBuf.subdivCacheVbPool[v2];
  frontEndDataOut->skinnedCacheVb = &gfxBuf.skinnedCacheVbPool[gfxBuf.skinnedCacheVbPoolFrame];
  frontEndDataOut->subdivCacheVb = &gfxBuf.subdivCacheVbPool[gfxBuf.skinnedCacheVbPoolFrame];
  gfxBuf.skinnedCacheLockAddr = (unsigned __int8 *)frontEndDataOut->skinnedCacheVb->wrappedBuffer.data;
  v3 = r_useComputeSkinning->current.enabled || r_subdiv->current.enabled && frontEndDataOut->compute.asyncEnabled;
  frontEndDataOut->compute.skinningEnabled = v3;
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2213, ASSERT_TYPE_ASSERT, "(R_UseComputeSkinning( frontEndDataOut ))", (const char *)&queryFormat, "R_UseComputeSkinning( frontEndDataOut )") )
    __debugbreak();
  RB_UpdateCmdBufHandoffStats(frontEndDataOut->frameCount & 1);
  frontEndDataOut->prof_index = Profile2_Update();
  frontEndDataOut->viewInfoCount = rg.viewInfoCount;
  frontEndDataOut->viewInfoIndex = 0;
  frontEndDataOut->pipInfoCount = rg.pipInfoCount;
  v4 = g_frameIndex;
  v5 = g_frameIndex;
  frontEndDataOut->frameIndex = g_frameIndex;
  frontEndDataOut->viewInfo = &g_viewInfo + 6 * v4;
  frontEndDataOut->commands = &g_frontEndCmds[v5];
  frontEndDataOut->frameCount = rg.frontEndFrameCount;
  frontEndDataOut->smpFrame = s_smpFrame;
  frontEndDataOut->frustumLightsIndex = R_ToggleFrustumLightsFrame();
  frontEndDataOut->volumetricsIndex = R_VOL_ToggleFrame();
  frontEndDataOut->decalVolumeIndex = R_ToggleFrustumGridFrame();
  RB_BackendDataCopier::ToggleFrame(&rbBackendDataCopier);
  frontEndDataOut->lightmapAtlasIndex = R_ToggleLightmapAtlasFrame();
  frontEndDataOut->lightGridVolumesAtlasIndex = R_ToggleLightGridVolumesAtlasFrame();
  frontEndDataOut->tonemapExposureInfoIndex = R_TonemapToggleFrame(localClientNum);
  frontEndDataOut->mdaoFrame = R_MDAO_ToggleFrame();
  R_EyeSensor_ToggleFrame();
  frontEndDataOut->shLightingIndex = R_ToggleSHLightingFrame(s_smpFrame);
  frontEndDataOut->reflectionProbeFrameIndex = R_ReflectionProbe_ToggleFrame();
  R_TG_BeginSmpFrame(frontEndDataOut->smpFrame);
  R_MayhemSelfVis_ToggleSmpFrame(frontEndDataOut->smpFrame);
  R_Umbra_ToggleUmbraFrame(frontEndDataOut->smpFrame);
  R_GPUSorter_ToggleFrame(frontEndDataOut->smpFrame);
  R_EndFrameConstantBufferInfo(&frontEndDataOut->constantBufferInfo, 0i64);
  v6 = frontEndDataOut;
  frontEndDataOut->async2D.renderSuspended = 0;
  v6->async2D.renderPending = 0;
  v6->async2D.renderReceivePPFXPending = 0;
  v6->async2D.renderFailed = 0;
  v6->async2D.vertices.used = 0;
  v6->async2D.indices.used = 0;
  R_EndFrameConstantBufferInfo(&v6->async2D.constBufferInfo, 0i64);
  R_EndFrameDescriptorHeapInfo(&v6->async2D.descHeapInfo, 0i64);
  _RAX = R_RT_GetGlobal(&result, R_RENDERTARGET_DISPLAY_BUFFER_FRONTEND);
  __asm { vmovups ymm0, ymmword ptr [rax] }
  _RAX = frontEndDataOut;
  __asm { vmovups ymmword ptr [rax+0E2500h], ymm0 }
  frontEndDataOut->cmdAllocNeedsReset[0] = 1;
  frontEndDataOut->cmdAllocNeedsReset[1] = 1;
  frontEndDataOut->cmdAllocNeedsReset[2] = 1;
  frontEndDataOut->cmdAllocNeedsReset[3] = 1;
  frontEndDataOut->cmdAllocNeedsReset[4] = 1;
  frontEndDataOut->cmdAllocNeedsReset[5] = 1;
  R_EndFrameDescriptorHeapInfo(&frontEndDataOut->drawDescHeapInfo, 0i64);
  v10 = 0i64;
  v11 = 2i64;
  do
  {
    R_EndFrameDescriptorHeapInfo(&frontEndDataOut->computeDescHeapInfo[v10++], 0i64);
    --v11;
  }
  while ( v11 );
  rg.surfPosHistory[rg.surfPosHistoryIndex] = frontEndDataOut->surfPos;
  rg.surfPosHistoryIndex = (rg.surfPosHistoryIndex + 1) % 64;
  frontEndDataOut->mayhemChannelsBuffer = &gfxBuf.mayhemChannelsBufferPool[(__int64)gfxBuf.mayhemChannelsBufferPoolFrame];
  frontEndDataOut->mayhemChannelsVb = &gfxBuf.mayhemChannelsVbPool[gfxBuf.mayhemChannelsBufferPoolFrame];
  frontEndDataOut->tessFactorsBuffer = &gfxBuf.tessFactorsBufferPool[(__int64)gfxBuf.tessFactorsBufferPoolFrame];
  frontEndDataOut->bspIndirectArgsBuffer = &gfxBuf.bspIndirectArgs[s_smpFrame & 1];
  frontEndDataOut->bspIndirectArgs = NULL;
  if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_GENERATE_REACTIVEMOTION) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2446, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_GENERATE_REACTIVEMOTION ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_GENERATE_REACTIVEMOTION )") )
    __debugbreak();
  v12 = R_ToggleReactiveMotionFrame();
  v13 = s_smpFrame & 1;
  v14 = s_smpFrame & 1;
  frontEndDataOut->reactiveMotionIndex = v12;
  v15 = v13;
  v13 *= 96i64;
  frontEndDataOut->globalLightConstantBuffer = &deviceGlobals.globalLightStructuredBuffer[v15];
  frontEndDataOut->globalShadowConstantBuffer = &deviceGlobals.globalShadowStructuredBuffer[v15];
  frontEndDataOut->globalSceneConstantBuffer = &deviceGlobals.globalSceneConstantBuffer[v15];
  frontEndDataOut->globalPersistentBufferTable = (GfxDescriptorTable *)((char *)deviceGlobals.globalPersistentBufferTables[0] + v13);
  frontEndDataOut->globalPersistentTextureTable = (GfxDescriptorTable *)((char *)deviceGlobals.globalPersistentTextureTables[0] + v13);
  frontEndDataOut->entityDataBuffer = &deviceGlobals.entityDataBuffer[v15];
  frontEndDataOut->dynamicLightListBufferIndex = v14;
  enabled = r_asyncCompute->current.enabled;
  frontEndDataOut->compute.asyncEnabled = enabled;
  v17 = enabled && r_smpCompute->current.enabled && !r_deviceDebug->current.enabled;
  frontEndDataOut->compute.smpEnabled = v17;
  if ( CL_IsRenderingSplitScreen() )
    frontEndDataOut->compute.smpEnabled &= r_smpComputeInSplitScreen->current.color[0];
  frontEndDataOut->mayhemChannelsBuffer->used = 0;
  frontEndDataOut->mayhemChannelsVb->used = 0;
  frontEndDataOut->tessFactorsBuffer->used = 0;
  s_cmdList = frontEndDataOut->commands;
  Sys_ProfBeginNamedEvent(0xFFFF7F50, "dev clear buffers");
  if ( frontEndDataOut->drawSurfCount > 0x4000u )
  {
    LODWORD(v49) = frontEndDataOut->drawSurfCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2507, ASSERT_TYPE_ASSERT, "( 0 ) <= ( frontEndDataOut->drawSurfCount ) && ( frontEndDataOut->drawSurfCount ) <= ( static_cast<int>(( sizeof( *array_counter( frontEndDataOut->drawSurfs ) ) + 0 )) )", "frontEndDataOut->drawSurfCount not in [0, static_cast<int>(ARRAY_COUNT( frontEndDataOut->drawSurfs ))]\n\t%i not in [%i, %i]", v49, 0i64, 0x4000) )
      __debugbreak();
  }
  if ( frontEndDataOut->surfPos < 0 )
  {
    LODWORD(v49) = frontEndDataOut->surfPos;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2508, ASSERT_TYPE_ASSERT, "( ( frontEndDataOut->surfPos >= 0 ) )", "( frontEndDataOut->surfPos ) = %i", v49) )
      __debugbreak();
  }
  surfPos = 0x40000;
  if ( frontEndDataOut->surfPos < 0x40000 )
    surfPos = frontEndDataOut->surfPos;
  frontEndDataOut->surfPos = surfPos;
  memset_0(frontEndDataOut->drawSurfs, 176, 16i64 * frontEndDataOut->drawSurfCount);
  memset_0(frontEndDataOut->surfsBuffer, 176, frontEndDataOut->surfPos);
  memset_0(frontEndDataOut->codeEmissiveSurfs, 176, sizeof(frontEndDataOut->codeEmissiveSurfs));
  memset_0(frontEndDataOut->codeTransShadowSurfs, 176, sizeof(frontEndDataOut->codeTransShadowSurfs));
  Sys_ProfEndNamedEvent();
  frontEndDataOut->bspSurfDataUsed = 0;
  frontEndDataOut->smodelSurfDataUsed = 0;
  frontEndDataOut->smodelSurfVisDataUsed = 0;
  frontEndDataOut->drawSurfCount = 0;
  frontEndDataOut->surfPos = 0;
  frontEndDataOut->gfxEntCount = 1;
  frontEndDataOut->codeSurfCount[0] = 0;
  frontEndDataOut->codeSurfArgsCount[0] = 0;
  if ( s_world.draw.lightGridType == GFX_LIGHTGRID_TYPE_MULTI )
    v19 = &s_multiLightGridFXLightingWorldBuffers[0][frontEndDataOut->frameIndex % 2];
  else
    v19 = NULL;
  R_ResetMesh(frontEndDataOut->mesh, v19);
  frontEndDataOut->codeSurfEmissiveDepthHackCount = 0;
  frontEndDataOut->codeSurfEmissivePostBlurCount = 0;
  frontEndDataOut->codeSurfEmissivePostBlurDepthHackCount = 0;
  frontEndDataOut->codeSurfCount[1] = 0;
  frontEndDataOut->codeSurfArgsCount[1] = 0;
  if ( s_world.draw.lightGridType == GFX_LIGHTGRID_TYPE_MULTI )
    v20 = &s_multiLightGridFXLightingWorldBuffers[1][frontEndDataOut->frameIndex % 2];
  else
    v20 = NULL;
  R_ResetMesh(&frontEndDataOut->mesh[1], v20);
  frontEndDataOut->glassSurfCount = 0;
  R_ResetMesh(&frontEndDataOut->mesh[2], NULL);
  frontEndDataOut->flareSurfCount = 0;
  R_ResetMesh(&frontEndDataOut->mesh[3], NULL);
  frontEndDataOut->hudLightingRequested = 0;
  frontEndDataOut->viewParmCount = 0;
  frontEndDataOut->cmds = NULL;
  if ( frontEndDataOut->compute.cmdListData.cmds )
  {
    R_ClearComputeCmdList(&frontEndDataOut->compute.cmdListData);
    frontEndDataOut->compute.cmdList = &frontEndDataOut->compute.cmdListData;
  }
  else
  {
    frontEndDataOut->compute.cmdList = NULL;
  }
  v21 = frontEndDataOut;
  frontEndDataOut->debugGlobals.lineCount = 0;
  v21->debugGlobals.stringCount = 0;
  v21->debugGlobals.vertCount = 0;
  v21->debugGlobals.polyCount = 0;
  if ( v21->debugGlobals.enableDebugString && !v21->debugGlobals.strings )
    R_DebugAlloc((void **)&v21->debugGlobals.strings, 112 * v21->debugGlobals.stringLimit, "R_ToggleSmpFrameInternal");
  if ( v21->debugGlobals.enableDebugLines && !v21->debugGlobals.lines )
    R_DebugAlloc((void **)&v21->debugGlobals.lines, 32 * v21->debugGlobals.lineLimit, "R_ToggleSmpFrameInternal");
  if ( v21->debugGlobals.enableDebugPolys && !v21->debugGlobals.polys )
  {
    if ( v21->debugGlobals.verts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2598, ASSERT_TYPE_ASSERT, "(debugGlobalsEntry->verts == 0)", (const char *)&queryFormat, "debugGlobalsEntry->verts == NULL") )
      __debugbreak();
    R_DebugAlloc((void **)&v21->debugGlobals.polys, 28 * v21->debugGlobals.polyLimit, "(debugGlobalsEntry->polys)");
    R_DebugAlloc((void **)&v21->debugGlobals.verts, 12 * v21->debugGlobals.vertLimit, "(debugGlobalsEntry->verts)");
  }
  memset_0(frontEndDataOut->cmdBufValid, 0, sizeof(frontEndDataOut->cmdBufValid));
  frontEndDataOut->isPIPClientView = 0;
  frontEndDataOut->beginReady = 0;
  frontEndDataOut->computeReady = 0;
  frontEndDataOut->shadowReady = 0;
  frontEndDataOut->opaqueReady = 0;
  frontEndDataOut->emissiveReady = 0;
  frontEndDataOut->hud2DReady = 0;
  frontEndDataOut->finishReady = 0;
  frontEndDataOut->abortReady = 0;
  frontEndDataOut->dynamicOmniLightCount = 0;
  frontEndDataOut->dynamicSpotLightCount = 0;
  frontEndDataOut->dynamicLightCount = 0;
  frontEndDataOut->reflectionProbeRelightingData.reflectionProbeRelightingIndex = -1;
  if ( g_worldDraw )
  {
    relightingIndexToCopy = frontEndDataOut->reflectionProbeRelightingData.relightingIndexToCopy;
    if ( (_DWORD)relightingIndexToCopy != -1 )
      R_ReflectionProbe_InvalidateCachedImage(g_worldDraw->reflectionProbeData.probeRelightingData[relightingIndexToCopy].reflectionProbeIndex);
  }
  frontEndDataOut->reflectionProbeRelightingData.relightingIndexToCopy = -1;
  frontEndDataOut->spotShadowCount = 0;
  frontEndDataOut->spotShadowUpdateCount = 0;
  v23 = DVARINT_sm_spotUpdateLimit;
  if ( DVARINT_sm_spotUpdateLimit )
  {
    integer = sm_spotUpdateLimitMax->current.integer;
    Dvar_CheckFrontendServerThread(DVARINT_sm_spotUpdateLimit);
    if ( v23->current.integer < integer )
      integer = v23->current.integer;
  }
  else
  {
    integer = 0;
  }
  frontEndDataOut->spotShadowUpdateLimit = integer;
  v25 = DVARINT_sm_spotUpdateLimitDynLight;
  if ( DVARINT_sm_spotUpdateLimitDynLight )
  {
    Dvar_CheckFrontendServerThread(DVARINT_sm_spotUpdateLimitDynLight);
    v26 = v25->current.integer;
  }
  else
  {
    v26 = 0;
  }
  v27 = 0;
  if ( (signed int)(frontEndDataOut->spotShadowUpdateLimit - 2) > 0 )
    v27 = frontEndDataOut->spotShadowUpdateLimit - 2;
  if ( v27 < v26 )
    v26 = v27;
  frontEndDataOut->spotShadowDynLightUpdateLimit = v26;
  if ( g_worldDraw )
  {
    _RAX = CL_TransientsWorld_GetVisibilityBitArray(localClientNum);
    _RCX = v51;
    v30 = 0;
    v31 = 0i64;
    v32 = 320i64;
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
      vmovups ymmword ptr [rcx+80h], ymm1
      vmovups ymm1, ymmword ptr [rax+0A0h]
      vmovups ymmword ptr [rcx+0A0h], ymm1
    }
    _RCX = frontEndDataOut;
    _RAX = v51;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rcx+169CFCh], ymm0
      vmovups ymm0, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rcx+169D1Ch], ymm0
      vmovups ymm0, ymmword ptr [rax+40h]
      vmovups ymmword ptr [rcx+169D3Ch], ymm0
      vmovups ymm0, ymmword ptr [rax+60h]
      vmovups ymmword ptr [rcx+169D5Ch], ymm0
      vmovups ymm0, ymmword ptr [rax+80h]
      vmovups ymmword ptr [rcx+169D7Ch], ymm0
      vmovups ymm0, ymmword ptr [rax+0A0h]
      vmovups ymmword ptr [rcx+169D9Ch], ymm0
    }
    do
    {
      if ( !*(_QWORD *)((char *)&g_worldDraw->reflectionProbeData.reflectionProbeCount + v32) )
        frontEndDataOut->transientVisibility.array[v31 >> 5] &= ~(0x80000000 >> (v30 & 0x1F));
      if ( *(_QWORD *)((char *)&g_worldDraw->reflectionProbeData.reflectionProbeCount + v32) )
      {
        ZoneUniqueHandleFromWorldTransientIndex = DB_Zones_GetZoneUniqueHandleFromWorldTransientIndex(v30);
        if ( !DB_BackendCallbacks_AllZoneCallbackProcessed(ZoneUniqueHandleFromWorldTransientIndex) )
          frontEndDataOut->transientVisibility.array[v31 >> 5] &= ~(0x80000000 >> (v30 & 0x1F));
      }
      ++v30;
      ++v31;
      v32 += 8i64;
    }
    while ( v30 < 0x600 );
    R_GenerateWorldTransientCache(g_worldDraw, &frontEndDataOut->transientDrawContext, &frontEndDataOut->transientDrawCache);
    R_SetupCollectionVisibility(frontEndDataOut);
  }
  R_UpdateIsPrimaryLightLoaded(frontEndDataOut);
  if ( Sys_IsMainThread() )
    FrontendFramePass = R_RT_GetFrontendFramePass();
  else
    FrontendFramePass = 0;
  frontEndDataOut->frontendFramePass = FrontendFramePass;
  frontEndDataOut->motionblurSurfPos = 0;
  R_LightSensor_ToggleFrame();
  frontEndDataOut->superTerrainFrameDataIndex = R_ST_ToggleSmpFrame();
}

/*
==============
R_TriggerSunShadowCacheFlush
==============
*/
void R_TriggerSunShadowCacheFlush(void)
{
  if ( r_usePrebuiltSunShadow->current.integer == 1 )
    Dvar_SetInt_Internal(r_usePrebuiltSunShadow, 3);
}

/*
==============
R_TrySortMaterials
==============
*/
void R_TrySortMaterials(void)
{
  R_TrySortMaterialsInternal(1);
}

/*
==============
R_TrySortMaterialsInternal
==============
*/
void R_TrySortMaterialsInternal(const bool allowRenderSync)
{
  const dvar_t *v2; 
  bool enabled; 
  int transientMaterialSort; 
  bool v5; 
  const char *baseName; 
  const char *v7; 
  int LogChannel; 
  char *fmt; 
  __int64 v10; 

  if ( !Sys_IsRenderThread() && !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 5461, ASSERT_TYPE_ASSERT, "(Sys_IsRenderThread() || Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsRenderThread() || Sys_IsMainThread()") )
    __debugbreak();
  if ( rgp.world )
  {
    if ( Com_GameStart_AllowMaterialSort() )
    {
      if ( Sys_IsDatabaseReady() && DB_AreFastfileLoadsCompleted() )
      {
        v2 = DVARBOOL_r_sortMaterials;
        if ( !DVARBOOL_r_sortMaterials && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sortMaterials") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v2);
        enabled = v2->current.enabled;
        transientMaterialSort = rgp.transientMaterialSort;
        rgp.transientMaterialSort = 0;
        v5 = rgp.addedMaterialCount || rgp.killedMaterialCount || rgp.patchedMaterialCount || !rgp.gameWorldSorted || enabled;
        if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 5489, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
          __debugbreak();
        if ( Sys_IsMainThread() )
        {
          if ( v5 )
          {
            if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_r_sortMaterials, "r_sortMaterials") )
              Dvar_SetBool_Internal(DVARBOOL_r_sortMaterials, 0);
            rgp.needSortMaterials = 0;
            Sys_ProfBeginNamedEvent(0xFF708090, "R_PerformMaterialModelSurfSort full sorting");
            Com_Printf(8, "R_TrySortMaterials perform full material sorting\n");
            R_PerformMaterialModelSurfSort(allowRenderSync, 0);
            Sys_ProfEndNamedEvent();
            *(_QWORD *)&rgp.gameWorldSorted = 1i64;
            *(_QWORD *)&rgp.killedMaterialCount = 0i64;
          }
          else if ( rgp.gameWorldSorted && transientMaterialSort )
          {
            Sys_ProfBeginNamedEvent(0xFF708090, "R_PerformMaterialModelSurfSort for transient");
            LogChannel = DB_GetLogChannel();
            Com_Printf(LogChannel, "R_TrySortMaterials validate material sorting for transients\n");
            R_PerformMaterialModelSurfSort(allowRenderSync, 1);
            Sys_ProfEndNamedEvent();
          }
        }
        else if ( v5 || transientMaterialSort )
        {
          baseName = rgp.world->baseName;
          if ( ::baseName != baseName || rgp.addedMaterialCount != s_addedMaterialCount || rgp.killedMaterialCount != s_killedMaterialCount || rgp.patchedMaterialCount != s_patchedMaterialCount )
          {
            LODWORD(v10) = rgp.patchedMaterialCount;
            LODWORD(fmt) = rgp.killedMaterialCount;
            Com_Printf(8, "Skip R_TrySortMaterials for %s in render thread. New/Removed/Patched material count = %d/%d/%d\n", baseName, rgp.addedMaterialCount, fmt, v10);
            v7 = rgp.world->baseName;
            s_addedMaterialCount = rgp.addedMaterialCount;
            s_killedMaterialCount = rgp.killedMaterialCount;
            s_patchedMaterialCount = rgp.patchedMaterialCount;
            ::baseName = v7;
          }
        }
      }
      else
      {
        rg.shouldSortFailedForFastFileLoadsCompleted = 1;
      }
    }
    else
    {
      rg.shouldSortFailedForComGameStart = 1;
    }
  }
}

/*
==============
R_TrySortMaterialsNoSync
==============
*/
void R_TrySortMaterialsNoSync(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 5629, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !R_IsInRemoteScreenUpdate() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 5632, ASSERT_TYPE_ASSERT, "(R_IsInRemoteScreenUpdate() || !IsFastFileLoad())", (const char *)&queryFormat, "R_IsInRemoteScreenUpdate() || !IsFastFileLoad()") )
    __debugbreak();
  R_TrySortMaterialsInternal(0);
}

/*
==============
R_UpdateFrontEndDvarOptions
==============
*/
const dvar_t *R_UpdateFrontEndDvarOptions()
{
  const dvar_t *v11; 
  bool enabled; 
  char v13; 
  const dvar_t *v14; 
  unsigned int v15; 
  TestLodEnableFlags v16; 
  const dvar_t *v17; 
  unsigned int v18; 
  const dvar_t *v31; 
  const dvar_t *v32; 
  const dvar_t *v33; 
  const dvar_t *v34; 
  bool v35; 
  bool v36; 
  bool v37; 
  bool v38; 
  bool v39; 
  bool v40; 
  bool v41; 
  const dvar_t *v42; 
  bool v43; 
  const dvar_t *v44; 
  int Bool_Internal; 
  const dvar_t *v46; 
  const dvar_t *v47; 
  int v48; 
  const dvar_t *v49; 
  unsigned int unsignedInt; 
  int v51; 
  const dvar_t *v52; 
  int integer; 
  const dvar_t *v54; 
  int v55; 
  const dvar_t *v56; 
  int v57; 
  const dvar_t *v58; 
  int v59; 
  const dvar_t *v60; 
  int v61; 
  const dvar_t *v62; 
  int v63; 
  const dvar_t *v64; 
  int v65; 
  const dvar_t *v66; 
  int v67; 
  const dvar_t *v68; 
  int v69; 
  const dvar_t *v70; 
  int v71; 
  const dvar_t *v72; 
  const dvar_t *v73; 
  int v74; 
  char v75; 
  int v77; 
  int v79; 
  bool v80; 
  char v85; 
  unsigned int v86; 
  bool v87; 
  int v88; 
  const dvar_t *v89; 
  const dvar_t *v90; 
  const dvar_t *v91; 
  BOOL v92; 
  int v93; 
  const dvar_t *v94; 
  int v95; 
  int v100; 
  const dvar_t *v101; 
  int v102; 
  const dvar_t *v103; 
  int v104; 
  const dvar_t *v105; 
  int v106; 
  const dvar_t *v107; 
  int v108; 
  int v112; 
  int v113; 
  int v118; 
  int v119; 
  int v120; 
  int v121; 
  const dvar_t *v161; 
  unsigned int v179; 
  const dvar_t *v180; 
  bool v186; 
  bool v187; 
  const dvar_t *v190; 
  const dvar_t *v193; 
  int IsOctahedronEnabled; 
  const dvar_t *v195; 
  const dvar_t *v196; 
  const dvar_t *v197; 
  int v198; 
  const dvar_t *v203; 
  const dvar_t *v206; 
  const dvar_t *v207; 
  const dvar_t *v208; 
  char v209; 
  const dvar_t *v210; 
  bool v211; 
  const dvar_t *v212; 
  int v213; 
  const dvar_t *v214; 
  int v215; 
  const dvar_t *v216; 
  int v217; 
  const dvar_t *v218; 
  int v219; 
  const dvar_t *v220; 
  int v221; 
  const dvar_t *v222; 
  int v223; 
  const dvar_t *v224; 
  bool Bool_Internal_DebugName; 
  const dvar_t *v226; 
  const dvar_t *v231; 
  int v232; 
  int v237; 
  bool v239; 
  const dvar_t *result; 
  char v250; 
  char v251; 
  int v252; 
  unsigned int v254; 
  bool v256; 
  bool v257; 
  bool v258; 
  int v259; 
  int v260; 
  unsigned int v262; 
  unsigned int v263; 
  int v264; 
  int v265; 
  int v266; 
  int v267; 
  __int128 v268; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm6
    vmovaps xmmword ptr [r11-68h], xmm9
    vmovaps xmmword ptr [r11-78h], xmm10
  }
  v251 = 0;
  v11 = r_cmdbuf_worker;
  __asm
  {
    vmovaps xmmword ptr [r11-88h], xmm11
    vmovaps xmmword ptr [r11-98h], xmm12
    vmovaps xmmword ptr [r11-0A8h], xmm13
  }
  enabled = v11->current.enabled;
  LOBYTE(v11) = *((_BYTE *)&g_gfxCmdBufInput + 7920);
  v13 = *((_BYTE *)&g_gfxCmdBufInput + 7920) ^ enabled;
  __asm
  {
    vmovaps xmmword ptr [r11-0B8h], xmm14
    vmovaps xmmword ptr [r11-0C8h], xmm15
  }
  *((_BYTE *)&g_gfxCmdBufInput + 7920) = v13 & 1 ^ (unsigned __int8)v11;
  if ( r_sun_from_dvars->current.enabled && rgp.world )
    R_SetSunFromDvars(&rgp.world->sun);
  XModelSetTestLodToColLod(r_forceLodToColLod->current.enabled);
  v14 = r_forceLod;
  if ( r_forceLod->current.integer == r_forceLod->reset.integer )
  {
    v17 = r_clampLod;
    if ( r_clampLod->current.integer == r_clampLod->reset.integer )
    {
      _RAX = r_lod0Dist;
      __asm { vmovss  xmm2, dword ptr [rax+28h]; dist }
      XModelSetTestLodLevel(0, ENABLE, *(const float *)&_XMM2);
      _RAX = r_lod1Dist;
      __asm { vmovss  xmm2, dword ptr [rax+28h]; dist }
      XModelSetTestLodLevel(1u, ENABLE, *(const float *)&_XMM2);
      _RAX = r_lod2Dist;
      __asm { vmovss  xmm2, dword ptr [rax+28h]; dist }
      XModelSetTestLodLevel(2u, ENABLE, *(const float *)&_XMM2);
      _RAX = r_lod3Dist;
      __asm { vmovss  xmm2, dword ptr [rax+28h]; dist }
      XModelSetTestLodLevel(3u, ENABLE, *(const float *)&_XMM2);
      _RAX = r_lod4Dist;
      __asm { vmovss  xmm2, dword ptr [rax+28h]; dist }
      XModelSetTestLodLevel(4u, ENABLE, *(const float *)&_XMM2);
      _RAX = r_lod5Dist;
      __asm { vmovss  xmm2, dword ptr [rax+28h]; dist }
      XModelSetTestLodLevel(5u, ENABLE, *(const float *)&_XMM2);
    }
    else
    {
      v18 = 0;
      while ( 1 )
      {
        XModelSetTestLodLevel(v18, (const TestLodEnableFlags)((v18 < v17->current.integer) + 2));
        if ( ++v18 >= 6 )
          break;
        v17 = r_clampLod;
      }
    }
  }
  else
  {
    v15 = 0;
    while ( 1 )
    {
      v16 = FORCE_ENABLE;
      if ( v15 != v14->current.integer )
        v16 = FORCE_DISABLE;
      XModelSetTestLodLevel(v15++, v16);
      if ( v15 >= 6 )
        break;
      v14 = r_forceLod;
    }
  }
  if ( rg.showXModelRanking != r_showXModelRanking->current.integer || rg.showXModelRankingFilterMode != r_showXModelRankingFilterMode->current.integer || rg.showXModelRankingOffset != r_showXModelRankingOffset->current.integer || rg.showXModelRankingStopUpdate != r_showXModelRankingStopUpdate->current.enabled || rg.showXModelRemoteConsole != Dvar_GetBool_Internal_DebugName(DVARBOOL_r_showXModelRemoteConsole, "r_showXModelRemoteConsole") )
  {
    R_SyncRenderThread();
    v31 = DVARBOOL_r_showXModelRemoteConsole;
    rg.showXModelRanking = r_showXModelRanking->current.integer;
    rg.showXModelRankingFilterMode = r_showXModelRankingFilterMode->current.integer;
    rg.showXModelRankingOffset = r_showXModelRankingOffset->current.integer;
    rg.showXModelRankingStopUpdate = r_showXModelRankingStopUpdate->current.enabled;
    if ( !DVARBOOL_r_showXModelRemoteConsole && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_showXModelRemoteConsole") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v31);
    rg.showXModelRemoteConsole = v31->current.enabled;
  }
  v32 = DVARBOOL_r_showXModelRemoteConsole;
  rg.showXModelRemoteConsoleCount = 0;
  rg.showXModelRemoteConsoleHeader = 0;
  if ( !DVARBOOL_r_showXModelRemoteConsole && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_showXModelRemoteConsole") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v32);
  if ( v32->current.enabled )
    Dvar_SetBool_Internal(DVARBOOL_r_showXModelRemoteConsole, 0);
  if ( rgp.world && rgp.world->dpvs.sunShadowOptCount && R_CheckDvarModified(r_useShadowGeomOpt) )
    R_GenerateShadowMapCasterCells();
  if ( R_CheckDvarModified(r_profMaterial) )
    R_SyncRenderThread();
  v33 = r_profMaterial;
  if ( !r_profMaterial && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v33);
  rg.profMaterial = v33->current.unsignedInt;
  if ( R_CheckDvarModified(r_cinematic) )
    R_SyncRenderThread();
  v34 = r_cinematic;
  if ( !r_cinematic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v34);
  rg.cinematic = v34->current.enabled;
  v35 = R_CheckDvarModified(r_texFilterMipBias) || R_CheckDvarModified(r_smaaGradientAdjust);
  v36 = R_CheckDvarModified(r_texFilterTrilinearWindow);
  v37 = R_CheckDvarModified(r_texFilterAnisoWindow);
  v38 = R_CheckDvarModified(r_texFilterAnisoBias);
  if ( v35 || v36 || v37 || v38 || R_CheckDvarModified(r_texFilter) || R_CheckDvarModified(r_texFilterMipMode) )
  {
    R_SyncRenderThread();
    R_LockGfxImmediateContext();
    R_AcquireGpuFenceLock();
    R_FinishGpuFence();
    R_InsertGpuFence();
    R_FinishGpuFence();
    R_ReleaseGpuFenceLock();
    R_UnlockGfxImmediateContext();
    R_BuildSamplerStateTable();
    R_UpdateBindlessSamplerArray();
  }
  v39 = R_CheckDvarModified(r_st_sm_polygonOffsetBias);
  v256 = v39;
  v40 = R_CheckDvarModified(r_st_sm_polygonOffsetScale);
  v257 = v40;
  v41 = R_CheckDvarModified(r_st_sm_polygonOffsetClamp);
  v258 = v41;
  if ( R_CheckDvarModified(sm_polygonOffsetBias) || R_CheckDvarModified(sm_polygonOffsetScale) || R_CheckDvarModified(sm_polygonOffsetClamp) || v39 || v40 || v41 || R_CheckDvarModified(r_polygonOffsetBias) || R_CheckDvarModified(r_polygonOffsetScale) || R_CheckDvarModified(r_polygonOffsetClamp) )
  {
    R_SyncRenderThread();
    v251 = 1;
  }
  if ( R_CheckDvarModified(r_vrsEnabled) )
    R_SyncRenderThread();
  v42 = r_vrsEnabled;
  if ( !r_vrsEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v42);
  v43 = v42->current.enabled;
  v44 = r_vrsMaskEnabled;
  rg.variableRateShadingEnabled = v43;
  if ( !r_vrsMaskEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v44);
  rg.variableRateShadingVRSMaskEnabled = v44->current.enabled;
  if ( R_CheckDvarModified(r_fullbright) )
  {
    Bool_Internal = Dvar_GetBool_Internal(r_fullbright);
    Dvar_SetInt_Internal(r_debugShaderMaterial, Bool_Internal);
  }
  if ( R_CheckDvarModified(r_debugGPUPipeline) )
  {
    v46 = r_debugGPUPipeline;
    if ( !r_debugGPUPipeline && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v46);
    Dvar_SetInt_Internal(r_debugShaderMaterial, v46->current.integer != 0);
  }
  if ( R_CheckDvarModified(r_reflectionProbeDebugMode) )
  {
    v47 = r_reflectionProbeDebugMode;
    if ( !r_reflectionProbeDebugMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v47);
    switch ( v47->current.integer )
    {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
        Dvar_SetInt_Internal(r_debugShaderMaterial, 0);
        Dvar_SetInt_Internal(r_debugShaderLighting, 0);
        v48 = 0;
        goto LABEL_90;
      case 5:
        Dvar_SetInt_Internal(r_debugShaderMaterial, 1);
        Dvar_SetInt_Internal(r_debugShaderLighting, 0);
        v48 = 1;
        goto LABEL_90;
      case 6:
        Dvar_SetInt_Internal(r_debugShaderMaterial, 2);
        Dvar_SetInt_Internal(r_debugShaderLighting, 0);
        v48 = 2;
        goto LABEL_90;
      case 7:
        Dvar_SetInt_Internal(r_debugShaderMaterial, 0);
        Dvar_SetInt_Internal(r_debugShaderLighting, 4);
        v48 = 4;
        goto LABEL_90;
      case 8:
        Dvar_SetInt_Internal(r_debugShaderMaterial, 0);
        Dvar_SetInt_Internal(r_debugShaderLighting, 6);
        v48 = 5;
        goto LABEL_90;
      case 9:
        Dvar_SetInt_Internal(r_debugShaderMaterial, 0);
        Dvar_SetInt_Internal(r_debugShaderLighting, 1);
        v48 = 6;
LABEL_90:
        Dvar_SetInt_Internal(r_reflectionProbeLightingDebugMode, v48);
        break;
      default:
        break;
    }
  }
  v49 = r_reflectionProbeDebugMode;
  if ( !r_reflectionProbeDebugMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v49);
  unsignedInt = v49->current.unsignedInt;
  v263 = unsignedInt;
  if ( unsignedInt <= 6 && (v51 = 105, _bittest(&v51, unsignedInt)) )
  {
    v250 = 0;
  }
  else
  {
    v250 = 1;
    v263 = unsignedInt | 0x80000000;
  }
  if ( R_CheckDvarModified(r_debugShaderMaterial) || R_CheckDvarModified(r_debugShaderLighting) || R_CheckDvarModified(r_debugShaderTexture) || R_CheckDvarModified(r_debugShaderPerf) || R_CheckDvarModified(r_debugAssetCost) || R_CheckDvarModified(r_debugGPUPipeline) || R_CheckDvarModified(r_reflectionProbeDebugMode) || R_CheckDvarModified(r_debugShaderOptimumTexelDensity) || R_CheckDvarModified(r_debugShaderBlend) || R_CheckDvarModified(r_debugShaderDiffuseColor) || R_CheckDvarModified(r_debugShaderSpecularColor) || R_CheckDvarModified(r_debugShaderGloss) || R_CheckDvarModified(r_debugShaderDNSGValues) || R_CheckDvarModified(r_debugShaderGlossinessBandsValues) || R_CheckDvarModified(r_debugShaderTemperatureBandsValues) || R_CheckDvarModified(r_debugShaderDiffuseBRDF) || R_CheckDvarModified(r_debugShaderSpecularBRDF) || R_CheckDvarModified(r_debugShaderGGXGeom) || R_CheckDvarModified(r_debugTextureOverlay) || R_CheckDvarModified(r_debugOverdrawOverlay) )
    R_SyncRenderThread();
  v52 = r_debugShaderMaterial;
  if ( !r_debugShaderMaterial && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v52);
  integer = v52->current.integer;
  v54 = r_debugShaderLighting;
  if ( !r_debugShaderLighting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v54);
  v55 = v54->current.integer;
  v56 = r_debugShaderTexture;
  v254 = v55;
  if ( !r_debugShaderTexture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v56);
  v57 = v56->current.integer;
  v58 = r_debugShaderPerf;
  if ( !r_debugShaderPerf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v58);
  v59 = v58->current.integer;
  v60 = r_debugGPUPipeline;
  if ( !r_debugGPUPipeline && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v60);
  v61 = v60->current.integer;
  v62 = r_debugShaderDiffuseBRDF;
  v262 = v61;
  if ( !r_debugShaderDiffuseBRDF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v62);
  v63 = v62->current.integer;
  v64 = r_debugShaderSpecularBRDF;
  v252 = v63;
  if ( !r_debugShaderSpecularBRDF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v64);
  v65 = v64->current.integer;
  v66 = r_debugShaderGGXGeom;
  if ( !r_debugShaderGGXGeom && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v66);
  v67 = v66->current.integer;
  v68 = r_debugAssetCost;
  if ( !r_debugAssetCost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v68);
  v69 = v68->current.integer;
  v70 = r_lgvDebugEvalFreq;
  v259 = v69;
  if ( !r_lgvDebugEvalFreq && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v70);
  v71 = v70->current.integer;
  v72 = r_lgvDebugOcclusionMode;
  if ( !r_lgvDebugOcclusionMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v72);
  v73 = r_lgvEvalMode;
  v74 = v72->current.integer;
  if ( !r_lgvEvalMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v73);
  if ( rg.useLightGridVolumes )
  {
    if ( v71 )
      v75 = v71 + 2;
    else
      v75 = v73->current.integer + 1;
  }
  else
  {
    v75 = 0;
  }
  _R15 = r_debugShaderBlend;
  v77 = v75 & 0xF | ((v74 & 3) << 6);
  if ( !r_debugShaderBlend && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_R15);
  __asm { vmovss  xmm1, dword ptr [r15+28h] }
  v79 = v259;
  __asm { vmovss  [rsp+178h+var_124], xmm1 }
  v80 = v259 == 0;
  if ( v259 )
  {
    __asm { vucomiss xmm1, cs:__real@3f800000 }
    v59 = 15;
  }
  else
  {
    v80 = v59 == 15;
    if ( v59 == 15 )
      v79 = 5;
  }
  _RAX = r_globalSecondarySelfVisScale;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+48h]
    vucomiss xmm0, dword ptr [rax+28h]
  }
  if ( !v80 )
    goto LABEL_171;
  _RAX = r_rimLightingLerp;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+48h]
    vucomiss xmm0, dword ptr [rax+28h]
  }
  if ( !v80 )
    goto LABEL_171;
  if ( r_reflectionProbeForceNoParallax->current.enabled == r_reflectionProbeForceNoParallax->reset.enabled )
    v85 = 0;
  else
LABEL_171:
    v85 = 1;
  v86 = v254;
  if ( integer || v254 || v57 || v59 || v262 || v252 || v65 || v67 || v85 || (v87 = R_UseBakedLighting(), v86 = v254, !v87) )
  {
    rg.debugShaderEnabled = 1;
    rg.debugShaderLightingData = !v59 && (!integer || (unsigned int)(integer - 20) <= 3) && (v57 & 0xFFFFFFF6) == 0 && (v86 - 9 > 9 && v86 < 0x15 || v252 || v65 || v67 || v250);
  }
  else
  {
    rg.debugShaderEnabled = 0;
    rg.debugShaderLightingData = 1;
  }
  v88 = (v59 << 8) | (unsigned __int8)v57;
  v89 = r_debugShaderFocus;
  v260 = (unsigned __int8)integer | (((unsigned __int8)v86 | (v88 << 8)) << 8);
  if ( !r_debugShaderFocus && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v89);
  v264 = LOWORD(v89->current.unsignedInt) | ((v77 | 0x210) << 16);
  v90 = r_debugShaderBentC;
  v265 = v252 & 3 | (4 * (v65 & 1 | (2 * (v67 & 3))));
  if ( !r_debugShaderBentC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v90);
  v91 = r_debugShaderReflectionPassthrough;
  v92 = v90->current.enabled;
  if ( !r_debugShaderReflectionPassthrough && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v91);
  v93 = v92 | 2;
  v80 = !v91->current.enabled;
  v94 = r_debugShaderLightAttMode;
  if ( v80 )
    v93 = v92;
  if ( !r_debugShaderLightAttMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v94);
  v95 = v94->current.integer;
  _RDI = r_debugShaderBentCLightAngRadiiOff;
  if ( !r_debugShaderBentCLightAngRadiiOff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmulss  xmm1, xmm0, cs:__real@447f0000
    vcvttss2si rax, xmm1
  }
  v100 = v93 | ((unsigned __int8)_RAX << 8);
  v101 = r_primaryOmniLightPerPixelLimit;
  v266 = (unsigned __int8)v95 | (v100 << 8);
  if ( !r_primaryOmniLightPerPixelLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v101);
  v102 = v101->current.integer;
  v103 = r_primarySpotLightPerPixelLimit;
  if ( !r_primarySpotLightPerPixelLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v103);
  v104 = v103->current.integer;
  v105 = r_debugShaderMetalnessMode;
  if ( !r_debugShaderMetalnessMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v105);
  v106 = v105->current.integer;
  v107 = r_debugShaderCullMode;
  if ( !r_debugShaderCullMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v107);
  v108 = v107->current.integer;
  _RBX = r_debugShaderGlossCurve;
  v267 = (unsigned __int8)v106 | (((unsigned __int8)v104 | (((unsigned __int8)v102 | (v108 << 8)) << 8)) << 8);
  if ( !r_debugShaderGlossCurve && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm6, dword ptr [rbx+28h]
    vmovss  [rsp+178h+var_134], xmm6
  }
  if ( !R_UseBakedLighting() )
  {
    __asm
    {
      vxorps  xmm6, xmm6, cs:__xmm@80000000800000008000000080000000
      vmovss  [rsp+178h+var_134], xmm6
    }
  }
  __asm { vxorps  xmm9, xmm9, xmm9 }
  v112 = v57 - 2;
  if ( v112 )
  {
    v113 = v112 - 1;
    if ( !v113 )
    {
      *(double *)&_XMM0 = Dvar_GetFloat_Internal(r_debugShaderOptimumTexelDensity);
      __asm
      {
        vmovaps xmm13, xmm0
        vxorps  xmm0, xmm0, xmm0
        vxorps  xmm15, xmm15, xmm15
        vxorps  xmm14, xmm14, xmm14
      }
      goto LABEL_237;
    }
    if ( v113 == 5 )
    {
      *(double *)&_XMM0 = Dvar_GetFloat_Internal(r_debugShaderYUVPackingMipMapOffset);
      __asm { vmovaps xmm13, xmm0 }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal(r_debugShaderNOGPackingMipMapOffset);
      __asm
      {
        vxorps  xmm15, xmm15, xmm15
        vxorps  xmm14, xmm14, xmm14
      }
      goto LABEL_237;
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vshufps xmm14, xmm0, xmm0, 0FFh
      vmovdqa [rsp+178h+var_108], xmm0
    }
  }
  else
  {
    Dvar_GetVec3_Internal(r_debugShaderLightmapDensity, (vec3_t *)&v268);
    __asm { vxorps  xmm14, xmm14, xmm14 }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+178h+var_108+4]
    vmovss  xmm13, dword ptr [rsp+178h+var_108]
    vmovss  xmm15, dword ptr [rsp+178h+var_108+8]
  }
LABEL_237:
  __asm { vmovss  [rsp+178h+var_130], xmm0 }
  v118 = integer - 20;
  if ( v118 )
  {
    v119 = v118 - 2;
    if ( v119 )
    {
      v120 = v119 - 1;
      if ( v120 )
      {
        v121 = v120 - 7;
        if ( v121 )
        {
          if ( v121 == 8 )
          {
            _RBX = r_debugShaderTemperatureBandsValues;
            __asm
            {
              vmovaps [rsp+178h+var_48], xmm7
              vmovaps [rsp+178h+var_58], xmm8
            }
            if ( !r_debugShaderTemperatureBandsValues && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 669, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(_RBX);
            __asm
            {
              vmovss  xmm7, cs:__real@42000000
              vmovss  xmm6, cs:__real@3f0e38e4
              vmovss  xmm4, cs:__real@43889333
              vmovss  xmm0, dword ptr [rbx+28h]
              vmovss  xmm8, dword ptr [rbx+34h]
              vmovss  xmm3, dword ptr [rbx+2Ch]
              vmovss  xmm5, dword ptr [rbx+30h]
              vsubss  xmm0, xmm0, xmm7
              vmulss  xmm1, xmm0, xmm6
              vaddss  xmm2, xmm1, xmm4
              vsubss  xmm0, xmm3, xmm7
              vmulss  xmm1, xmm0, xmm6
              vmaxss  xmm12, xmm2, xmm9
              vaddss  xmm2, xmm1, xmm4
              vsubss  xmm0, xmm5, xmm7
              vmulss  xmm1, xmm0, xmm6
              vsubss  xmm0, xmm8, xmm7
              vmovaps xmm8, [rsp+178h+var_58]
              vmovaps xmm7, [rsp+178h+var_48]
              vmaxss  xmm11, xmm2, xmm9
              vaddss  xmm2, xmm1, xmm4
              vmulss  xmm1, xmm0, xmm6
              vmovss  xmm6, [rsp+178h+var_134]
              vmaxss  xmm10, xmm2, xmm9
              vaddss  xmm2, xmm1, xmm4
              vmaxss  xmm1, xmm2, xmm9
            }
          }
          else
          {
            __asm
            {
              vmovups xmm0, cs:__xmm@bf800000bf800000bf800000bf800000
              vmovups [rsp+178h+var_F8], xmm0
              vmovss  xmm10, dword ptr [rsp+178h+var_F8+8]
              vmovss  xmm11, dword ptr [rsp+178h+var_F8+4]
              vmovss  xmm12, dword ptr [rsp+178h+var_F8]
              vshufps xmm1, xmm0, xmm0, 0FFh
            }
          }
          goto LABEL_261;
        }
        _RBX = r_debugShaderGlossinessBandsValues;
      }
      else
      {
        _RBX = r_debugShaderDNSGValues;
      }
      if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 669, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+34h]
        vmovss  xmm12, dword ptr [rbx+28h]
        vmovss  xmm11, dword ptr [rbx+2Ch]
        vmovss  xmm10, dword ptr [rbx+30h]
      }
    }
    else
    {
      _RBX = r_debugShaderSpecularColor;
      if ( !r_debugShaderSpecularColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 662, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm0, dword ptr [rbx+28h]; x }
      *(double *)&_XMM0 = R_DebugShader_AdjustColorChannel(*(double *)&_XMM0, *(double *)&_XMM1);
      __asm
      {
        vmovaps xmm12, xmm0
        vmovss  xmm0, dword ptr [rbx+2Ch]; x
      }
      *(double *)&_XMM0 = R_DebugShader_AdjustColorChannel(*(double *)&_XMM0, *(double *)&_XMM1);
      __asm
      {
        vmovaps xmm11, xmm0
        vmovss  xmm0, dword ptr [rbx+30h]; x
      }
      *(double *)&_XMM0 = R_DebugShader_AdjustColorChannel(*(double *)&_XMM0, *(double *)&_XMM1);
      __asm { vmovaps xmm10, xmm0 }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal(r_debugShaderGloss);
      *(double *)&_XMM0 = R_DebugShader_AdjustColorChannel(*(double *)&_XMM0, *(double *)&_XMM1);
      __asm { vmovaps xmm1, xmm0 }
    }
  }
  else
  {
    _RBX = r_debugShaderDiffuseColor;
    if ( !r_debugShaderDiffuseColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 662, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h]; x }
    *(double *)&_XMM0 = R_DebugShader_AdjustColorChannel(*(double *)&_XMM0, *(double *)&_XMM1);
    __asm
    {
      vmovaps xmm12, xmm0
      vmovss  xmm0, dword ptr [rbx+2Ch]; x
    }
    *(double *)&_XMM0 = R_DebugShader_AdjustColorChannel(*(double *)&_XMM0, *(double *)&_XMM1);
    __asm
    {
      vmovaps xmm11, xmm0
      vmovss  xmm0, dword ptr [rbx+30h]; x
    }
    *(double *)&_XMM0 = R_DebugShader_AdjustColorChannel(*(double *)&_XMM0, *(double *)&_XMM1);
    __asm
    {
      vmovaps xmm10, xmm0
      vxorps  xmm1, xmm1, xmm1
    }
  }
LABEL_261:
  if ( v79 )
  {
    __asm
    {
      vxorps  xmm13, xmm13, xmm13
      vcvtsi2ss xmm13, xmm13, rax
    }
  }
  _RAX = r_debugShaderTweaks;
  __asm { vmovss  xmm0, [rsp+178h+var_128] }
  v161 = r_debugTextureOverlay;
  __asm
  {
    vmovss  dword ptr cs:?g_gfxCmdBufInput@@3UGfxCmdBufInput@@A.sceneConstants.debugParameters0, xmm0; GfxCmdBufInput g_gfxCmdBufInput
    vmovss  xmm0, [rsp+178h+var_118]
    vmovss  dword ptr cs:?g_gfxCmdBufInput@@3UGfxCmdBufInput@@A.sceneConstants.debugParameters0+4, xmm0; GfxCmdBufInput g_gfxCmdBufInput
    vmovss  xmm0, [rsp+178h+var_114]
    vmovss  dword ptr cs:?g_gfxCmdBufInput@@3UGfxCmdBufInput@@A.sceneConstants.debugParameters0+8, xmm0; GfxCmdBufInput g_gfxCmdBufInput
    vmovss  xmm0, [rsp+178h+var_124]
    vmovss  dword ptr cs:?g_gfxCmdBufInput@@3UGfxCmdBufInput@@A.sceneConstants.debugParameters0+0Ch, xmm0; GfxCmdBufInput g_gfxCmdBufInput
    vmovss  xmm0, [rsp+178h+var_110]
    vmovss  dword ptr cs:?g_gfxCmdBufInput@@3UGfxCmdBufInput@@A.sceneConstants.debugParameters1, xmm0; GfxCmdBufInput g_gfxCmdBufInput
    vmovss  xmm0, [rsp+178h+var_10C]
    vmovss  dword ptr cs:?g_gfxCmdBufInput@@3UGfxCmdBufInput@@A.sceneConstants.debugParameters1+4, xmm0; GfxCmdBufInput g_gfxCmdBufInput
    vmovss  xmm0, [rsp+178h+var_130]
    vmovss  dword ptr cs:?g_gfxCmdBufInput@@3UGfxCmdBufInput@@A.sceneConstants.debugParameters1+8, xmm6; GfxCmdBufInput g_gfxCmdBufInput
    vmovaps xmm6, [rsp+178h+var_38]
    vmovss  dword ptr cs:?g_gfxCmdBufInput@@3UGfxCmdBufInput@@A.sceneConstants.debugParameters2, xmm13; GfxCmdBufInput g_gfxCmdBufInput
    vmovaps xmm13, [rsp+178h+var_A8]
    vmovss  dword ptr cs:?g_gfxCmdBufInput@@3UGfxCmdBufInput@@A.sceneConstants.debugParameters2+8, xmm15; GfxCmdBufInput g_gfxCmdBufInput
    vmovaps xmm15, [rsp+178h+var_C8]
    vmovss  dword ptr cs:?g_gfxCmdBufInput@@3UGfxCmdBufInput@@A.sceneConstants.debugParameters2+0Ch, xmm14; GfxCmdBufInput g_gfxCmdBufInput
    vmovaps xmm14, [rsp+178h+var_B8]
    vmovss  dword ptr cs:?g_gfxCmdBufInput@@3UGfxCmdBufInput@@A.sceneConstants.debugParametersColor, xmm12; GfxCmdBufInput g_gfxCmdBufInput
    vmovaps xmm12, [rsp+178h+var_98]
    vmovss  dword ptr cs:?g_gfxCmdBufInput@@3UGfxCmdBufInput@@A.sceneConstants.debugParametersColor+4, xmm11; GfxCmdBufInput g_gfxCmdBufInput
    vmovaps xmm11, [rsp+178h+var_88]
    vmovss  dword ptr cs:?g_gfxCmdBufInput@@3UGfxCmdBufInput@@A.sceneConstants.debugParametersColor+8, xmm10; GfxCmdBufInput g_gfxCmdBufInput
    vmovaps xmm10, [rsp+178h+var_78]
    vmovss  dword ptr cs:?g_gfxCmdBufInput@@3UGfxCmdBufInput@@A.sceneConstants.debugParameters2+4, xmm0; GfxCmdBufInput g_gfxCmdBufInput
    vmovss  dword ptr cs:?g_gfxCmdBufInput@@3UGfxCmdBufInput@@A.sceneConstants.debugParameters1+0Ch, xmm9; GfxCmdBufInput g_gfxCmdBufInput
    vmovss  dword ptr cs:?g_gfxCmdBufInput@@3UGfxCmdBufInput@@A.sceneConstants.debugParametersColor+0Ch, xmm1; GfxCmdBufInput g_gfxCmdBufInput
    vmovss  xmm0, dword ptr [rax+28h]
    vmovss  dword ptr cs:?g_gfxCmdBufInput@@3UGfxCmdBufInput@@A.sceneConstants.debugParametersTweak, xmm0; GfxCmdBufInput g_gfxCmdBufInput
    vmovss  xmm1, dword ptr [rax+2Ch]
    vmovss  dword ptr cs:?g_gfxCmdBufInput@@3UGfxCmdBufInput@@A.sceneConstants.debugParametersTweak+4, xmm1; GfxCmdBufInput g_gfxCmdBufInput
    vmovss  xmm0, dword ptr [rax+30h]
    vmovss  dword ptr cs:?g_gfxCmdBufInput@@3UGfxCmdBufInput@@A.sceneConstants.debugParametersTweak+8, xmm0; GfxCmdBufInput g_gfxCmdBufInput
    vmovss  xmm1, dword ptr [rax+34h]
  }
  g_gfxCmdBufInput.sceneConstants.debugGPUPipeline = v262;
  g_gfxCmdBufInput.sceneConstants.debugReflectionProbe = v263;
  __asm { vmovss  dword ptr cs:?g_gfxCmdBufInput@@3UGfxCmdBufInput@@A.sceneConstants.debugParametersTweak+0Ch, xmm1; GfxCmdBufInput g_gfxCmdBufInput }
  if ( !r_debugTextureOverlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v161);
  v179 = v161->current.unsignedInt;
  v180 = r_debugOverdrawOverlay;
  rg.debugTextureOverlay = v179;
  if ( !r_debugOverdrawOverlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v180);
  __asm { vmovss  xmm2, cs:?rg@@3Ur_globals_t@@A.debugTextureOverlay; r_globals_t rg }
  rg.debugOverdrawOverlay = v180->current.enabled;
  _RAX = r_debugTextureOverlayMip;
  __asm { vmovss  xmm0, dword ptr [rax+28h] }
  _RAX = r_debugTextureOverlayBlend;
  __asm
  {
    vmovss  xmm1, dword ptr [rax+28h]
    vmovss  dword ptr cs:?g_gfxCmdBufInput@@3UGfxCmdBufInput@@A.sceneConstants.debugTextureParameters, xmm2; GfxCmdBufInput g_gfxCmdBufInput
    vmovss  dword ptr cs:?g_gfxCmdBufInput@@3UGfxCmdBufInput@@A.sceneConstants.debugTextureParameters+4, xmm0; GfxCmdBufInput g_gfxCmdBufInput
    vmovss  dword ptr cs:?g_gfxCmdBufInput@@3UGfxCmdBufInput@@A.sceneConstants.debugTextureParameters+8, xmm9; GfxCmdBufInput g_gfxCmdBufInput
    vmovss  dword ptr cs:?g_gfxCmdBufInput@@3UGfxCmdBufInput@@A.sceneConstants.debugTextureParameters+0Ch, xmm1; GfxCmdBufInput g_gfxCmdBufInput
  }
  v186 = r_identifyOldMaterial->current.enabled;
  v187 = R_Screenshot_InProcess();
  if ( v186 )
  {
    _RCX = r_oldMaterialEmissive;
    __asm { vmovss  xmm0, dword ptr [rcx+28h] }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  __asm { vmovss  cs:?g_gfxCmdBufInput@@3UGfxCmdBufInput@@A.sceneConstants.identifyOldMaterialEmissive, xmm0; GfxCmdBufInput g_gfxCmdBufInput }
  v80 = !v186;
  v190 = r_nearPlaneFadeDistance;
  g_gfxCmdBufInput.sceneConstants.globalFlags = !v80 | (v187 ? 2 : 0);
  if ( !r_nearPlaneFadeDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v190);
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vdivss  xmm0, xmm0, dword ptr [rbx+28h]
    vmovss  cs:?g_gfxCmdBufInput@@3UGfxCmdBufInput@@A.sceneConstants.invNearPlaneFade, xmm0; GfxCmdBufInput g_gfxCmdBufInput
  }
  if ( R_CheckDvarModified(r_distortion) || R_CheckDvarModified(r_ssrMode) )
    R_SyncRenderThread();
  v193 = r_distortion;
  if ( !r_distortion && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v193);
  if ( !v193->current.enabled || (rg.distortion = 1, rg.debugOverdrawOverlay) )
    rg.distortion = 0;
  g_gfxCmdBufInput.codePersistentImages[37] = s_world.draw.iesLookupTexture;
  rg.useLightGridVolumes = R_GpuLightGrid_DataAvailable();
  IsOctahedronEnabled = R_ReflectionProbe_IsOctahedronEnabled();
  if ( IsOctahedronEnabled != rg.useRProbeOctahedron )
    R_SyncRenderThread();
  rg.useRProbeOctahedron = IsOctahedronEnabled;
  if ( R_CheckDvarModified(r_fallbackProbeDebug) || R_CheckDvarModified(r_fallbackProbeUseCustomSample) || R_CheckDvarModified(r_fallbackProbeSamplePos) )
  {
    R_SyncRenderThread();
    R_DirtyFallbackProbe();
  }
  rg.drawWorld = r_drawWorld->current.enabled;
  rg.drawBModels = r_drawBModels->current.enabled;
  if ( !r_drawSModels->current.enabled || (v80 = !r_drawRigidModels->current.enabled, rg.drawSModels = 1, v80) )
    rg.drawSModels = 0;
  rg.drawXModels = r_drawXModels->current.enabled;
  rg.drawSkinnedModels = r_drawSkinnedModels->current.enabled;
  rg.drawRigidModels = r_drawRigidModels->current.enabled;
  if ( !r_drawDynEnts->current.enabled || (v80 = !r_drawXModels->current.enabled, rg.drawDynEnts = 1, v80) )
    rg.drawDynEnts = 0;
  rg.drawTessellatedWorld = r_drawTessellatedWorld->current.enabled;
  rg.drawUmbraOccluders = r_drawUmbraOccluders->current.unsignedInt;
  if ( rg.drawUmbraOccluders )
    *(_WORD *)&rg.drawXModels = 0;
  v195 = r_subdiv;
  if ( rg.subdiv != r_subdiv->current.enabled )
    goto LABEL_303;
  v196 = r_subdivLimit;
  if ( rg.subdivLimit != r_subdivLimit->current.integer )
    goto LABEL_303;
  v197 = r_adaptiveSubdiv;
  v198 = r_adaptiveSubdiv->current.integer;
  if ( rg.adaptiveSubdiv != v198 )
    goto LABEL_303;
  _RDX = r_adaptiveSubdivBaseFactor;
  __asm
  {
    vmovss  xmm0, cs:?rg@@3Ur_globals_t@@A.adaptiveSubdivBaseFactor; r_globals_t rg
    vucomiss xmm0, dword ptr [rdx+28h]
  }
  if ( rg.adaptiveSubdiv != v198 )
    goto LABEL_303;
  _RCX = r_adaptiveSubdivPatchFactor;
  __asm
  {
    vmovss  xmm0, cs:?rg@@3Ur_globals_t@@A.adaptiveSubdivPatchFactor; r_globals_t rg
    vucomiss xmm0, dword ptr [rcx+28h]
  }
  if ( rg.adaptiveSubdiv != v198 )
  {
LABEL_303:
    R_SyncRenderThread();
    v195 = r_subdiv;
    v196 = r_subdivLimit;
    v197 = r_adaptiveSubdiv;
    _RDX = r_adaptiveSubdivBaseFactor;
    _RCX = r_adaptiveSubdivPatchFactor;
  }
  v203 = DCONST_DVARBOOL_r_patchCountAllowed;
  rg.subdiv = v195->current.enabled;
  rg.subdivLimit = v196->current.integer;
  rg.adaptiveSubdiv = v197->current.integer;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+28h]
    vmovss  cs:?rg@@3Ur_globals_t@@A.adaptiveSubdivBaseFactor, xmm0; r_globals_t rg
    vmovss  xmm1, dword ptr [rcx+28h]
    vmovss  cs:?rg@@3Ur_globals_t@@A.adaptiveSubdivPatchFactor, xmm1; r_globals_t rg
  }
  if ( !DCONST_DVARBOOL_r_patchCountAllowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_patchCountAllowed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v203);
  if ( rg.patchCountAllowed != v203->current.enabled )
    goto LABEL_321;
  v206 = DCONST_DVARINT_r_subdivPatchCount;
  if ( !DCONST_DVARINT_r_subdivPatchCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_subdivPatchCount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v206);
  if ( rg.subdivPatchCount != v206->current.integer )
    goto LABEL_321;
  v207 = DCONST_DVARINT_r_displacementPatchCount;
  if ( !DCONST_DVARINT_r_displacementPatchCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_displacementPatchCount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v207);
  if ( rg.displacementPatchCount != v207->current.integer )
    goto LABEL_321;
  v208 = DCONST_DVARINT_r_defaultPatchCount;
  if ( !DCONST_DVARINT_r_defaultPatchCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_defaultPatchCount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v208);
  if ( rg.defaultPatchCount == v208->current.integer && !R_GPUDvarsChanged() )
  {
    v209 = v251;
  }
  else
  {
LABEL_321:
    R_SyncRenderThread();
    v209 = 1;
  }
  R_InitTessellationState();
  v210 = DCONST_DVARBOOL_r_gpuLateAllocParamCacheAllowed;
  if ( !DCONST_DVARBOOL_r_gpuLateAllocParamCacheAllowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_gpuLateAllocParamCacheAllowed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v210);
  v211 = v210->current.enabled;
  v212 = DCONST_DVARINT_r_gpuLateAllocParamCacheSubdiv;
  rg.gpuLateAllocParamCacheAllowed = v211;
  if ( !DCONST_DVARINT_r_gpuLateAllocParamCacheSubdiv && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_gpuLateAllocParamCacheSubdiv") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v212);
  v213 = v212->current.integer;
  v214 = DCONST_DVARINT_r_gpuLateAllocParamCacheSubdivDepthOnly;
  rg.gpuLateAllocParamCacheSubdiv = v213;
  if ( !DCONST_DVARINT_r_gpuLateAllocParamCacheSubdivDepthOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_gpuLateAllocParamCacheSubdivDepthOnly") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v214);
  v215 = v214->current.integer;
  v216 = DCONST_DVARINT_r_gpuLateAllocParamCacheBSP;
  rg.gpuLateAllocParamCacheSubdivDepthOnly = v215;
  if ( !DCONST_DVARINT_r_gpuLateAllocParamCacheBSP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_gpuLateAllocParamCacheBSP") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v216);
  v217 = v216->current.integer;
  v218 = DCONST_DVARINT_r_gpuLateAllocParamCacheBSPDepthOnly;
  rg.gpuLateAllocParamCacheBSP = v217;
  if ( !DCONST_DVARINT_r_gpuLateAllocParamCacheBSPDepthOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_gpuLateAllocParamCacheBSPDepthOnly") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v218);
  v219 = v218->current.integer;
  v220 = DCONST_DVARINT_r_gpuLateAllocParamCacheST;
  rg.gpuLateAllocParamCacheBSPDepthOnly = v219;
  if ( !DCONST_DVARINT_r_gpuLateAllocParamCacheST && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_gpuLateAllocParamCacheST") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v220);
  v221 = v220->current.integer;
  v222 = DCONST_DVARINT_r_gpuLateAllocParamCacheSTDepthOnly;
  rg.gpuLateAllocParamCacheST = v221;
  if ( !DCONST_DVARINT_r_gpuLateAllocParamCacheSTDepthOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_gpuLateAllocParamCacheSTDepthOnly") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v222);
  v223 = v222->current.integer;
  v224 = DCONST_DVARINT_r_gpuLateAllocParamCacheEffects;
  rg.gpuLateAllocParamCacheSTDepthOnly = v223;
  if ( !DCONST_DVARINT_r_gpuLateAllocParamCacheEffects && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_gpuLateAllocParamCacheEffects") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v224);
  rg.gpuLateAllocParamCacheEffects = v224->current.integer;
  rg.gpuLateAllocParamCacheDefault = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuLateAllocParamCacheDefault, "r_gpuLateAllocParamCacheDefault");
  rg.gpuLateAllocParamCacheDefaultDepthOnly = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuLateAllocParamCacheDefaultDepthOnly, "r_gpuLateAllocParamCacheDefaultDepthOnly");
  rg.gpuVSWaveLimitAllowed = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_gpuVSWaveLimitAllowed, "r_gpuVSWaveLimitAllowed");
  rg.gpuVSWaveLimitSubdiv = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuVSWaveLimitSubdiv, "r_gpuVSWaveLimitSubdiv");
  rg.gpuVSWaveLimitSubdivDepthOnly = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuVSWaveLimitSubdivDepthOnly, "r_gpuVSWaveLimitSubdivDepthOnly");
  rg.gpuVSWaveLimitBSP = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuVSWaveLimitBSP, "r_gpuVSWaveLimitBSP");
  rg.gpuVSWaveLimitBSPDepthOnly = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuVSWaveLimitBSPDepthOnly, "r_gpuVSWaveLimitBSPDepthOnly");
  rg.gpuVSWaveLimitST = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuVSWaveLimitST, "r_gpuVSWaveLimitST");
  rg.gpuVSWaveLimitSTDepthOnly = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuVSWaveLimitSTDepthOnly, "r_gpuVSWaveLimitSTDepthOnly");
  rg.gpuVSWaveLimitEffects = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuVSWaveLimitEffects, "r_gpuVSWaveLimitEffects");
  rg.gpuVSWaveLimitDefault = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuVSWaveLimitDefault, "r_gpuVSWaveLimitDefault");
  rg.gpuVSWaveLimitDefaultDepthOnly = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuVSWaveLimitDefaultDepthOnly, "r_gpuVSWaveLimitDefaultDepthOnly");
  rg.gpuPSWaveLimitAllowed = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_gpuPSWaveLimitAllowed, "r_gpuPSWaveLimitAllowed");
  rg.gpuPSWaveLimitSubdiv = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuPSWaveLimitSubdiv, "r_gpuPSWaveLimitSubdiv");
  rg.gpuPSWaveLimitSubdivDepthOnly = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuPSWaveLimitSubdivDepthOnly, "r_gpuPSWaveLimitSubdivDepthOnly");
  rg.gpuPSWaveLimitBSP = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuPSWaveLimitBSP, "r_gpuPSWaveLimitBSP");
  rg.gpuPSWaveLimitBSPDepthOnly = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuPSWaveLimitBSPDepthOnly, "r_gpuPSWaveLimitBSPDepthOnly");
  rg.gpuPSWaveLimitST = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuPSWaveLimitST, "r_gpuPSWaveLimitST");
  rg.gpuPSWaveLimitSTDepthOnly = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuPSWaveLimitSTDepthOnly, "r_gpuPSWaveLimitSTDepthOnly");
  rg.gpuPSWaveLimitEffects = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuPSWaveLimitEffects, "r_gpuPSWaveLimitEffects");
  rg.gpuPSWaveLimitDefault = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuPSWaveLimitDefault, "r_gpuPSWaveLimitDefault");
  rg.gpuPSWaveLimitDefaultDepthOnly = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuPSWaveLimitDefaultDepthOnly, "r_gpuPSWaveLimitDefaultDepthOnly");
  rg.gpuCpGroupedDrawsAllowed = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_gpuCpGroupedDrawsAllowed, "r_gpuCpGroupedDrawsAllowed");
  rg.gpuCpGroupedDrawsForShadowsAndDepthPrepasses = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_gpuCpGroupedDrawsForShadowsAndDepthPrepasses, "r_gpuCpGroupedDrawsForShadowsAndDepthPrepasses");
  rg.gpuCpGroupedDrawsForDepthPrepassMaterial = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_gpuCpGroupedDrawsForDepthPrepassMaterial, "r_gpuCpGroupedDrawsForDepthPrepassMaterial");
  rg.gpuShaderPrecacheAllowed = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_gpuShaderPrecacheAllowed, "r_gpuShaderPrecacheAllowed");
  rg.gpuVSPrecacheAllowed = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_gpuVSPrecacheAllowed, "r_gpuVSPrecacheAllowed");
  rg.gpuPSPrecacheAllowed = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_gpuPSPrecacheAllowed, "r_gpuPSPrecacheAllowed");
  rg.gpuCULimitAllowed = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_gpuCULimitAllowed, "r_gpuCULimitAllowed");
  rg.gpuDepthOnlyCULimit = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_r_gpuDepthOnlyCULimit, "r_gpuDepthOnlyCULimit");
  if ( DVARBOOL_r_enableNoTessBuckets )
  {
    Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DVARBOOL_r_enableNoTessBuckets, "r_enableNoTessBuckets");
    if ( rg.enableNoTessBuckets != Bool_Internal_DebugName )
    {
      R_SyncRenderThread();
      rg.enableNoTessBuckets = Bool_Internal_DebugName;
    }
  }
  if ( R_CheckDvarModified(r_umbraShadowCasters) )
  {
    R_SyncRenderThread();
    rg.needSunShadowCacheFlush = 1;
  }
  rg.umbraShadowCasters = Dvar_GetBool_Internal(r_umbraShadowCasters);
  rg.useCachedSpotShadows = r_usePrebuiltSpotShadow->current.unsignedInt;
  if ( !rg.needSunShadowCacheFlush && !v256 && !v257 && !v258 && !R_CheckDvarModified(r_st_sm_lod) && !R_CheckDvarModified(r_st_enable) && !R_CheckDvarModified(r_st_cutoutMeshFilter) )
    goto LABEL_361;
  v226 = r_usePrebuiltSunShadow;
  if ( r_usePrebuiltSunShadow->current.integer == 1 )
  {
    Dvar_SetInt_Internal(r_usePrebuiltSunShadow, 3);
LABEL_361:
    v226 = r_usePrebuiltSunShadow;
  }
  if ( sm_sunMoving->current.enabled || rg.useCompressedSunShadow == 3 )
  {
    rg.useCachedSunShadow = 0;
  }
  else
  {
    rg.useCachedSunShadow = v226->current.unsignedInt;
    if ( rg.useCachedSunShadow == 3 )
      Dvar_SetInt_Internal(v226, 1);
  }
  rg.cachedSunShadowMaxTilesPerFrame = r_cachedSunShadowMaxTilesPerFrame->current.unsignedInt;
  rg.useCompressedSunShadow = R_CompressedSunShadow_GetType();
  _RAX = r_compressedSunShadowBiasScale;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+28h]
    vmovss  cs:?rg@@3Ur_globals_t@@A.compressedSunShadowBiasScale, xmm0; r_globals_t rg
  }
  if ( R_CheckDvarModified(r_transShadowEnable) )
    R_SyncRenderThread();
  rg.useTransSunShadow = Dvar_GetBool_Internal(r_transShadowEnable);
  _RAX = r_transShadowPrevFrameMaskLerpFactor;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+28h]
    vmovss  cs:?rg@@3Ur_globals_t@@A.transShadowPrevFrameMaskLerpFactor, xmm0; r_globals_t rg
  }
  if ( R_CheckDvarModified(r_volumetricDepth) )
    R_SyncRenderThread();
  Dvar_GetVec4_Internal(r_volumetricDepth, &rg.volumetricDepth);
  v231 = DVARBOOL_r_volumetrics;
  if ( !DVARBOOL_r_volumetrics )
    goto LABEL_376;
  if ( DVARBOOL_r_volumetrics->modified )
  {
    Dvar_ClearModified(DVARBOOL_r_volumetrics);
    R_SyncRenderThread();
    v231 = DVARBOOL_r_volumetrics;
  }
  if ( v231 )
    rg.volumetrics = Dvar_GetBool_Internal_DebugName(v231, "r_volumetrics");
  else
LABEL_376:
    rg.volumetrics = 0;
  if ( R_CheckDvarModified(r_vrs) )
    R_SyncRenderThread();
  if ( r_vrs->current.integer != 1 || (rg.vrsEmissiveOnly = 1, rg.debugOverdrawOverlay) )
    rg.vrsEmissiveOnly = 0;
  if ( r_vrs->current.integer != 2 || rg.debugOverdrawOverlay || rg.debugShaderEnabled || (v80 = !r_deviceDebug->current.enabled, rg.vrs = 1, !v80) )
    rg.vrs = 0;
  if ( R_CheckDvarModified(r_halfResEmissive) )
    R_SyncRenderThread();
  if ( !Dvar_GetBool_Internal(r_halfResEmissive) || rg.vrs || rg.debugShaderEnabled || (rg.halfResEmissive = 1, rg.debugOverdrawOverlay) )
    rg.halfResEmissive = 0;
  if ( v209 )
    Material_RefreshAllTechniqueSets();
  if ( R_CheckDvarModified(r_flushUnifiedGeoBuffers) )
  {
    R_UGB_DirtySurfData();
    Dvar_Reset(r_flushUnifiedGeoBuffers, DVAR_SOURCE_INTERNAL);
  }
  if ( rg.gpuCullTriSModels != r_gpuCullTriSModels->current.enabled || rg.gpuCullTriRigidModels != r_gpuCullTriRigidModels->current.enabled || rg.gpuCullTriSkinnedModels != r_gpuCullTriSkinnedModels->current.enabled || rg.gpuCullTriOcclusion != r_gpuCullTriOcclusion->current.enabled || rg.gpuCullTriClusterSModels != r_gpuCullTriClusterSModels->current.enabled || rg.gpuCullTriClusterRigidModels != r_gpuCullTriClusterRigidModels->current.enabled || rg.gpuCullTriClusterSkinnedModels != r_gpuCullTriClusterSkinnedModels->current.enabled || rg.gpuCullTriClusterOcclusion != r_gpuCullTriClusterOcclusion->current.enabled || rg.gpuCullOcclusion != r_gpuCullOcclusion->current.enabled || rg.gpuCulling != r_gpuCulling->current.enabled || rg.gpuCullTriMinThreshold != r_gpuCullTriMinThreshold->current.integer || rg.gpuCullClusterMinThreshold != r_gpuCullClusterMinThreshold->current.integer || rg.gpuCullReusePrepassVisData != r_gpuCullReusePrepassVisData->current.enabled || rg.gpuCullUseVisBufferPrepass != r_gpuCullUseVisBufferPrepass->current.enabled || rg.gpuCullClusterDepthMipBias != r_gpuCullClusterDepthMipBias->current.integer || rg.gpuCullTriDepthMipBias != r_gpuCullTriDepthMipBias->current.integer )
  {
    R_SyncRenderThread();
    rg.gpuCullTriSModels = r_gpuCullTriSModels->current.enabled;
    rg.gpuCullTriRigidModels = r_gpuCullTriRigidModels->current.enabled;
    rg.gpuCullTriSkinnedModels = r_gpuCullTriSkinnedModels->current.enabled;
    rg.gpuCullTriOcclusion = r_gpuCullTriOcclusion->current.enabled;
    rg.gpuCullTriClusterSModels = r_gpuCullTriClusterSModels->current.enabled;
    rg.gpuCullTriClusterRigidModels = r_gpuCullTriClusterRigidModels->current.enabled;
    rg.gpuCullTriClusterSkinnedModels = r_gpuCullTriClusterSkinnedModels->current.enabled;
    rg.gpuCullTriClusterOcclusion = r_gpuCullTriClusterOcclusion->current.enabled;
    rg.gpuCullOcclusion = r_gpuCullOcclusion->current.enabled;
    rg.gpuCulling = r_gpuCulling->current.enabled;
    rg.gpuCullTriMinThreshold = r_gpuCullTriMinThreshold->current.unsignedInt;
    rg.gpuCullClusterMinThreshold = r_gpuCullClusterMinThreshold->current.unsignedInt;
    rg.gpuCullReusePrepassVisData = r_gpuCullReusePrepassVisData->current.enabled;
    rg.gpuCullUseVisBufferPrepass = r_gpuCullUseVisBufferPrepass->current.enabled;
    rg.gpuCullClusterDepthMipBias = r_gpuCullClusterDepthMipBias->current.unsignedInt;
    rg.gpuCullTriDepthMipBias = r_gpuCullTriDepthMipBias->current.unsignedInt;
  }
  if ( DVARBOOL_r_vertexDeformForceCullSunShadows )
    rg.vertexDeformForceCullSunShadows = Dvar_GetBool_Internal_DebugName(DVARBOOL_r_vertexDeformForceCullSunShadows, "r_vertexDeformForceCullSunShadows");
  else
    rg.vertexDeformForceCullSunShadows = 1;
  if ( DVARBOOL_r_vertexDeformForceCullSpotShadows )
    rg.vertexDeformForceCullSpotShadows = Dvar_GetBool_Internal_DebugName(DVARBOOL_r_vertexDeformForceCullSpotShadows, "r_vertexDeformForceCullSpotShadows");
  else
    rg.vertexDeformForceCullSpotShadows = 1;
  R_UpdateFrontEndDvarOptions_NetworkDvars();
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() )
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_r_sunsprite_size_override, "r_sunsprite_size_override");
  else
    __asm { vmovss  xmm0, cs:__real@bf800000 }
  __asm { vmovss  cs:?rg@@3Ur_globals_t@@A.sunspriteSizeOverride, xmm0; r_globals_t rg }
  v232 = r_primaryLightMotionDetect->current.integer;
  if ( rg.primaryLightMotionDetect != v232 || R_CheckDvarModified(r_primaryLightMotionDetectUseSkinnedModel) || R_CheckDvarModified(r_primaryLightMotionDetectSizeMin) || R_CheckDvarModified(r_primaryLightMotionDetectSizeMax) || R_CheckDvarModified(r_lightSensorMode) )
    R_SyncRenderThread();
  rg.primaryLightMotionDetect = v232;
  _RAX = r_primaryLightMotionDetectSizeMin;
  rg.primaryLightMotionDetectUseSkinnedModel = r_primaryLightMotionDetectUseSkinnedModel->current.enabled;
  __asm { vmovss  xmm0, dword ptr [rax+28h] }
  _RAX = r_primaryLightMotionDetectSizeMax;
  __asm
  {
    vmovss  cs:?rg@@3Ur_globals_t@@A.primaryLightMotionDetectSizeMin, xmm0; r_globals_t rg
    vmovss  xmm1, dword ptr [rax+28h]
    vmovss  cs:?rg@@3Ur_globals_t@@A.primaryLightMotionDetectSizeMax, xmm1; r_globals_t rg
  }
  rg.lightSensorMode = r_lightSensorMode->current.integer;
  if ( R_CheckDvarModified(r_tessellationOverride) || R_CheckDvarModified(r_tessellation) || R_CheckDvarModified(r_tessellationForceFlushesOnShaderStageChanges) )
    R_SyncRenderThread();
  v237 = r_tessellationOverride->current.integer;
  if ( v237 == -1 )
  {
    __asm
    {
      vmovss  xmm0, cs:?rg@@3Ur_globals_t@@A.tessellationFactor; r_globals_t rg
      vucomiss xmm0, xmm9
    }
    v237 = 0;
  }
  if ( CL_IsRenderingSplitScreen() )
    v237 = 0;
  rg.tessellation = v237;
  v239 = R_CheckDvarModified(r_dof_filter_fireflySuppression);
  __asm { vmovaps xmm9, [rsp+178h+var_68] }
  if ( v239 || R_CheckDvarModified(r_dof_filter_bokehEdgeSharpness) || R_CheckDvarModified(r_dof_filter_sharpen) || R_CheckDvarModified(r_dof_filter_temporalFilter) || R_CheckDvarModified(r_dof_filter_backgroundReconstruction) || R_CheckDvarModified(r_dof_filter_fullres) )
    R_SyncRenderThread();
  rg.dofFilter.enabled = R_DOF_DvarEnabled();
  rg.dofFilter.preset = R_DOF_GetBokehPreset();
  _RAX = r_dof_filter_fireflySuppression;
  rg.dofFilter.fullres = r_dof_filter_fullres->current.color[0];
  __asm { vmovss  xmm0, dword ptr [rax+28h] }
  _RAX = r_dof_filter_bokehEdgeSharpness;
  __asm
  {
    vmovss  cs:?rg@@3Ur_globals_t@@A.dofFilter.fireflySuppression, xmm0; r_globals_t rg
    vmovss  xmm1, dword ptr [rax+28h]
  }
  _RAX = r_dof_filter_sharpen;
  __asm
  {
    vmovss  cs:?rg@@3Ur_globals_t@@A.dofFilter.bokehEdgeSharpness, xmm1; r_globals_t rg
    vmovss  xmm0, dword ptr [rax+28h]
    vmovss  cs:?rg@@3Ur_globals_t@@A.dofFilter.sharpen, xmm0; r_globals_t rg
    vmovss  xmm0, cs:?rg@@3Ur_globals_t@@A.ringFractionForFlush; r_globals_t rg
  }
  rg.dofFilter.temporalFilterEnabled = r_dof_filter_temporalFilter->current.color[0];
  result = r_ringFractionForFlush;
  rg.dofFilter.backgroundReconstruction = r_dof_filter_backgroundReconstruction->current.color[0];
  __asm { vucomiss xmm0, dword ptr [rax+28h] }
  if ( !v80 )
  {
    R_SyncRenderThread();
    result = r_ringFractionForFlush;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+28h]
      vmovss  cs:?rg@@3Ur_globals_t@@A.ringFractionForFlush, xmm0; r_globals_t rg
    }
  }
  return result;
}

/*
==============
R_UpdateFrontEndDvarOptions_NetworkDvars
==============
*/

void __fastcall R_UpdateFrontEndDvarOptions_NetworkDvars(__int64 a1, __int64 a2, double _XMM2_8)
{
  const dvar_t *v8; 
  bool enabled; 
  const dvar_t *v12; 
  int v13; 
  int integer; 
  const dvar_t *v15; 
  const dvar_t *v19; 
  int v20; 
  int v21; 
  const dvar_t *v22; 
  int v23; 
  const dvar_t *v24; 
  bool v25; 
  const dvar_t *v32; 
  const dvar_t *v37; 
  bool v38; 
  const dvar_t *v39; 
  const dvar_t *v52; 
  bool v53; 
  unsigned __int16 unsignedInt; 
  const dvar_t *v55; 
  unsigned int v56; 
  const dvar_t *v61; 
  const dvar_t *v85; 
  bool v97; 
  const dvar_t *v98; 
  const dvar_t *v99; 

  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() )
  {
    _RBX = DVARFLT_r_specularColorScale;
    __asm { vmovaps [rsp+68h+var_18], xmm6 }
    if ( !DVARFLT_r_specularColorScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_specularColorScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    _RBX = DVARFLT_r_diffuseColorScale;
    __asm { vmovss  cs:?rg@@3Ur_globals_t@@A.specularColorScale, xmm0; r_globals_t rg }
    if ( !DVARFLT_r_diffuseColorScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_diffuseColorScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    v8 = DVARBOOL_r_drawSun;
    __asm { vmovss  cs:?rg@@3Ur_globals_t@@A.diffuseColorScale, xmm0; r_globals_t rg }
    if ( DVARBOOL_r_drawSun )
    {
      Dvar_CheckFrontendServerThread(DVARBOOL_r_drawSun);
      enabled = v8->current.enabled;
    }
    else
    {
      enabled = 0;
    }
    _RBX = DVARFLT_sm_sunSampleSizeNear;
    rg.drawSun = enabled;
    if ( !DVARFLT_sm_sunSampleSizeNear && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_sunSampleSizeNear") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    v12 = DVARINT_sm_sunCascadeSizeMultiplier1;
    v13 = 2;
    __asm { vmovss  cs:?rg@@3Ur_globals_t@@A.sunSampleSizeNear, xmm0; r_globals_t rg }
    if ( DVARINT_sm_sunCascadeSizeMultiplier1 )
    {
      Dvar_CheckFrontendServerThread(DVARINT_sm_sunCascadeSizeMultiplier1);
      integer = v12->current.integer;
    }
    else
    {
      integer = 2;
    }
    v15 = DVARINT_sm_sunCascadeSizeMultiplier2;
    rg.sunCascadeSizeMultiplier[0] = integer;
    if ( DVARINT_sm_sunCascadeSizeMultiplier2 )
    {
      Dvar_CheckFrontendServerThread(DVARINT_sm_sunCascadeSizeMultiplier2);
      v13 = v15->current.integer;
    }
    rg.sunCascadeSizeMultiplier[1] = v13;
    _RBX = DVARFLT_r_sdfShadowPenumbra;
    __asm { vxorps  xmm6, xmm6, xmm6 }
    if ( DVARFLT_r_sdfShadowPenumbra )
    {
      Dvar_CheckFrontendServerThread(DVARFLT_r_sdfShadowPenumbra);
      __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    }
    else
    {
      __asm { vxorps  xmm0, xmm0, xmm0 }
    }
    v19 = DVARINT_sm_roundRobinPrioritySpotShadows;
    v20 = 0;
    __asm { vmovss  cs:?rg@@3Ur_globals_t@@A.sdfShadowPenumbra, xmm0; r_globals_t rg }
    if ( DVARINT_sm_roundRobinPrioritySpotShadows )
    {
      Dvar_CheckFrontendServerThread(DVARINT_sm_roundRobinPrioritySpotShadows);
      v21 = v19->current.integer;
    }
    else
    {
      v21 = 0;
    }
    v22 = DVARINT_sm_spotUpdateLimit;
    rg.roundRobinPrioritySpotShadows = v21;
    if ( DVARINT_sm_spotUpdateLimit )
    {
      Dvar_CheckFrontendServerThread(DVARINT_sm_spotUpdateLimit);
      v23 = v22->current.integer;
    }
    else
    {
      v23 = 0;
    }
    rg.spotUpdateLimit = v23;
    if ( rg.spotCandidateLimit < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 3939, ASSERT_TYPE_ASSERT, "( rg.spotCandidateLimit ) >= ( 0 )", "%s >= %s\n\t%i, %i", "rg.spotCandidateLimit", "0", rg.spotCandidateLimit, 0i64) )
      __debugbreak();
    v24 = DVARBOOL_r_umbraExclusive;
    if ( !DVARBOOL_r_umbraExclusive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_umbraExclusive") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v24);
    v25 = v24->current.enabled;
    _RBX = DVARFLT_r_umbraAccurateOcclusionThreshold;
    rg.umbraExclusive = v25;
    if ( !DVARFLT_r_umbraAccurateOcclusionThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_umbraAccurateOcclusionThreshold") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    _RBX = DVARFLT_r_umbraShadowAccurateOcclusionThreshold;
    __asm { vmovss  cs:?rg@@3Ur_globals_t@@A.umbraAccurateOcclusionThreshold, xmm0; r_globals_t rg }
    if ( !DVARFLT_r_umbraShadowAccurateOcclusionThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_umbraShadowAccurateOcclusionThreshold") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    _RBX = DVARFLT_r_umbraMinObjectContribution;
    __asm { vmovss  cs:?rg@@3Ur_globals_t@@A.umbraShadowAccurateOcclusionThreshold, xmm0; r_globals_t rg }
    if ( !DVARFLT_r_umbraMinObjectContribution && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_umbraMinObjectContribution") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    v32 = DVARFLT_r_sceneResMinContributionScale;
    __asm { vmovss  cs:?rg@@3Ur_globals_t@@A.umbraMinObjectContribution, xmm0; r_globals_t rg }
    if ( !DVARFLT_r_sceneResMinContributionScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneResMinContributionScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v32);
    __asm
    {
      vmovss  xmm0, cs:?rg@@3Ur_globals_t@@A.umbraMinObjectContribution; r_globals_t rg
      vmulss  xmm1, xmm0, dword ptr [rbx+28h]
    }
    _RBX = DVARFLT_r_umbraMinShadowObjectContribution;
    __asm { vmovss  cs:?rg@@3Ur_globals_t@@A.umbraMinObjectContribution, xmm1; r_globals_t rg }
    if ( !DVARFLT_r_umbraMinShadowObjectContribution && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_umbraMinShadowObjectContribution") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    v37 = DVARBOOL_r_showReactiveMotionSModels;
    __asm { vmovss  cs:?rg@@3Ur_globals_t@@A.umbraMinShadowObjectContribution, xmm0; r_globals_t rg }
    if ( !DVARBOOL_r_showReactiveMotionSModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_showReactiveMotionSModels") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v37);
    v38 = !v37->current.enabled;
    v39 = DVARBOOL_r_showSplinedSModels;
    rg.hideReactiveMotionSModels = v38;
    if ( !DVARBOOL_r_showSplinedSModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_showSplinedSModels") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v39);
    v38 = !v39->current.enabled;
    _RBX = DVARFLT_r_vertexDeformCutOffDist;
    rg.hideSplinedModels = v38;
    if ( DVARFLT_r_vertexDeformCutOffDist )
    {
      Dvar_CheckFrontendServerThread(DVARFLT_r_vertexDeformCutOffDist);
      __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    }
    else
    {
      __asm { vmovss  xmm0, cs:__real@44000000 }
    }
    _RBX = DVARFLT_r_vertexDeformFadeDist;
    __asm { vmovss  cs:?rg@@3Ur_globals_t@@A.vertexDeformCutOffDist, xmm0; r_globals_t rg }
    if ( DVARFLT_r_vertexDeformFadeDist )
    {
      Dvar_CheckFrontendServerThread(DVARFLT_r_vertexDeformFadeDist);
      __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    }
    else
    {
      __asm { vmovss  xmm0, cs:__real@43800000 }
    }
    _RBX = DVARFLT_r_tessellationFactor;
    __asm { vmovss  cs:?rg@@3Ur_globals_t@@A.vertexDeformFadeDist, xmm0; r_globals_t rg }
    if ( DVARFLT_r_tessellationFactor )
    {
      Dvar_CheckFrontendServerThread(DVARFLT_r_tessellationFactor);
      __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    }
    else
    {
      __asm { vxorps  xmm0, xmm0, xmm0 }
    }
    _RBX = DVARFLT_r_tessellationCutoffDistance;
    __asm { vmovss  cs:?rg@@3Ur_globals_t@@A.tessellationFactor, xmm0; r_globals_t rg }
    if ( DVARFLT_r_tessellationCutoffDistance )
    {
      Dvar_CheckFrontendServerThread(DVARFLT_r_tessellationCutoffDistance);
      __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    }
    else
    {
      __asm { vmovss  xmm0, cs:__real@44700000 }
    }
    _RBX = DVARFLT_r_tessellationCutoffFalloff;
    __asm { vmovss  cs:?rg@@3Ur_globals_t@@A.tessellationCutoffDistance, xmm0; r_globals_t rg }
    if ( DVARFLT_r_tessellationCutoffFalloff )
    {
      Dvar_CheckFrontendServerThread(DVARFLT_r_tessellationCutoffFalloff);
      __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    }
    else
    {
      __asm { vmovss  xmm0, cs:__real@43a00000 }
    }
    _RBX = DVARFLT_r_st_lodDistanceScale;
    __asm { vmovss  cs:?rg@@3Ur_globals_t@@A.tessellationCutoffFalloff, xmm0; r_globals_t rg }
    if ( DVARFLT_r_st_lodDistanceScale )
    {
      Dvar_CheckFrontendServerThread(DVARFLT_r_st_lodDistanceScale);
      __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    }
    else
    {
      __asm { vmovss  xmm0, cs:__real@3f800000 }
    }
    v52 = DVARINT_sm_firstForceCacheSModelPartition;
    __asm { vmovss  cs:?rg@@3Ur_globals_t@@A.stLodDistanceScale, xmm0; r_globals_t rg }
    if ( !DVARINT_sm_firstForceCacheSModelPartition || (v53 = R_CheckDvarModified(DVARINT_sm_firstForceCacheSModelPartition), v52 = DVARINT_sm_firstForceCacheSModelPartition, rg.needSunShadowCacheFlush = 1, !v53) )
      rg.needSunShadowCacheFlush = 0;
    if ( v52 )
    {
      Dvar_CheckFrontendServerThread(v52);
      unsignedInt = v52->current.unsignedInt;
    }
    else
    {
      unsignedInt = 3;
    }
    v55 = DVARINT_r_compressedSunShadowFiltering;
    rg.firstForceCacheSModelPartition = unsignedInt;
    if ( DVARINT_r_compressedSunShadowFiltering )
    {
      Dvar_CheckFrontendServerThread(DVARINT_r_compressedSunShadowFiltering);
      v56 = v55->current.unsignedInt;
    }
    else
    {
      v56 = 0;
    }
    _RBX = DVARFLT_r_compressedSunShadowFilteringMaxRadius;
    rg.compressedSunShadowFiltering = v56;
    if ( DVARFLT_r_compressedSunShadowFilteringMaxRadius )
    {
      Dvar_CheckFrontendServerThread(DVARFLT_r_compressedSunShadowFilteringMaxRadius);
      __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    }
    else
    {
      __asm { vxorps  xmm0, xmm0, xmm0 }
    }
    _RBX = DVARFLT_r_compressedSunShadowFilteringFarZ;
    __asm { vmovss  cs:?rg@@3Ur_globals_t@@A.compressedSunShadowFilteringMaxRadius, xmm0; r_globals_t rg }
    if ( DVARFLT_r_compressedSunShadowFilteringFarZ )
    {
      Dvar_CheckFrontendServerThread(DVARFLT_r_compressedSunShadowFilteringFarZ);
      __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    }
    else
    {
      __asm { vxorps  xmm0, xmm0, xmm0 }
    }
    __asm { vmovss  cs:?rg@@3Ur_globals_t@@A.compressedSunShadowFilteringFarZ, xmm0; r_globals_t rg }
    if ( !rg.useCompressedSunShadow || (v61 = DVARBOOL_r_compressedSunShadowClipPlanes) == NULL || (Dvar_CheckFrontendServerThread(DVARBOOL_r_compressedSunShadowClipPlanes), v38 = !v61->current.enabled, rg.useCompressedSunShadowClipPlanes = 1, v38) )
      rg.useCompressedSunShadowClipPlanes = 0;
    _RBX = DVARFLT_sm_spotDistCull;
    if ( DVARFLT_sm_spotDistCull )
    {
      Dvar_CheckFrontendServerThread(DVARFLT_sm_spotDistCull);
      __asm { vmovss  xmm6, dword ptr [rbx+28h] }
    }
    _RBX = DCONST_DVARFLT_r_thermalFog;
    __asm
    {
      vmovss  cs:?rg@@3Ur_globals_t@@A.smSpotDistCull, xmm6; r_globals_t rg
      vmovaps xmm6, [rsp+68h+var_18]
    }
    rg.useNightAndThermalVisionComboTweak = r_nightAndThermalVisionTweak->current.enabled;
    _RAX = r_nightVisionExposureAdjustment;
    rg.useNightAndThermalVisionCombo = r_nightAndThermalVision->current.enabled;
    __asm { vmovss  xmm0, dword ptr [rax+28h] }
    _RAX = r_nightVisionMinExposureBias;
    __asm
    {
      vmovss  cs:?rg@@3Ur_globals_t@@A.nightVisionExposureAdjustment, xmm0; r_globals_t rg
      vmovss  xmm1, dword ptr [rax+28h]
    }
    _RAX = r_thermalAmbient;
    __asm
    {
      vmovss  cs:?rg@@3Ur_globals_t@@A.nightVisionMinExposureBias, xmm1; r_globals_t rg
      vmovss  xmm0, dword ptr [rax+28h]
    }
    _RAX = r_thermalAmbientReflection;
    __asm
    {
      vmovss  cs:?rg@@3Ur_globals_t@@A.thermalAmbient, xmm0; r_globals_t rg
      vmovss  xmm1, dword ptr [rax+28h]
    }
    _RAX = r_thermalRadiationMin;
    __asm
    {
      vmovss  cs:?rg@@3Ur_globals_t@@A.thermalAmbientReflection, xmm1; r_globals_t rg
      vmovss  xmm0, dword ptr [rax+28h]
    }
    _RAX = r_thermalRadiationMax;
    __asm
    {
      vmovss  cs:?rg@@3Ur_globals_t@@A.thermalRadiationMin, xmm0; r_globals_t rg
      vmovss  xmm1, dword ptr [rax+28h]
    }
    _RAX = r_lightIntensityScopeScreen;
    __asm
    {
      vmovss  cs:?rg@@3Ur_globals_t@@A.thermalRadiationMax, xmm1; r_globals_t rg
      vmovss  xmm0, dword ptr [rax+28h]
    }
    _RAX = r_thermalSurfaceNormalStrength;
    __asm
    {
      vmovss  cs:?rg@@3Ur_globals_t@@A.lightIntensityScopeScreen, xmm0; r_globals_t rg
      vmovss  xmm1, dword ptr [rax+28h]
    }
    _RAX = r_thermalCutoff;
    __asm
    {
      vmovss  cs:?rg@@3Ur_globals_t@@A.thermalSurfaceNormalStrength, xmm1; r_globals_t rg
      vmovss  xmm0, dword ptr [rax+28h]
      vmovss  cs:?rg@@3Ur_globals_t@@A.thermalCutoff, xmm0; r_globals_t rg
    }
    if ( !DCONST_DVARFLT_r_thermalFog && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_thermalFog") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    _RAX = r_thermalColdColor;
    v85 = DVARBOOL_r_gpuCullTriOcclusionUmbra;
    __asm
    {
      vmovss  cs:?rg@@3Ur_globals_t@@A.thermalFog, xmm0; r_globals_t rg
      vmovss  xmm0, dword ptr [rax+28h]
      vmovss  dword ptr cs:?rg@@3Ur_globals_t@@A.thermalColdColor, xmm0; r_globals_t rg
      vmovss  xmm1, dword ptr [rax+2Ch]
      vmovss  dword ptr cs:?rg@@3Ur_globals_t@@A.thermalColdColor+4, xmm1; r_globals_t rg
      vmovss  xmm0, dword ptr [rax+30h]
    }
    _RAX = r_thermalHotColor;
    __asm
    {
      vmovss  dword ptr cs:?rg@@3Ur_globals_t@@A.thermalColdColor+8, xmm0; r_globals_t rg
      vmovss  xmm0, dword ptr [rax+28h]
      vmovss  dword ptr cs:?rg@@3Ur_globals_t@@A.thermalHotColor, xmm0; r_globals_t rg
      vmovss  xmm1, dword ptr [rax+2Ch]
      vmovss  dword ptr cs:?rg@@3Ur_globals_t@@A.thermalHotColor+4, xmm1; r_globals_t rg
      vmovss  xmm0, dword ptr [rax+30h]
    }
    _RAX = r_thermalColorScale;
    __asm
    {
      vmovss  dword ptr cs:?rg@@3Ur_globals_t@@A.thermalHotColor+8, xmm0; r_globals_t rg
      vmovss  xmm1, dword ptr [rax+28h]
      vmovss  cs:?rg@@3Ur_globals_t@@A.thermalColorScale, xmm1; r_globals_t rg
    }
    _RAX = r_thermalSurfaceNormalStrengthMul;
    rg.useNVGScope = r_nvgScopeForce->current.enabled;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+28h]
      vmovss  cs:?rg@@3Ur_globals_t@@A.thermalSurfaceNormalStrengthMul, xmm0; r_globals_t rg
    }
    if ( DVARBOOL_r_gpuCullTriOcclusionUmbra )
    {
      Dvar_CheckFrontendServerThread(DVARBOOL_r_gpuCullTriOcclusionUmbra);
      v97 = v85->current.enabled;
    }
    else
    {
      v97 = 0;
    }
    v98 = DVARBOOL_r_gpuCullTriClusterOcclusionUmbra;
    if ( DVARBOOL_r_gpuCullTriClusterOcclusionUmbra )
    {
      Dvar_CheckFrontendServerThread(DVARBOOL_r_gpuCullTriClusterOcclusionUmbra);
      LOBYTE(v98) = v98->current.enabled;
    }
    if ( rg.gpuCullTriOcclusionUmbra != v97 || rg.gpuCullOcclusionUmbra != (_BYTE)v98 )
    {
      R_SyncRenderThread();
      rg.gpuCullTriOcclusionUmbra = v97;
      rg.gpuCullOcclusionUmbra = (char)v98;
    }
    v99 = DVARINT_r_waveWaterEnable;
    if ( DVARINT_r_waveWaterEnable )
    {
      Dvar_CheckFrontendServerThread(DVARINT_r_waveWaterEnable);
      v20 = v99->current.integer;
    }
    if ( rg.waveWaterEnable == v20 )
      goto LABEL_109;
    goto LABEL_108;
  }
  __asm
  {
    vmovss  xmm3, cs:__real@3f800000
    vmovss  xmm0, cs:__real@3e800000
    vmovss  xmm1, cs:__real@43800000
    vmovss  xmm4, cs:__real@44700000
  }
  v20 = 0;
  rg.umbraExclusive = 1;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vmovss  cs:?rg@@3Ur_globals_t@@A.sunSampleSizeNear, xmm0; r_globals_t rg
    vmovups xmm0, cs:__xmm@3f80000041a000004500000043800000
    vmovups xmmword ptr cs:?rg@@3Ur_globals_t@@A.umbraAccurateOcclusionThreshold, xmm0; r_globals_t rg
    vmovss  xmm0, cs:__real@44000000
    vmovss  cs:?rg@@3Ur_globals_t@@A.vertexDeformCutOffDist, xmm0; r_globals_t rg
    vmovss  xmm0, cs:__real@43a00000
    vmovss  cs:?rg@@3Ur_globals_t@@A.tessellationCutoffFalloff, xmm0; r_globals_t rg
    vxorps  xmm0, xmm0, xmm0
    vmovss  cs:?rg@@3Ur_globals_t@@A.vertexDeformFadeDist, xmm1; r_globals_t rg
    vxorps  xmm1, xmm1, xmm1
  }
  rg.lightGridSHBands = 0;
  __asm
  {
    vmovups xmmword ptr cs:?rg@@3Ur_globals_t@@A.nightVisionExposureAdjustment, xmm0; r_globals_t rg
    vmovups xmmword ptr cs:?rg@@3Ur_globals_t@@A.thermalCutoff, xmm0; r_globals_t rg
    vmovss  cs:?rg@@3Ur_globals_t@@A.specularColorScale, xmm3; r_globals_t rg
    vmovss  cs:?rg@@3Ur_globals_t@@A.diffuseColorScale, xmm3; r_globals_t rg
    vmovss  cs:?rg@@3Ur_globals_t@@A.sdfShadowPenumbra, xmm2; r_globals_t rg
    vmovss  cs:?rg@@3Ur_globals_t@@A.compressedSunShadowFilteringMaxRadius, xmm2; r_globals_t rg
    vmovss  cs:?rg@@3Ur_globals_t@@A.compressedSunShadowFilteringFarZ, xmm2; r_globals_t rg
    vmovss  cs:?rg@@3Ur_globals_t@@A.smSpotDistCull, xmm2; r_globals_t rg
    vmovss  cs:?rg@@3Ur_globals_t@@A.tessellationFactor, xmm2; r_globals_t rg
    vmovss  cs:?rg@@3Ur_globals_t@@A.tessellationCutoffDistance, xmm4; r_globals_t rg
    vmovss  cs:?rg@@3Ur_globals_t@@A.stLodDistanceScale, xmm3; r_globals_t rg
    vmovss  cs:?rg@@3Ur_globals_t@@A.thermalColorScale, xmm3; r_globals_t rg
    vmovss  cs:?rg@@3Ur_globals_t@@A.thermalSurfaceNormalStrengthMul, xmm3; r_globals_t rg
  }
  rg.FXAverageColorFunc = 2;
  rg.drawSun = 0;
  rg.sunCascadeSizeMultiplier[0] = 2;
  rg.sunCascadeSizeMultiplier[1] = 2;
  *(_QWORD *)&rg.roundRobinPrioritySpotShadows = 0i64;
  rg.spotCandidateLimit = 0;
  rg.needSunShadowCacheFlush = 0;
  rg.firstForceCacheSModelPartition = 3;
  rg.compressedSunShadowFiltering = 0;
  *(_WORD *)&rg.hideReactiveMotionSModels = 0;
  *(_WORD *)&rg.useNightAndThermalVisionComboTweak = 0;
  __asm
  {
    vmovups xmmword ptr cs:?rg@@3Ur_globals_t@@A.thermalRadiationMin, xmm1; r_globals_t rg
    vmovups xmmword ptr cs:?rg@@3Ur_globals_t@@A.thermalColdColor+8, xmm1; r_globals_t rg
  }
  if ( rg.gpuCullTriOcclusionUmbra || rg.gpuCullOcclusionUmbra )
  {
    R_SyncRenderThread();
    __asm { vmovss  xmm4, cs:?rg@@3Ur_globals_t@@A.tessellationCutoffDistance; r_globals_t rg }
    *(_WORD *)&rg.gpuCullTriOcclusionUmbra = 0;
  }
  if ( rg.waveWaterEnable )
  {
LABEL_108:
    R_SyncRenderThread();
    rg.waveWaterEnable = v20;
LABEL_109:
    __asm
    {
      vmovss  xmm0, cs:?rg@@3Ur_globals_t@@A.tessellationCutoffDistance; r_globals_t rg
      vmulss  xmm1, xmm0, xmm0
      vmovss  cs:?rg@@3Ur_globals_t@@A.tessellationCutoffDistanceSq, xmm1; r_globals_t rg
    }
    return;
  }
  __asm
  {
    vmulss  xmm0, xmm4, xmm4
    vmovss  cs:?rg@@3Ur_globals_t@@A.tessellationCutoffDistanceSq, xmm0; r_globals_t rg
  }
}

/*
==============
R_UpdateFrontEndDvarOptions_Shadows
==============
*/
void R_UpdateFrontEndDvarOptions_Shadows(bool splitscreen)
{
  const dvar_t *v5; 
  const dvar_t *v6; 
  const dvar_t *v7; 
  char enabled; 
  char v10; 
  const dvar_t *v11; 
  const dvar_t *v16; 
  int integer; 
  const dvar_t *v18; 
  void *retaddr; 

  _RAX = &retaddr;
  v5 = r_shadowTileResolution;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  rg.spotCandidateLimit = 64;
  rg.useSunShadow = 2;
  if ( R_CheckDvarModified(v5) || DVARINT_sm_sunDistantShadows && R_CheckDvarModified(DVARINT_sm_sunDistantShadows) )
    goto LABEL_9;
  v6 = DVARBOOL_sm_sunFarShadows;
  if ( DVARBOOL_sm_sunFarShadows )
  {
    if ( R_CheckDvarModified(DVARBOOL_sm_sunFarShadows) )
      goto LABEL_9;
    v6 = DVARBOOL_sm_sunFarShadows;
  }
  if ( DVARFLT_sm_sunShadowScaleSingleLQ )
  {
    v7 = Dvar_ValidatePtr(DVARFLT_sm_sunShadowScaleSingleLQ);
    if ( !R_CheckDvarModified(v7) )
    {
LABEL_10:
      v6 = DVARBOOL_sm_sunFarShadows;
      goto LABEL_11;
    }
LABEL_9:
    R_SyncRenderThread();
    goto LABEL_10;
  }
LABEL_11:
  rg.sunShadowOpaqueCascadeLimit = 3;
  rg.sunShadowOpaqueCascadeCount = 2;
  rg.useDistantSunShadowCenter = 0;
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vmovss  cs:?rg@@3Ur_globals_t@@A.sunShadowScaleSingleLQ, xmm6; r_globals_t rg
  }
  if ( v6 )
  {
    Dvar_CheckFrontendServerThread(v6);
    enabled = v6->current.enabled;
  }
  else
  {
    enabled = 1;
  }
  v10 = 0;
  if ( !splitscreen )
    goto LABEL_27;
  v11 = DCONST_DVARBOOL_r_splitscreenSingleSunShadow;
  if ( !DCONST_DVARBOOL_r_splitscreenSingleSunShadow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_splitscreenSingleSunShadow") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.enabled )
  {
    v10 = 1;
    rg.sunShadowOpaqueCascadeLimit = 1;
  }
  else
  {
LABEL_27:
    if ( enabled )
    {
      v16 = DVARINT_sm_sunDistantShadows;
      if ( DVARINT_sm_sunDistantShadows )
      {
        Dvar_CheckFrontendServerThread(DVARINT_sm_sunDistantShadows);
        integer = v16->current.integer;
        rg.useDistantSunShadowCenter = integer == 2;
        if ( integer )
        {
          rg.sunShadowOpaqueCascadeCount = 3;
          goto LABEL_26;
        }
      }
      goto LABEL_25;
    }
  }
  rg.sunShadowOpaqueCascadeCount = 1;
  if ( !v10 )
  {
LABEL_31:
    *(_DWORD *)&rg.firstCachedSunShadowPartition = 0;
    goto LABEL_32;
  }
  _RDI = DVARFLT_sm_sunShadowScaleSingleLQ;
  if ( DVARFLT_sm_sunShadowScaleSingleLQ )
  {
    Dvar_CheckFrontendServerThread(DVARFLT_sm_sunShadowScaleSingleLQ);
    __asm { vmovss  xmm6, dword ptr [rdi+28h] }
  }
  __asm { vmovss  cs:?rg@@3Ur_globals_t@@A.sunShadowScaleSingleLQ, xmm6; r_globals_t rg }
  if ( enabled )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm1, xmm0, xmm6
      vmovss  cs:?rg@@3Ur_globals_t@@A.sunShadowScaleSingleLQ, xmm1; r_globals_t rg
    }
  }
LABEL_25:
  if ( rg.sunShadowOpaqueCascadeCount <= 1 )
    goto LABEL_31;
LABEL_26:
  rg.firstCachedSunShadowPartition = LOWORD(rg.sunShadowOpaqueCascadeCount) - 2;
  rg.lastCachedSunShadowPartition = LOWORD(rg.sunShadowOpaqueCascadeCount) - 2 + 1;
LABEL_32:
  v18 = r_shadowTileResolution;
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
  if ( !r_shadowTileResolution && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  rg.shadowMapResolutionIndex = v18->current.integer;
}

/*
==============
R_UpdateFrontEndDvarOptions_Splitscreen
==============
*/
void R_UpdateFrontEndDvarOptions_Splitscreen(bool splitscreen)
{
  R_UpdateFrontEndDvarOptions_Shadows(splitscreen);
  rg.splitScreen = splitscreen;
  rg.ssrMode = r_ssrMode->current.color[0];
}

/*
==============
R_WaitAllAsyncComputeForSuspend
==============
*/
void R_WaitAllAsyncComputeForSuspend(void)
{
  unsigned int i; 
  GfxBackEndData *BackEndData; 

  for ( i = 0; i < 2; ++i )
  {
    BackEndData = R_GetBackEndData(i);
    if ( BackEndData->compute.asyncEnabled )
      R_WaitAsyncComputeForSuspend(BackEndData);
  }
}

/*
==============
R_WakeRenderer
==============
*/
void R_WakeRenderer(GfxBackEndData *data)
{
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 1635, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  Profile_BeginCSV(6);
  Sys_ProfBeginNamedEvent(0xFF404040, "wait renderer");
  Sys_ProcessWorkerCmdsWithTimeout(Sys_IsRendererReady, NULL);
  Sys_ProfEndNamedEvent();
  Profile_EndCSV(6);
  Sys_ProfBeginNamedEvent(0xFF404040, "wake renderer");
  Sys_WakeRenderer(data);
  if ( (data->drawType & 1) != 0 )
  {
    R_SyncGPURecordWakeBackend();
    R_GPU_RecordLatencyEvent(LATENCY_EVENT_WAKE_RENDERER, data->frameCount);
  }
  if ( r_glob.mainThreadHasOwnership && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 1650, ASSERT_TYPE_ASSERT, "(!r_glob.mainThreadHasOwnership)", (const char *)&queryFormat, "!r_glob.mainThreadHasOwnership") )
    __debugbreak();
  Sys_ProfEndNamedEvent();
}

