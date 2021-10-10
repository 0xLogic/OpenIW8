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
  GfxCmdDrawText2D *v17; 
  FontGlowStyle *LegacyFontStyle; 
  FontGlowStyle *v19; 
  double v20; 
  __int64 v21; 
  const Material *v22; 
  char *text; 
  int v24; 
  const char *v25; 
  size_t v26; 
  __int64 v27; 
  __int64 v28; 

  v12 = charCount;
  if ( charCount < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 3437, ASSERT_TYPE_ASSERT, "(charCount >= 0)", (const char *)&queryFormat, "charCount >= 0") )
    __debugbreak();
  if ( !textPool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 3438, ASSERT_TYPE_ASSERT, "(textPool)", (const char *)&queryFormat, "textPool") )
    __debugbreak();
  if ( !(_DWORD)v12 )
    return 0i64;
  v15 = truncate_cast<unsigned int,unsigned __int64>((v12 + 16) & 0xFFFFFFFFFFFFFFFCui64) + 136;
  CommandBufferVarSize_GfxCmdDrawText2D = R_GetCommandBufferVarSize_GfxCmdDrawText2D_(RC_DRAW_TEXT_2D, v15);
  v17 = CommandBufferVarSize_GfxCmdDrawText2D;
  if ( !CommandBufferVarSize_GfxCmdDrawText2D )
    return 0i64;
  CommandBufferVarSize_GfxCmdDrawText2D->font = font;
  CommandBufferVarSize_GfxCmdDrawText2D->rotation = 0.0;
  CommandBufferVarSize_GfxCmdDrawText2D->fontHeight = fontHeight;
  CommandBufferVarSize_GfxCmdDrawText2D->xScale = xScale;
  CommandBufferVarSize_GfxCmdDrawText2D->yScale = yScale;
  CommandBufferVarSize_GfxCmdDrawText2D->tracking = 0;
  CommandBufferVarSize_GfxCmdDrawText2D->maxChars = 0x7FFFFFFF;
  CommandBufferVarSize_GfxCmdDrawText2D->iconsMaterial = rgp.iconMaterial;
  CommandBufferVarSize_GfxCmdDrawText2D->renderFlags = 0;
  LegacyFontStyle = R_Font_GetLegacyFontStyle(style);
  v19 = LegacyFontStyle;
  if ( LegacyFontStyle )
  {
    *(__m256i *)&v17->glowStyle.glowMinDistance = *(__m256i *)&LegacyFontStyle->glowMinDistance;
    *(_OWORD *)&v17->glowStyle.outlineGlowMinDistance = *(_OWORD *)&LegacyFontStyle->outlineGlowMinDistance;
    v20 = *(double *)&LegacyFontStyle->outlineGlowColor.xyz.z;
    v17->renderFlags |= 0x10u;
    *(double *)&v17->glowStyle.outlineGlowColor.xyz.z = v20;
  }
  v21 = R_Font_UsePost(style) ? 8 : 0;
  if ( v19 )
  {
    v22 = *(Material **)((char *)rgp.fontGlowMaterial + v21);
  }
  else if ( FontCache_DoesGlyphUseDistanceField(fontHeight) )
  {
    v22 = *(Material **)((char *)rgp.fontSDFMaterial + v21);
  }
  else
  {
    v22 = *(Material **)((char *)rgp.fontMaterial + v21);
  }
  v17->fontMaterial = v22;
  v17->entry[0].x = x;
  v17->entry[0].y = y;
  Byte4PackVertexColor(color, v17->entry[0].color.array);
  Profile_Begin(182);
  text = v17->entry[0].text;
  v24 = poolSize - firstChar;
  v25 = &textPool[firstChar];
  if ( (int)v12 > v24 )
  {
    memcpy_0(text, v25, v24);
    text = &v17->entry[0].text[v24];
    v25 = textPool;
    v26 = (int)v12 - v24;
  }
  else
  {
    v26 = v12;
  }
  memcpy_0(text, v25, v26);
  Profile_EndInternal(NULL);
  v17->entry[0].text[v12] = 0;
  v17->totalByteSize = truncate_cast<unsigned short,unsigned int>(v15);
  v27 = -1i64;
  v28 = -1i64;
  do
    ++v28;
  while ( v17->entry[0].text[v28] );
  if ( v28 != v12 )
  {
    do
      ++v27;
    while ( v17->entry[0].text[v27] );
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 3479, ASSERT_TYPE_ASSERT, "( strlen( cmd->entry[0].text ) ) == ( charCount )", "%s == %s\n\t%i, %i", "strlen( cmd->entry[0].text )", "charCount", v27, v12) )
      __debugbreak();
  }
  VerifyGFXDrawText2DCmd(v17, "AddBaseDrawConsoleTextCmd");
  return v17;
}

/*
==============
AddBaseDrawTextCmd
==============
*/
GfxCmdDrawText2D *AddBaseDrawTextCmd(const char *text, int maxChars, GfxFont *font, Material *fontMaterial, const int fontHeight, float x, float y, float xScale, float yScale, char tracking, float rotation, const vec4_t *color, int cursorPos, char cursor, const FontGlowStyle *glowStyle, bool usePost, int allowGPadColor, int allowGPadAnySize, Material *iconsMaterial, bool requireUniqueCmd)
{
  GfxFont *v21; 
  int v22; 
  __int64 v25; 
  unsigned __int64 v26; 
  unsigned int v27; 
  int v30; 
  unsigned __int8 v31; 
  int v33; 
  unsigned __int8 v34; 
  int v36; 
  unsigned __int8 v37; 
  int v39; 
  unsigned __int8 v40; 
  Material *iconMaterial; 
  bool DoesGlyphUseDistanceField; 
  int v43; 
  int v44; 
  int v45; 
  const GfxCmdDrawText2D *lastCmd; 
  unsigned __int16 totalByteSize; 
  unsigned __int16 byteCount; 
  float *v49; 
  __int64 v50; 
  GfxCmdDrawText2D *CommandBufferVarSize_GfxCmdDrawText2D; 
  const GfxCmdDrawText2D *v52; 
  __int64 v53; 
  __int64 v54; 
  __int64 v55; 
  int additionalByteCount; 
  unsigned int v57; 
  unsigned int size; 
  int size_4; 
  GfxColor v60; 
  Material *iconsMateriala; 

  v21 = font;
  v22 = maxChars;
  if ( maxChars <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 3124, ASSERT_TYPE_ASSERT, "(maxChars > 0)", (const char *)&queryFormat, "maxChars > 0") )
    __debugbreak();
  if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 3125, ASSERT_TYPE_ASSERT, "(font)", (const char *)&queryFormat, "font") )
    __debugbreak();
  if ( !text )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 3126, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text") )
      __debugbreak();
    Com_PrintWarning(13, "WARNING: Parameter `const char *text` was passed in as a nullptr for a call to AddBaseDrawTextCmd.\n");
    return 0i64;
  }
  if ( !*text && cursorPos < 0 )
    return 0i64;
  R_TextValidatePrintable(text);
  v25 = -1i64;
  v26 = -1i64;
  do
    ++v26;
  while ( text[v26] );
  v57 = truncate_cast<unsigned int,unsigned __int64>(v26);
  v27 = truncate_cast<unsigned int,unsigned __int64>((v57 + 16i64) & 0xFFFFFFFFFFFFFFFCui64);
  additionalByteCount = v27;
  size = v27 + 136;
  _XMM6 = 0i64;
  __asm { vroundss xmm3, xmm6, xmm2, 1 }
  v30 = (int)*(float *)&_XMM3;
  if ( (int)*(float *)&_XMM3 > 255 )
    v30 = 255;
  v31 = v30;
  __asm { vroundss xmm1, xmm6, xmm3, 1 }
  if ( v30 < 0 )
    v31 = 0;
  v33 = (int)*(float *)&_XMM1;
  v60.array[0] = v31;
  if ( (int)*(float *)&_XMM1 > 255 )
    v33 = 255;
  v34 = v33;
  __asm { vroundss xmm1, xmm6, xmm3, 1 }
  if ( v33 < 0 )
    v34 = 0;
  v36 = (int)*(float *)&_XMM1;
  v60.array[1] = v34;
  if ( (int)*(float *)&_XMM1 > 255 )
    v36 = 255;
  v37 = v36;
  __asm { vroundss xmm1, xmm6, xmm3, 1 }
  if ( v36 < 0 )
    v37 = 0;
  v39 = (int)*(float *)&_XMM1;
  v60.array[2] = v37;
  if ( (int)*(float *)&_XMM1 > 255 )
    v39 = 255;
  v40 = v39;
  if ( v39 < 0 )
    v40 = 0;
  iconMaterial = iconsMaterial;
  v60.array[3] = v40;
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
      v27 = additionalByteCount;
      iconMaterial = iconsMateriala;
      if ( DoesGlyphUseDistanceField )
        fontMaterial = rgp.fontSDFMaterial[usePost];
      else
        fontMaterial = rgp.fontMaterial[usePost];
    }
    v21 = font;
  }
  v43 = (glowStyle != NULL ? 0x10 : 0) | 2;
  if ( cursorPos <= -1 )
    v43 = glowStyle != NULL ? 0x10 : 0;
  v44 = v43 | 0x1000;
  if ( !allowGPadColor )
    v44 = v43;
  v45 = v44 | 0x2000;
  if ( !allowGPadAnySize )
    v45 = v44;
  size_4 = v45;
  if ( !requireUniqueCmd )
  {
    lastCmd = (const GfxCmdDrawText2D *)s_cmdList->lastCmd;
    if ( lastCmd && lastCmd->header.id == 20 && v27 + lastCmd->header.byteCount < 0xFFFF && lastCmd->renderFlags == v45 && rotation == lastCmd->rotation && lastCmd->font == v21 && lastCmd->fontHeight == fontHeight && xScale == lastCmd->xScale && yScale == lastCmd->yScale && lastCmd->iconsMaterial == iconMaterial && lastCmd->fontMaterial == fontMaterial && (!glowStyle || !memcmp_0(glowStyle, &lastCmd->glowStyle, 0x38ui64)) && (cursorPos <= -1 || lastCmd->cursorPos == cursorPos && lastCmd->cursorLetter == cursor) )
    {
      totalByteSize = lastCmd->totalByteSize;
      byteCount = lastCmd->header.byteCount;
      if ( totalByteSize > byteCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 3196, ASSERT_TYPE_ASSERT, "( cmd->totalByteSize ) <= ( cmd->header.byteCount )", "%s <= %s\n\t%i, %i", "cmd->totalByteSize", "cmd->header.byteCount", totalByteSize, byteCount) )
        __debugbreak();
      if ( (lastCmd->totalByteSize & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 3197, ASSERT_TYPE_ASSERT, "(IsAligned( cmd->totalByteSize, GfxCmdDrawText2D::ENTRY_ALIGNMENT ))", (const char *)&queryFormat, "IsAligned( cmd->totalByteSize, GfxCmdDrawText2D::ENTRY_ALIGNMENT )") )
        __debugbreak();
      if ( R_GrowCommandBuffer(RC_DRAW_TEXT_2D, additionalByteCount) )
      {
        v49 = (float *)((char *)&lastCmd->header.id + lastCmd->totalByteSize);
        *v49 = x;
        v49[1] = y;
        v49[2] = *(float *)&v60.packed;
        Profile_Begin(182);
        memcpy_0(v49 + 3, text, v57 + 1);
        Profile_EndInternal(NULL);
        v50 = -1i64;
        do
          ++v50;
        while ( *((_BYTE *)v49 + v50 + 12) );
        if ( v50 != v57 )
        {
          do
            ++v25;
          while ( *((_BYTE *)v49 + v25 + 12) );
          LODWORD(v55) = v57;
          LODWORD(v54) = v25;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 3210, ASSERT_TYPE_ASSERT, "( strlen( newEntry->text ) ) == ( textLen )", "%s == %s\n\t%i, %i", "strlen( newEntry->text )", "textLen", v54, v55) )
            __debugbreak();
        }
        lastCmd->totalByteSize += truncate_cast<unsigned short,unsigned int>(additionalByteCount);
        VerifyGFXDrawText2DCmd(lastCmd, "AddBaseDrawTextCmd append");
        return (GfxCmdDrawText2D *)lastCmd;
      }
      return 0i64;
    }
    v22 = maxChars;
  }
  CommandBufferVarSize_GfxCmdDrawText2D = R_GetCommandBufferVarSize_GfxCmdDrawText2D_(RC_DRAW_TEXT_2D, size);
  v52 = CommandBufferVarSize_GfxCmdDrawText2D;
  if ( !CommandBufferVarSize_GfxCmdDrawText2D )
    return 0i64;
  CommandBufferVarSize_GfxCmdDrawText2D->maxChars = v22;
  CommandBufferVarSize_GfxCmdDrawText2D->fontMaterial = fontMaterial;
  CommandBufferVarSize_GfxCmdDrawText2D->rotation = rotation;
  CommandBufferVarSize_GfxCmdDrawText2D->font = font;
  CommandBufferVarSize_GfxCmdDrawText2D->fontHeight = fontHeight;
  CommandBufferVarSize_GfxCmdDrawText2D->tracking = tracking;
  CommandBufferVarSize_GfxCmdDrawText2D->iconsMaterial = iconsMateriala;
  CommandBufferVarSize_GfxCmdDrawText2D->renderFlags = size_4;
  CommandBufferVarSize_GfxCmdDrawText2D->xScale = xScale;
  CommandBufferVarSize_GfxCmdDrawText2D->yScale = yScale;
  if ( glowStyle )
    CommandBufferVarSize_GfxCmdDrawText2D->glowStyle = *glowStyle;
  if ( cursorPos > -1 )
  {
    CommandBufferVarSize_GfxCmdDrawText2D->cursorLetter = cursor;
    CommandBufferVarSize_GfxCmdDrawText2D->cursorPos = cursorPos;
  }
  CommandBufferVarSize_GfxCmdDrawText2D->entry[0].x = x;
  CommandBufferVarSize_GfxCmdDrawText2D->entry[0].y = y;
  CommandBufferVarSize_GfxCmdDrawText2D->entry[0].color = v60;
  Profile_Begin(182);
  memcpy_0(v52->entry[0].text, text, v57 + 1);
  Profile_EndInternal(NULL);
  v53 = -1i64;
  do
    ++v53;
  while ( v52->entry[0].text[v53] );
  if ( v53 != v57 )
  {
    do
      ++v25;
    while ( v52->entry[0].text[v25] );
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 3254, ASSERT_TYPE_ASSERT, "( strlen( cmd->entry[0].text ) ) == ( textLen )", "%s == %s\n\t%i, %i", "strlen( cmd->entry[0].text )", "textLen", v25, v57) )
      __debugbreak();
  }
  v52->totalByteSize = truncate_cast<unsigned short,unsigned int>(size);
  VerifyGFXDrawText2DCmd(v52, "AddBaseDrawTextCmd new");
  return (GfxCmdDrawText2D *)v52;
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
void R_AddCmdBlendSavedScreenShockBlurred(int fadeMsec, float viewX, float viewY, float viewWidth, float viewHeight, int clientID)
{
  float *CommandBufferInternal; 
  int v9; 

  if ( (unsigned int)clientID > 2 )
  {
    v9 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 5889, ASSERT_TYPE_ASSERT, "( 0 ) <= ( clientID ) && ( clientID ) <= ( 2 )", "clientID not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", clientID, 0i64, v9) )
      __debugbreak();
  }
  if ( fadeMsec > 0 )
  {
    CommandBufferInternal = (float *)R_GetCommandBufferInternal(RC_BLEND_SAVED_SCREEN_BLURRED, 0x1Cui64, 4ui64);
    if ( CommandBufferInternal )
    {
      CommandBufferInternal[5] = viewHeight;
      CommandBufferInternal[2] = viewX;
      CommandBufferInternal[3] = viewY;
      CommandBufferInternal[4] = viewWidth;
      *((_DWORD *)CommandBufferInternal + 1) = fadeMsec;
      *((_DWORD *)CommandBufferInternal + 6) = clientID;
    }
  }
}

/*
==============
R_AddCmdBlendSavedScreenShockFlashed
==============
*/
void R_AddCmdBlendSavedScreenShockFlashed(float intensityWhiteout, float intensityScreengrab, float viewX, float viewY, float viewWidth, float viewHeight, int clientID)
{
  float *CommandBufferInternal; 

  CommandBufferInternal = (float *)R_GetCommandBufferInternal(RC_BLEND_SAVED_SCREEN_FLASHED, 0x24ui64, 4ui64);
  if ( CommandBufferInternal )
  {
    CommandBufferInternal[6] = viewWidth;
    CommandBufferInternal[7] = viewHeight;
    CommandBufferInternal[2] = intensityWhiteout;
    CommandBufferInternal[3] = intensityScreengrab;
    CommandBufferInternal[4] = viewX;
    CommandBufferInternal[5] = viewY;
    *((_BYTE *)CommandBufferInternal + 4) = 0;
    *((_DWORD *)CommandBufferInternal + 8) = clientID;
  }
}

/*
==============
R_AddCmdBlendSavedScreenShockPhoto
==============
*/
void R_AddCmdBlendSavedScreenShockPhoto(float intensityScreengrab, float viewX, float viewY, float viewWidth, float viewHeight, int clientID)
{
  float *CommandBufferInternal; 

  CommandBufferInternal = (float *)R_GetCommandBufferInternal(RC_BLEND_SAVED_SCREEN_PHOTO, 0x20ui64, 4ui64);
  if ( CommandBufferInternal )
  {
    CommandBufferInternal[6] = viewHeight;
    CommandBufferInternal[2] = intensityScreengrab;
    CommandBufferInternal[3] = viewX;
    CommandBufferInternal[4] = viewY;
    CommandBufferInternal[5] = viewWidth;
    *((_BYTE *)CommandBufferInternal + 4) = 0;
    *((_DWORD *)CommandBufferInternal + 7) = clientID;
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
void R_AddCmdClearScreenSlow(int whichToClear, const vec4_t *color, float depth, unsigned __int8 stencil)
{
  float *CommandBufferInternal; 
  __int64 v8; 

  if ( !whichToClear && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 5849, ASSERT_TYPE_ASSERT, "(whichToClear)", (const char *)&queryFormat, "whichToClear") )
    __debugbreak();
  if ( (whichToClear & 0xFFFFFFC0) != 0 )
  {
    LODWORD(v8) = whichToClear;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 5850, ASSERT_TYPE_ASSERT, "( ( (whichToClear & ~GFX_CLEAR_ALL) == 0 ) )", "( whichToClear ) = %i", v8) )
      __debugbreak();
  }
  if ( (depth < 0.0 || depth > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 5851, ASSERT_TYPE_ASSERT, "( ( depth >= 0.0f && depth <= 1.0f ) )", "( depth ) = %g", depth) )
    __debugbreak();
  CommandBufferInternal = (float *)R_GetCommandBufferInternal(RC_CLEAR_SCREEN, 0x20ui64, 4ui64);
  if ( !CommandBufferInternal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 5855, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  *((_BYTE *)CommandBufferInternal + 4) = whichToClear;
  if ( (unsigned __int8)whichToClear != whichToClear && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 5858, ASSERT_TYPE_SANITY, "( cmd->whichToClear == whichToClear )", (const char *)&queryFormat, "cmd->whichToClear == whichToClear") )
    __debugbreak();
  CommandBufferInternal[6] = depth;
  *((_BYTE *)CommandBufferInternal + 5) = stencil;
  CommandBufferInternal[2] = color->v[0];
  CommandBufferInternal[3] = color->v[1];
  CommandBufferInternal[4] = color->v[2];
  CommandBufferInternal[5] = color->v[3];
  *((_BYTE *)CommandBufferInternal + 28) = 1;
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
void R_AddCmdDraw3DQuadPicST(const vec3_t *verts, float s0, float t0, float s1, float t1, const vec4_t *color, Material *material)
{
  void *CommandBufferInternal; 

  CommandBufferInternal = R_GetCommandBufferInternal(RC_DRAW_3D_QUAD_PIC_ST, 0x58ui64, 8ui64);
  if ( CommandBufferInternal )
  {
    *((_QWORD *)CommandBufferInternal + 1) = R_RenderCommandMaterial(material);
    *((_DWORD *)CommandBufferInternal + 4) = LODWORD(verts->v[0]);
    *((_DWORD *)CommandBufferInternal + 5) = LODWORD(verts->v[1]);
    *((_DWORD *)CommandBufferInternal + 6) = LODWORD(verts->v[2]);
    *((_DWORD *)CommandBufferInternal + 7) = LODWORD(verts[1].v[0]);
    *((_DWORD *)CommandBufferInternal + 8) = LODWORD(verts[1].v[1]);
    *((_DWORD *)CommandBufferInternal + 9) = LODWORD(verts[1].v[2]);
    *((_DWORD *)CommandBufferInternal + 10) = LODWORD(verts[2].v[0]);
    *((_DWORD *)CommandBufferInternal + 11) = LODWORD(verts[2].v[1]);
    *((_DWORD *)CommandBufferInternal + 12) = LODWORD(verts[2].v[2]);
    *((_DWORD *)CommandBufferInternal + 13) = LODWORD(verts[3].v[0]);
    *((_DWORD *)CommandBufferInternal + 14) = LODWORD(verts[3].v[1]);
    *((_DWORD *)CommandBufferInternal + 15) = LODWORD(verts[3].v[2]);
    *((float *)CommandBufferInternal + 16) = s0;
    *((float *)CommandBufferInternal + 17) = t0;
    *((float *)CommandBufferInternal + 18) = s1;
    *((float *)CommandBufferInternal + 19) = t1;
    Byte4PackVertexColor(color, (unsigned __int8 *)CommandBufferInternal + 80);
  }
}

/*
==============
R_AddCmdDraw3DStretchPicRotateST
==============
*/
void R_AddCmdDraw3DStretchPicRotateST(const vec3_t *verts, float centerS, float centerT, float scaleFinalS, float scaleFinalT, float minS, float maxS, float minT, float maxT, float angle, const vec4_t *color, Material *material)
{
  void *CommandBufferInternal; 
  double v14; 

  CommandBufferInternal = R_GetCommandBufferInternal(RC_3D_STRETCH_PIC_ROTATE_ST, 0x68ui64, 8ui64);
  if ( CommandBufferInternal )
  {
    *((_QWORD *)CommandBufferInternal + 1) = R_RenderCommandMaterial(material);
    *((_DWORD *)CommandBufferInternal + 4) = LODWORD(verts->v[0]);
    *((_DWORD *)CommandBufferInternal + 5) = LODWORD(verts->v[1]);
    *((_DWORD *)CommandBufferInternal + 6) = LODWORD(verts->v[2]);
    *((_DWORD *)CommandBufferInternal + 7) = LODWORD(verts[1].v[0]);
    *((_DWORD *)CommandBufferInternal + 8) = LODWORD(verts[1].v[1]);
    *((_DWORD *)CommandBufferInternal + 9) = LODWORD(verts[1].v[2]);
    *((_DWORD *)CommandBufferInternal + 10) = LODWORD(verts[2].v[0]);
    *((_DWORD *)CommandBufferInternal + 11) = LODWORD(verts[2].v[1]);
    *((_DWORD *)CommandBufferInternal + 12) = LODWORD(verts[2].v[2]);
    *((_DWORD *)CommandBufferInternal + 13) = LODWORD(verts[3].v[0]);
    *((_DWORD *)CommandBufferInternal + 14) = LODWORD(verts[3].v[1]);
    *((_DWORD *)CommandBufferInternal + 15) = LODWORD(verts[3].v[2]);
    *((float *)CommandBufferInternal + 19) = scaleFinalT;
    *((float *)CommandBufferInternal + 21) = maxS;
    *((float *)CommandBufferInternal + 20) = minS;
    *((float *)CommandBufferInternal + 23) = maxT;
    *((float *)CommandBufferInternal + 16) = centerS;
    *((float *)CommandBufferInternal + 17) = centerT;
    *((float *)CommandBufferInternal + 18) = scaleFinalS;
    *((float *)CommandBufferInternal + 22) = minT;
    Byte4PackVertexColor(color, (unsigned __int8 *)CommandBufferInternal + 96);
    v14 = AngleNormalize360(angle);
    *((float *)CommandBufferInternal + 1) = *(float *)&v14;
  }
}

/*
==============
R_AddCmdDrawConsoleText
==============
*/
void R_AddCmdDrawConsoleText(const char *textPool, int poolSize, int firstChar, int charCount, GfxFont *font, float x, float y, float xScale, float yScale, const vec4_t *color, int style)
{
  R_TextHeight(font);
  _XMM0 = 0i64;
  __asm { vroundss xmm1, xmm0, xmm3, 1 }
  AddBaseDrawConsoleTextCmd(textPool, poolSize, firstChar, charCount, font, (int)*(float *)&_XMM1, x, y, xScale / yScale, 1.0, color, style);
}

/*
==============
R_AddCmdDrawFullScreenColoredQuad
==============
*/
void R_AddCmdDrawFullScreenColoredQuad(float s0, float t0, float s1, float t1, const vec4_t *color, Material *material)
{
  void *CommandBufferInternal; 
  const Material *v7; 

  CommandBufferInternal = R_GetCommandBufferInternal(RC_DRAW_FULL_SCREEN_COLORED_QUAD, 0x28ui64, 8ui64);
  if ( CommandBufferInternal )
  {
    v7 = R_RenderCommandMaterial(material);
    *((float *)CommandBufferInternal + 4) = s0;
    *((float *)CommandBufferInternal + 5) = t0;
    *((float *)CommandBufferInternal + 6) = s1;
    *((float *)CommandBufferInternal + 7) = t1;
    *((_QWORD *)CommandBufferInternal + 1) = v7;
    Byte4PackVertexColor(color, (unsigned __int8 *)CommandBufferInternal + 32);
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

  angles.v[0] = 0.0;
  angles.v[1] = 0.0;
  angles.v[2] = 0.0;
  position.v[0] = 0.0;
  position.v[1] = 0.0;
  position.v[2] = 0.0;
  R_AddCmdDrawLines(lineCount, width, 2u, 0, verts, 0, &position, &angles);
}

/*
==============
R_AddCmdDrawLines2D
==============
*/
void R_AddCmdDrawLines2D(unsigned __int16 lineCount, unsigned __int8 width, const GfxPointVertex *verts, bool doTransform, const vec3_t *position, const vec3_t *angles)
{
  double v6; 
  double v7; 
  vec3_t v8; 
  vec3_t v9; 

  v6 = *(double *)position->v;
  v9.v[2] = position->v[2];
  *(double *)v9.v = v6;
  v7 = *(double *)angles->v;
  v8.v[2] = angles->v[2];
  *(double *)v8.v = v7;
  R_AddCmdDrawLines(lineCount, width, 2u, 0, verts, doTransform, &v9, &v8);
}

/*
==============
R_AddCmdDrawLines3D
==============
*/
void R_AddCmdDrawLines3D(unsigned __int16 lineCount, unsigned __int8 width, bool depthTest, const GfxPointVertex *verts, bool doTransform, const vec3_t *position, const vec3_t *angles)
{
  double v7; 
  double v8; 
  vec3_t v9; 
  vec3_t v10; 

  v7 = *(double *)position->v;
  v10.v[2] = position->v[2];
  *(double *)v10.v = v7;
  v8 = *(double *)angles->v;
  v9.v[2] = angles->v[2];
  *(double *)v9.v = v8;
  R_AddCmdDrawLines(lineCount, width, 3u, depthTest, verts, doTransform, &v10, &v9);
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

  angles.v[0] = 0.0;
  angles.v[1] = 0.0;
  angles.v[2] = 0.0;
  position.v[0] = 0.0;
  position.v[1] = 0.0;
  position.v[2] = 0.0;
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
  int v7; 
  unsigned int v10; 
  float *v11; 
  signed __int64 v12; 
  __int64 v13; 
  float *v14; 
  float *v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  tmat33_t<vec3_t> axis; 

  v7 = lineCount;
  Profile_Begin(182);
  v10 = 2 * v7;
  if ( doTransform )
  {
    AnglesToAxis(angles, &axis);
    if ( v10 )
    {
      v11 = &verts->xyz.v[2];
      v12 = (char *)cmdVerts - (char *)verts;
      v13 = v10;
      do
      {
        v14 = v11 - 2;
        v15 = (float *)((char *)v11 + v12 - 8);
        if ( v11 - 2 == v15 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
          __debugbreak();
        v16 = axis.m[0].v[1];
        v17 = (float)((float)(axis.m[0].v[0] * *v14) + (float)(axis.m[1].v[0] * *(v11 - 1))) + (float)(axis.m[2].v[0] * *v11);
        v18 = axis.m[1].v[1];
        *v15 = v17;
        v19 = v16 * *v14;
        v20 = axis.m[0].v[2];
        v21 = (float)(v19 + (float)(v18 * *(v11 - 1))) + (float)(axis.m[2].v[1] * *v11);
        v22 = axis.m[1].v[2];
        *(float *)((char *)v11 + v12 - 4) = v21;
        v23 = (float)((float)(v20 * *v14) + (float)(v22 * *(v11 - 1))) + (float)(axis.m[2].v[2] * *v11);
        *(float *)((char *)v11 + v12) = v23;
        *v15 = v17 + position->v[0];
        *(float *)((char *)v11 + v12 - 4) = v21 + position->v[1];
        *(float *)((char *)v11 + v12) = v23 + position->v[2];
        *(float *)((char *)v11 + v12 + 4) = v11[1];
        v11 += 4;
        --v13;
      }
      while ( v13 );
    }
  }
  else
  {
    memcpy_0(cmdVerts, verts, 16i64 * v10);
  }
  Profile_EndInternal(NULL);
}

/*
==============
R_AddCmdDrawMouseCursor
==============
*/
void R_AddCmdDrawMouseCursor(float width, float height, const vec4_t *color, Material *material, int controllerIndex)
{
  void *CommandBufferInternal; 

  CommandBufferInternal = R_GetCommandBufferInternal(RC_DRAW_MOUSE_CURSOR, 0x20ui64, 8ui64);
  if ( CommandBufferInternal )
  {
    *((_QWORD *)CommandBufferInternal + 1) = R_RenderCommandMaterial(material);
    *((float *)CommandBufferInternal + 4) = width;
    *((float *)CommandBufferInternal + 5) = height;
    Byte4PackVertexColor(color, (unsigned __int8 *)CommandBufferInternal + 24);
    *((_DWORD *)CommandBufferInternal + 7) = controllerIndex;
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
void R_AddCmdDrawQuadPicST(const vec2_t *verts, float s0, float t0, float s1, float t1, const vec4_t *color, Material *material)
{
  void *CommandBufferInternal; 

  CommandBufferInternal = R_GetCommandBufferInternal(RC_DRAW_QUAD_PIC_ST, 0x48ui64, 8ui64);
  if ( CommandBufferInternal )
  {
    *((_QWORD *)CommandBufferInternal + 1) = R_RenderCommandMaterial(material);
    *((_DWORD *)CommandBufferInternal + 4) = LODWORD(verts->v[0]);
    *((_DWORD *)CommandBufferInternal + 5) = LODWORD(verts->v[1]);
    *((_DWORD *)CommandBufferInternal + 6) = LODWORD(verts[1].v[0]);
    *((_DWORD *)CommandBufferInternal + 7) = LODWORD(verts[1].v[1]);
    *((_DWORD *)CommandBufferInternal + 8) = LODWORD(verts[2].v[0]);
    *((_DWORD *)CommandBufferInternal + 9) = LODWORD(verts[2].v[1]);
    *((_DWORD *)CommandBufferInternal + 10) = LODWORD(verts[3].v[0]);
    *((_DWORD *)CommandBufferInternal + 11) = LODWORD(verts[3].v[1]);
    *((float *)CommandBufferInternal + 12) = s0;
    *((float *)CommandBufferInternal + 13) = t0;
    *((float *)CommandBufferInternal + 14) = s1;
    *((float *)CommandBufferInternal + 15) = t1;
    Byte4PackVertexColor(color, (unsigned __int8 *)CommandBufferInternal + 64);
  }
}

/*
==============
R_AddCmdDrawRect2D
==============
*/
void R_AddCmdDrawRect2D(float x, float y, float width, float height, const GfxColor *color, bool filled)
{
  GfxCmdDrawRect2D *lastCmd; 
  GfxCmdDrawRect2D *CommandBufferInternal; 

  lastCmd = (GfxCmdDrawRect2D *)s_cmdList->lastCmd;
  if ( lastCmd && lastCmd->header.id == 30 && (unsigned __int64)lastCmd->header.byteCount + 20 <= 0xFFFF && lastCmd->filled == filled )
  {
    if ( R_GrowCommandBuffer(RC_DRAW_RECT_2D, 20) )
      R_AddDrawRect2DEntry(lastCmd, x, y, width, height, color);
  }
  else
  {
    CommandBufferInternal = (GfxCmdDrawRect2D *)R_GetCommandBufferInternal(RC_DRAW_RECT_2D, 0x1Cui64, 4ui64);
    if ( CommandBufferInternal )
    {
      CommandBufferInternal->filled = filled;
      CommandBufferInternal->rectCount = 0;
      R_AddDrawRect2DEntry(CommandBufferInternal, x, y, width, height, color);
    }
  }
}

/*
==============
R_AddCmdDrawStretchPic
==============
*/
void R_AddCmdDrawStretchPic(float x, float y, float w, float h, float s0, float t0, float s1, float t1, const vec4_t *color, Material *material)
{
  const Material *v10; 
  void *CommandBufferInternal; 

  v10 = R_RenderCommandMaterial(material);
  CommandBufferInternal = R_GetCommandBufferInternal(RC_FIRST_NONCRITICAL, 0x38ui64, 8ui64);
  if ( CommandBufferInternal )
  {
    *((float *)CommandBufferInternal + 8) = s0;
    *((float *)CommandBufferInternal + 9) = t0;
    *((float *)CommandBufferInternal + 10) = s1;
    *((float *)CommandBufferInternal + 11) = t1;
    *((float *)CommandBufferInternal + 4) = x;
    *((float *)CommandBufferInternal + 5) = y;
    *((float *)CommandBufferInternal + 6) = w;
    *((float *)CommandBufferInternal + 7) = h;
    *((_QWORD *)CommandBufferInternal + 1) = v10;
    Byte4PackVertexColor(color, (unsigned __int8 *)CommandBufferInternal + 48);
  }
}

/*
==============
R_AddCmdDrawStretchPicFlipST
==============
*/
void R_AddCmdDrawStretchPicFlipST(float x, float y, float w, float h, float s0, float t0, float s1, float t1, const vec4_t *color, Material *material)
{
  const Material *v10; 
  void *CommandBufferInternal; 

  v10 = R_RenderCommandMaterial(material);
  CommandBufferInternal = R_GetCommandBufferInternal(RC_STRETCH_PIC_FLIP_ST, 0x38ui64, 8ui64);
  if ( CommandBufferInternal )
  {
    *((float *)CommandBufferInternal + 8) = s0;
    *((float *)CommandBufferInternal + 9) = t0;
    *((float *)CommandBufferInternal + 10) = s1;
    *((float *)CommandBufferInternal + 11) = t1;
    *((float *)CommandBufferInternal + 4) = x;
    *((float *)CommandBufferInternal + 5) = y;
    *((float *)CommandBufferInternal + 6) = w;
    *((float *)CommandBufferInternal + 7) = h;
    *((_QWORD *)CommandBufferInternal + 1) = v10;
    Byte4PackVertexColor(color, (unsigned __int8 *)CommandBufferInternal + 48);
  }
}

/*
==============
R_AddCmdDrawStretchPicRotateST
==============
*/
void R_AddCmdDrawStretchPicRotateST(const vec2_t *verts, float centerS, float centerT, float scaleFinalS, float scaleFinalT, float minS, float maxS, float minT, float maxT, float angle, const vec4_t *color, Material *material)
{
  void *CommandBufferInternal; 
  double v14; 

  CommandBufferInternal = R_GetCommandBufferInternal(RC_STRETCH_PIC_ROTATE_ST, 0x58ui64, 8ui64);
  if ( CommandBufferInternal )
  {
    *((_QWORD *)CommandBufferInternal + 1) = R_RenderCommandMaterial(material);
    *((_DWORD *)CommandBufferInternal + 4) = LODWORD(verts->v[0]);
    *((_DWORD *)CommandBufferInternal + 5) = LODWORD(verts->v[1]);
    *((_DWORD *)CommandBufferInternal + 6) = LODWORD(verts[1].v[0]);
    *((_DWORD *)CommandBufferInternal + 7) = LODWORD(verts[1].v[1]);
    *((_DWORD *)CommandBufferInternal + 8) = LODWORD(verts[2].v[0]);
    *((_DWORD *)CommandBufferInternal + 9) = LODWORD(verts[2].v[1]);
    *((_DWORD *)CommandBufferInternal + 10) = LODWORD(verts[3].v[0]);
    *((_DWORD *)CommandBufferInternal + 11) = LODWORD(verts[3].v[1]);
    *((float *)CommandBufferInternal + 15) = scaleFinalT;
    *((float *)CommandBufferInternal + 17) = maxS;
    *((float *)CommandBufferInternal + 16) = minS;
    *((float *)CommandBufferInternal + 19) = maxT;
    *((float *)CommandBufferInternal + 12) = centerS;
    *((float *)CommandBufferInternal + 13) = centerT;
    *((float *)CommandBufferInternal + 14) = scaleFinalS;
    *((float *)CommandBufferInternal + 18) = minT;
    Byte4PackVertexColor(color, (unsigned __int8 *)CommandBufferInternal + 80);
    v14 = AngleNormalize360(angle);
    *((float *)CommandBufferInternal + 1) = *(float *)&v14;
  }
}

/*
==============
R_AddCmdDrawStretchPicRotateXY
==============
*/
void R_AddCmdDrawStretchPicRotateXY(float x, float y, float w, float h, float s0, float t0, float s1, float t1, float angle, bool pivotTopLeft, bool applyPixelAspect, const vec4_t *color, Material *material)
{
  void *CommandBufferInternal; 
  const Material *v14; 
  double v15; 

  CommandBufferInternal = R_GetCommandBufferInternal(RC_STRETCH_PIC_ROTATE_XY, 0x40ui64, 8ui64);
  if ( CommandBufferInternal )
  {
    v14 = R_RenderCommandMaterial(material);
    *((float *)CommandBufferInternal + 8) = s0;
    *((float *)CommandBufferInternal + 9) = t0;
    *((float *)CommandBufferInternal + 10) = s1;
    *((float *)CommandBufferInternal + 11) = t1;
    *((float *)CommandBufferInternal + 4) = x;
    *((float *)CommandBufferInternal + 5) = y;
    *((float *)CommandBufferInternal + 6) = w;
    *((float *)CommandBufferInternal + 7) = h;
    *((_QWORD *)CommandBufferInternal + 1) = v14;
    Byte4PackVertexColor(color, (unsigned __int8 *)CommandBufferInternal + 48);
    v15 = AngleNormalize360(angle);
    *((_BYTE *)CommandBufferInternal + 56) &= ~1u;
    *((_BYTE *)CommandBufferInternal + 56) = (2 * applyPixelAspect) | (pivotTopLeft | *((_BYTE *)CommandBufferInternal + 56)) & 0xFD;
    *((float *)CommandBufferInternal + 13) = *(float *)&v15;
  }
}

/*
==============
R_AddCmdDrawText3DUI
==============
*/
void R_AddCmdDrawText3DUI(const char *text, GfxFont *font, Material *fontMaterial, const int fontHeight, const vec3_t *points, float xScale, float yScale, char tracking, const vec4_t *color, const FontDecodeStyle *decodeStyle, const FontGlowStyle *glowStyle, Material *iconsMaterial)
{
  size_t v16; 
  char *CommandBufferInternal; 
  char *v18; 
  __int128 v19; 
  __int128 v20; 
  __int128 v24; 
  __int128 v25; 
  double v29; 

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
    v16 = -1i64;
    do
      ++v16;
    while ( text[v16] );
    if ( ((v16 + 180) & 0xFFFFFFFFFFFFFFF8ui64) < 0xB0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2076, ASSERT_TYPE_ASSERT, "(AlignUp( size, alignof( T ) ) >= sizeof( T ))", (const char *)&queryFormat, "AlignUp( size, alignof( T ) ) >= sizeof( T )") )
      __debugbreak();
    CommandBufferInternal = (char *)R_GetCommandBufferInternal(RC_DRAW_TEXT_3D_UI, v16 + 173, 8ui64);
    v18 = CommandBufferInternal;
    if ( CommandBufferInternal )
    {
      *(vec3_t *)(CommandBufferInternal + 4) = points[3];
      *((float *)CommandBufferInternal + 4) = points[2].v[0] - points[3].v[0];
      *((float *)CommandBufferInternal + 5) = points[2].v[1] - points[3].v[1];
      *((float *)CommandBufferInternal + 6) = points[2].v[2] - points[3].v[2];
      *((float *)CommandBufferInternal + 7) = points[3].v[0] - points->v[0];
      *((float *)CommandBufferInternal + 8) = points[3].v[1] - points->v[1];
      *((float *)CommandBufferInternal + 9) = points[3].v[2] - points->v[2];
      v19 = *((unsigned int *)CommandBufferInternal + 4);
      v20 = v19;
      *(float *)&v20 = fsqrt((float)((float)(*(float *)&v19 * *(float *)&v19) + (float)(*((float *)CommandBufferInternal + 5) * *((float *)CommandBufferInternal + 5))) + (float)(*((float *)CommandBufferInternal + 6) * *((float *)CommandBufferInternal + 6)));
      _XMM4 = v20;
      __asm
      {
        vcmpless xmm0, xmm4, cs:__real@80000000
        vblendvps xmm0, xmm4, xmm7, xmm0
      }
      *((float *)CommandBufferInternal + 4) = *(float *)&v19 * (float)(1.0 / *(float *)&_XMM0);
      *((float *)CommandBufferInternal + 5) = (float)(1.0 / *(float *)&_XMM0) * *((float *)CommandBufferInternal + 5);
      *((float *)CommandBufferInternal + 6) = (float)(1.0 / *(float *)&_XMM0) * *((float *)CommandBufferInternal + 6);
      v24 = *((unsigned int *)CommandBufferInternal + 7);
      v25 = v24;
      *(float *)&v25 = fsqrt((float)((float)(*(float *)&v24 * *(float *)&v24) + (float)(*((float *)CommandBufferInternal + 8) * *((float *)CommandBufferInternal + 8))) + (float)(*((float *)CommandBufferInternal + 9) * *((float *)CommandBufferInternal + 9)));
      _XMM4 = v25;
      __asm
      {
        vcmpless xmm0, xmm4, cs:__real@80000000
        vblendvps xmm0, xmm4, xmm7, xmm0
      }
      *((float *)CommandBufferInternal + 7) = *(float *)&v24 * (float)(1.0 / *(float *)&_XMM0);
      *((float *)CommandBufferInternal + 8) = (float)(1.0 / *(float *)&_XMM0) * *((float *)CommandBufferInternal + 8);
      *((float *)CommandBufferInternal + 9) = (float)(1.0 / *(float *)&_XMM0) * *((float *)CommandBufferInternal + 9);
      *((float *)CommandBufferInternal + 39) = xScale;
      *((float *)CommandBufferInternal + 40) = yScale;
      *((_QWORD *)CommandBufferInternal + 18) = font;
      *((_DWORD *)CommandBufferInternal + 38) = fontHeight;
      CommandBufferInternal[164] = tracking;
      *((_DWORD *)CommandBufferInternal + 42) = 0;
      Byte4PackVertexColor(color, (unsigned __int8 *)CommandBufferInternal + 136);
      *((_QWORD *)v18 + 15) = fontMaterial;
      *((_QWORD *)v18 + 16) = iconsMaterial;
      if ( glowStyle )
      {
        *(__m256i *)(v18 + 60) = *(__m256i *)&glowStyle->glowMinDistance;
        *(_OWORD *)(v18 + 92) = *(_OWORD *)&glowStyle->outlineGlowMinDistance;
        v29 = *(double *)&glowStyle->outlineGlowColor.xyz.z;
        *((_DWORD *)v18 + 42) |= 0x10u;
        *(double *)(v18 + 108) = v29;
      }
      if ( decodeStyle && decodeStyle->lastTextSet )
      {
        if ( decodeStyle->maxRandomCharsToDisplay )
        {
          *((_DWORD *)v18 + 42) |= 0x40u;
          *((FontDecodeStyle *)v18 + 2) = *decodeStyle;
        }
      }
      Profile_Begin(182);
      memcpy_0(v18 + 172, text, v16);
      Profile_EndInternal(NULL);
      v18[v16 + 172] = 0;
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
  AddBaseDrawTextCmd(text, maxChars, font, NULL, fontHeight, x, y, xScale, yScale, 0, rotation, color, -1, 0, NULL, 0, 0, 0, NULL, 0);
}

/*
==============
R_AddCmdDrawText
==============
*/
void R_AddCmdDrawText(const char *text, int maxChars, GfxFont *font, const int fontHeight, float x, float y, float xScale, float yScale, float rotation, const vec4_t *color, const FontGlowStyle *glowStyle, bool usePost)
{
  AddBaseDrawTextCmd(text, maxChars, font, NULL, fontHeight, x, y, xScale, yScale, 0, rotation, color, -1, 0, glowStyle, usePost, 0, 0, NULL, 0);
}

/*
==============
R_AddCmdDrawText
==============
*/
void R_AddCmdDrawText(const char *text, int maxChars, GfxFont *font, Material *fontMaterial, const int fontHeight, float x, float y, float xScale, float yScale, char tracking, float rotation, const vec4_t *color, const FontGlowStyle *glowStyle, bool usePost, int allowGPadColor, int allowGPadAnySize, Material *iconsMaterial)
{
  AddBaseDrawTextCmd(text, maxChars, font, fontMaterial, fontHeight, x, y, xScale, yScale, tracking, rotation, color, -1, 0, glowStyle, usePost, allowGPadColor, allowGPadAnySize, iconsMaterial, 0);
}

/*
==============
R_AddCmdDrawTextInSpace
==============
*/
void R_AddCmdDrawTextInSpace(const char *text, GfxFont *font, const float size, const vec3_t *org, const vec3_t *xDir, const vec3_t *yDir, const vec4_t *color)
{
  size_t v10; 
  char *CommandBufferInternal; 
  char *v12; 

  if ( !text && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 3380, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text") )
    __debugbreak();
  if ( *text )
  {
    v10 = -1i64;
    do
      ++v10;
    while ( text[v10] );
    if ( ((v10 + 68) & 0xFFFFFFFFFFFFFFF8ui64) < 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2076, ASSERT_TYPE_ASSERT, "(AlignUp( size, alignof( T ) ) >= sizeof( T ))", (const char *)&queryFormat, "AlignUp( size, alignof( T ) ) >= sizeof( T )") )
      __debugbreak();
    CommandBufferInternal = (char *)R_GetCommandBufferInternal(RC_DRAW_TEXT_3D_IN_SPACE, v10 + 61, 8ui64);
    v12 = CommandBufferInternal;
    if ( CommandBufferInternal )
    {
      *((_DWORD *)CommandBufferInternal + 2) = LODWORD(org->v[0]);
      *((_DWORD *)CommandBufferInternal + 3) = LODWORD(org->v[1]);
      *((_DWORD *)CommandBufferInternal + 4) = LODWORD(org->v[2]);
      *((const float *)CommandBufferInternal + 1) = size;
      *((_QWORD *)CommandBufferInternal + 3) = font;
      *(vec3_t *)(CommandBufferInternal + 32) = *xDir;
      *(vec3_t *)(CommandBufferInternal + 44) = *yDir;
      Byte4PackVertexColor(color, (unsigned __int8 *)CommandBufferInternal + 56);
      Profile_Begin(182);
      memcpy_0(v12 + 60, text, v10);
      Profile_EndInternal(NULL);
      v12[v10 + 60] = 0;
    }
  }
}

/*
==============
R_AddCmdDrawTextWithCursor
==============
*/
void R_AddCmdDrawTextWithCursor(const char *text, int maxChars, GfxFont *font, Material *fontMaterial, const int fontHeight, float x, float y, float xScale, float yScale, char tracking, float rotation, const vec4_t *color, const FontGlowStyle *glowStyle, bool usePost, int cursorPos, char cursor, int allowGPadColor, int allowGPadAnySize, Material *iconsMaterial)
{
  AddBaseDrawTextCmd(text, maxChars, font, fontMaterial, fontHeight, x, y, xScale, yScale, tracking, rotation, color, cursorPos, cursor, glowStyle, usePost, allowGPadColor, allowGPadAnySize, iconsMaterial, 0);
}

/*
==============
R_AddCmdDrawTextWithEffects
==============
*/
void R_AddCmdDrawTextWithEffects(const char *text, int maxChars, GfxFont *font, Material *fontMaterial, const int fontHeight, float x, float y, float xScale, float yScale, char tracking, float rotation, const vec4_t *color, const FontDecodeStyle *decodeStyle, const FontGlowStyle *glowStyle, bool usePost, Material *iconsMaterial, bool tintIcons)
{
  GfxCmdDrawText2D *v17; 

  v17 = AddBaseDrawTextCmd(text, maxChars, font, fontMaterial, fontHeight, x, y, xScale, yScale, tracking, rotation, color, -1, 0, glowStyle, usePost, tintIcons, 0, iconsMaterial, 1);
  if ( v17 && decodeStyle && decodeStyle->lastTextSet )
  {
    if ( decodeStyle->maxRandomCharsToDisplay )
    {
      v17->renderFlags |= 0x40u;
      v17->decodeStyle = *decodeStyle;
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

  angles.v[0] = 0.0;
  angles.v[1] = 0.0;
  angles.v[2] = 0.0;
  position.v[0] = 0.0;
  position.v[1] = 0.0;
  position.v[2] = 0.0;
  R_AddCmdDrawTriangles(materialHandle, techType, 2u, indexCount, indices, vertexCount, xyzw, normal, 0, color, st, 0, &position, &angles);
}

/*
==============
R_AddCmdDrawTriangles2D
==============
*/
void R_AddCmdDrawTriangles2D(Material *materialHandle, MaterialTechniqueType techType, unsigned __int16 indexCount, const unsigned __int16 *indices, unsigned __int16 vertexCount, const vec4_t *xyzw, const vec3_t *normal, const GfxColor color, const vec2_t *st)
{
  unsigned __int8 v9[4]; 
  vec3_t angles; 
  vec3_t position; 

  *(GfxColor *)v9 = color;
  angles.v[0] = 0.0;
  angles.v[1] = 0.0;
  angles.v[2] = 0.0;
  position.v[0] = 0.0;
  position.v[1] = 0.0;
  position.v[2] = 0.0;
  R_AddCmdDrawTriangles(materialHandle, techType, 2u, indexCount, indices, vertexCount, xyzw, normal, 1, (const unsigned __int8 (*)[4])v9, st, 0, &position, &angles);
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

  angles.v[0] = 0.0;
  angles.v[1] = 0.0;
  angles.v[2] = 0.0;
  position.v[0] = 0.0;
  position.v[1] = 0.0;
  position.v[2] = 0.0;
  R_AddCmdDrawTriangles(materialHandle, techType, 3u, indexCount, indices, vertexCount, xyzw, normal, 0, color, st, 0, &position, &angles);
}

/*
==============
R_AddCmdDrawTriangles3D
==============
*/
void R_AddCmdDrawTriangles3D(Material *materialHandle, MaterialTechniqueType techType, unsigned __int16 indexCount, const unsigned __int16 *indices, unsigned __int16 vertexCount, const vec4_t *xyzw, const vec3_t *normal, const unsigned __int8 (*color)[4], const vec2_t *st, bool doTransform, const vec3_t *position, const vec3_t *angles)
{
  double v12; 
  double v13; 
  vec3_t v14; 
  vec3_t v15; 

  v12 = *(double *)position->v;
  v15.v[2] = position->v[2];
  *(double *)v15.v = v12;
  v13 = *(double *)angles->v;
  v14.v[2] = angles->v[2];
  *(double *)v14.v = v13;
  R_AddCmdDrawTriangles(materialHandle, techType, 3u, indexCount, indices, vertexCount, xyzw, normal, 0, color, st, doTransform, &v15, &v14);
}

/*
==============
R_AddCmdDrawTriangles3D
==============
*/
void R_AddCmdDrawTriangles3D(Material *materialHandle, MaterialTechniqueType techType, unsigned __int16 indexCount, const unsigned __int16 *indices, unsigned __int16 vertexCount, const vec4_t *xyzw, const vec3_t *normal, const GfxColor color, const vec2_t *st)
{
  unsigned __int8 v9[4]; 
  vec3_t angles; 
  vec3_t position; 

  *(GfxColor *)v9 = color;
  angles.v[0] = 0.0;
  angles.v[1] = 0.0;
  angles.v[2] = 0.0;
  position.v[0] = 0.0;
  position.v[1] = 0.0;
  position.v[2] = 0.0;
  R_AddCmdDrawTriangles(materialHandle, techType, 3u, indexCount, indices, vertexCount, xyzw, normal, 1, (const unsigned __int8 (*)[4])v9, st, 0, &position, &angles);
}

/*
==============
R_AddCmdDrawTriangles3D
==============
*/
void R_AddCmdDrawTriangles3D(Material *materialHandle, MaterialTechniqueType techType, unsigned __int16 indexCount, const unsigned __int16 *indices, unsigned __int16 vertexCount, const vec4_t *xyzw, const vec3_t *normal, const GfxColor color, const vec2_t *st, bool doTransform, const vec3_t *position, const vec3_t *angles)
{
  double v12; 
  double v13; 
  unsigned __int8 v14[4]; 
  vec3_t v15; 
  vec3_t v16; 

  *(GfxColor *)v14 = color;
  v12 = *(double *)position->v;
  v16.v[2] = position->v[2];
  *(double *)v16.v = v12;
  v13 = *(double *)angles->v;
  v15.v[2] = angles->v[2];
  *(double *)v15.v = v13;
  R_AddCmdDrawTriangles(materialHandle, techType, 3u, indexCount, indices, vertexCount, xyzw, normal, 1, (const unsigned __int8 (*)[4])v14, st, doTransform, &v16, &v15);
}

/*
==============
R_AddCmdDrawTriangles
==============
*/
void R_AddCmdDrawTriangles(Material *materialHandle, MaterialTechniqueType techType, unsigned __int8 dimensions, unsigned __int16 indexCount, const unsigned __int16 *indices, unsigned __int16 vertexCount, const vec4_t *xyzw, const vec3_t *normal, bool singleColor, const unsigned __int8 (*color)[4], const vec2_t *st, bool doTransform, const vec3_t *position, const vec3_t *angles)
{
  const Material *v16; 
  const MaterialTechniqueSet *techniqueSet; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int v20; 
  double v21; 
  double v22; 
  GfxCmdDrawTriangles *CommandBufferVarSize_GfxCmdDrawTriangles; 
  GfxCmdDrawTriangles *v24; 
  GfxCmdDrawTriangles *v25; 
  __int64 v26; 
  float *v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float *v34; 
  float *v35; 
  __int64 v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  int v42; 
  __int64 v43; 
  _DWORD *v44; 
  unsigned int v45; 
  unsigned int v48; 
  unsigned int Size; 
  unsigned int Size_4; 
  vec3_t v51; 
  vec3_t v52; 
  void *v53; 
  void *v54; 
  void *v55; 
  Material *v56; 
  tmat33_t<vec3_t> axis; 

  v55 = (void *)indices;
  v53 = (void *)color;
  v54 = (void *)st;
  *(_QWORD *)v51.v = angles;
  v56 = materialHandle;
  *(_QWORD *)v52.v = normal;
  v16 = R_RenderCommandMaterial(materialHandle);
  if ( !v16 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 6364, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 464, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
      __debugbreak();
  }
  if ( !v16->techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 465, ASSERT_TYPE_ASSERT, "( ( material->techniqueSet ) )", "( material->name ) = %s", v16->name) )
    __debugbreak();
  techniqueSet = v16->techniqueSet;
  if ( !techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 515, ASSERT_TYPE_ASSERT, "(techSet)", (const char *)&queryFormat, "techSet") )
    __debugbreak();
  if ( Material_TechSetHasTechnique(techniqueSet, techType) )
  {
    v18 = 2 * ((indexCount + 1) & 0xFFFFFFFE);
    v19 = 16 * vertexCount;
    Size = 12 * vertexCount;
    Size_4 = v19 + 24 + Size;
    v48 = 4 * vertexCount + Size_4;
    v20 = v18 + 8 * vertexCount + v48;
    if ( v20 <= 0xFFFF )
    {
      CommandBufferVarSize_GfxCmdDrawTriangles = R_GetCommandBufferVarSize_GfxCmdDrawTriangles_(RC_DRAW_TRIANGLES, v20);
      v24 = CommandBufferVarSize_GfxCmdDrawTriangles;
      if ( CommandBufferVarSize_GfxCmdDrawTriangles )
      {
        CommandBufferVarSize_GfxCmdDrawTriangles->material = v16;
        CommandBufferVarSize_GfxCmdDrawTriangles->techType = techType;
        CommandBufferVarSize_GfxCmdDrawTriangles->dimensions = dimensions;
        CommandBufferVarSize_GfxCmdDrawTriangles->indexCount = indexCount;
        CommandBufferVarSize_GfxCmdDrawTriangles->vertexCount = vertexCount;
        Profile_Begin(182);
        v25 = v24 + 1;
        if ( doTransform )
        {
          AnglesToAxis(*(const vec3_t **)v51.v, &axis);
          if ( vertexCount )
          {
            v26 = vertexCount;
            v27 = &xyzw->v[2];
            do
            {
              v25 = (GfxCmdDrawTriangles *)((char *)v25 + 16);
              v28 = *(v27 - 2);
              v29 = *(v27 - 1);
              v30 = *v27;
              v27 += 4;
              v31 = (float)((float)((float)(v29 * axis.m[1].v[0]) + (float)(v28 * axis.m[0].v[0])) + (float)(v30 * axis.m[2].v[0])) + position->v[0];
              v32 = (float)((float)((float)(v29 * axis.m[1].v[1]) + (float)(v28 * axis.m[0].v[1])) + (float)(v30 * axis.m[2].v[1])) + position->v[1];
              v33 = (float)((float)((float)(v29 * axis.m[1].v[2]) + (float)(v28 * axis.m[0].v[2])) + (float)(v30 * axis.m[2].v[2])) + position->v[2];
              *(_DWORD *)&v25[-1].vertexCount = 1065353216;
              *(float *)&v25[-1].dimensions = v33;
              *(float *)&v25[-1].material = v31;
              *((float *)&v25[-1].material + 1) = v32;
              --v26;
            }
            while ( v26 );
          }
        }
        else
        {
          memcpy_0(&v24[1], xyzw, v19);
        }
        if ( *(_QWORD *)v52.v )
        {
          v34 = (float *)((char *)&v24[1].header.id + v19);
          if ( doTransform )
          {
            if ( vertexCount )
            {
              v35 = (float *)(*(_QWORD *)v52.v + 8i64);
              v36 = vertexCount;
              do
              {
                v34 += 3;
                v37 = *(v35 - 2);
                v38 = *(v35 - 1);
                v39 = *v35;
                v35 += 3;
                v40 = (float)((float)(v38 * axis.m[1].v[0]) + (float)(v37 * axis.m[0].v[0])) + (float)(v39 * axis.m[2].v[0]);
                v41 = (float)((float)(v38 * axis.m[1].v[1]) + (float)(v37 * axis.m[0].v[1])) + (float)(v39 * axis.m[2].v[1]);
                *(v34 - 1) = (float)((float)(v38 * axis.m[1].v[2]) + (float)(v37 * axis.m[0].v[2])) + (float)(v39 * axis.m[2].v[2]);
                *(v34 - 3) = v40;
                *(v34 - 2) = v41;
                --v36;
              }
              while ( v36 );
            }
          }
          else
          {
            memcpy_0(v34, *(const void **)v52.v, Size);
          }
        }
        if ( v53 )
        {
          if ( singleColor )
          {
            if ( vertexCount )
            {
              v42 = *(_DWORD *)v53;
              v43 = vertexCount;
              v44 = (_DWORD *)((char *)&v24->header.id + Size_4);
              while ( v43 )
              {
                *v44++ = v42;
                --v43;
              }
            }
          }
          else
          {
            memcpy_0((char *)v24 + Size_4, v53, 4 * (unsigned int)vertexCount);
          }
        }
        v45 = 8 * vertexCount;
        if ( v54 )
          memcpy_0((char *)v24 + v48, v54, v45);
        memcpy_0((char *)&v24->header + 4 * vertexCount + v45 + Size_4, v55, v18);
        Profile_EndInternal(NULL);
      }
    }
    else
    {
      v21 = **(double **)v51.v;
      v52.v[2] = *(float *)(*(_QWORD *)v51.v + 8i64);
      *(double *)v52.v = v21;
      v22 = *(double *)position->v;
      v51.v[2] = position->v[2];
      *(double *)v51.v = v22;
      R_AddCmdDrawTriangles_Split(v56, techType, dimensions, indexCount, (const unsigned __int16 *)v55, vertexCount, xyzw, normal, singleColor, (const unsigned __int8 (*)[4])v53, (const vec2_t *)v54, doTransform, &v51, &v52);
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
  int v14; 
  _DWORD *m_ptr; 
  int v16; 
  int v17; 
  __int64 v18; 
  const unsigned __int8 (*v19)[4]; 
  unsigned __int16 v20; 
  _DWORD *v21; 
  __int64 i; 
  unsigned int v23; 
  int v24; 
  const unsigned __int16 *v25; 
  __int64 v26; 
  int v27; 
  int v28; 
  __int64 v29; 
  int v30; 
  int v31; 
  __int64 v32; 
  int v33; 
  Material *defaultMaterial; 
  __int64 v35; 
  int v36; 
  int v37; 
  unsigned __int64 v38; 
  _QWORD *CommandBufferInternal; 
  _QWORD *v40; 
  char *Value; 
  int *v42; 
  _QWORD *v43; 
  char *v44; 
  __int64 v45; 
  unsigned __int64 v46; 
  ThreadContext CurrentThreadContext; 
  float *v48; 
  float *v49; 
  vec2_t *v50; 
  _BYTE *v51; 
  int *v52; 
  __int64 v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  __int64 v59; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  _WORD *v66; 
  __int64 v67; 
  __int64 v68; 
  __int64 v69; 
  int v71; 
  unsigned int v72; 
  int v73; 
  int v74; 
  unsigned int v75; 
  unsigned int v77; 
  unsigned int v78; 
  int *v79; 
  _QWORD *v80; 
  __int64 v81; 
  _DWORD *v83; 
  __int64 v84; 
  Mem_LargeLocal v85; 
  Mem_LargeLocal v86; 
  tmat33_t<vec3_t> axis; 

  v14 = indexCount;
  Mem_LargeLocal::Mem_LargeLocal(&v86, 0x40000ui64, "IndexMappingsArray srcIndexToDestIndex");
  m_ptr = v86.m_ptr;
  v83 = v86.m_ptr;
  Mem_LargeLocal::Mem_LargeLocal(&v85, 0x40000ui64, "IndexMappingsArray destIndexToSrcIndex");
  v79 = (int *)v85.m_ptr;
  v16 = 0;
  v73 = 0;
  v17 = v14;
  v74 = v14;
  if ( v14 )
  {
    v18 = 0i64;
    v81 = 0i64;
    v19 = color;
    do
    {
      v20 = 0;
      v21 = m_ptr;
      for ( i = 0x10000i64; i; --i )
        *v21++ = -1;
      v23 = 24;
      v24 = v16;
      v71 = v16;
      v84 = v18;
      if ( v16 < v17 )
      {
        v25 = &indices[v18 + 2];
        do
        {
          v26 = *(v25 - 2);
          v27 = m_ptr[v26];
          v28 = 46;
          if ( v27 != -1 )
            v28 = 6;
          v29 = *(v25 - 1);
          v30 = v28 + 40;
          if ( m_ptr[v29] != -1 )
            v30 = v28;
          v31 = v30 + 40;
          if ( m_ptr[*v25] != -1 )
            v31 = v30;
          v23 += v31;
          if ( v23 > 0xFFF7 )
            break;
          if ( v27 == -1 )
          {
            m_ptr[v26] = v20;
            v79[v20++] = *(v25 - 2);
            LOWORD(v29) = *(v25 - 1);
          }
          if ( m_ptr[(unsigned __int16)v29] == -1 )
          {
            m_ptr[(unsigned __int16)v29] = v20;
            v79[v20++] = *(v25 - 1);
          }
          v32 = *v25;
          if ( m_ptr[v32] == -1 )
          {
            m_ptr[v32] = v20;
            v79[v20++] = *v25;
          }
          v16 += 3;
          v18 += 3i64;
          v25 += 3;
        }
        while ( v16 < v74 );
        v81 = v18;
        v73 = v16;
        v19 = color;
        v24 = v71;
      }
      v33 = v16 - v24;
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
      v35 = v20;
      v36 = 16 * v20;
      v72 = v36 + 24;
      v37 = 12 * v20;
      v78 = v37 + v36 + 24;
      v77 = v78 + 4 * v20;
      v75 = v78 + v37;
      v38 = (int)(v78 + v37 + 2 * ((v33 + 1) & 0xFFFFFFFE));
      if ( ((v38 + 7) & 0xFFFFFFFFFFFFFFF8ui64) < 0x18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2076, ASSERT_TYPE_ASSERT, "(AlignUp( size, alignof( T ) ) >= sizeof( T ))", (const char *)&queryFormat, "AlignUp( size, alignof( T ) ) >= sizeof( T )") )
        __debugbreak();
      CommandBufferInternal = R_GetCommandBufferInternal(RC_DRAW_TRIANGLES, v38, 8ui64);
      v40 = CommandBufferInternal;
      v80 = CommandBufferInternal;
      if ( !CommandBufferInternal )
        break;
      CommandBufferInternal[1] = defaultMaterial;
      *((_DWORD *)CommandBufferInternal + 1) = techType;
      *((_BYTE *)CommandBufferInternal + 16) = dimensions;
      if ( v33 >= 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 6249, ASSERT_TYPE_ASSERT, "(destIndexCount < 0xffff)", (const char *)&queryFormat, "destIndexCount < 0xffff") )
        __debugbreak();
      if ( (v33 < 0 || (unsigned int)v33 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v33, "signed", v33) )
        __debugbreak();
      *((_WORD *)v40 + 9) = v33;
      *((_WORD *)v40 + 10) = v20;
      Value = (char *)Sys_GetValue(0);
      v42 = (int *)(Value + 9376);
      if ( (unsigned int)(*((_DWORD *)Value + 2344) + 1) >= 3 )
      {
        LODWORD(v69) = 3;
        LODWORD(v68) = *((_DWORD *)Value + 2344) + 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v68, v69) )
          __debugbreak();
      }
      if ( (unsigned int)++*v42 >= 3 )
      {
        LODWORD(v69) = 3;
        LODWORD(v68) = *v42;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v68, v69) )
          __debugbreak();
      }
      v43 = Value + 2088;
      v44 = Value + 40;
      if ( *v43 < (unsigned __int64)v44 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
        __debugbreak();
      *v43 += 8i64;
      if ( *v43 >= (unsigned __int64)v43 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
        __debugbreak();
      *(_QWORD *)*v43 = v42;
      if ( *v43 <= (unsigned __int64)v44 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
        __debugbreak();
      v45 = *v42;
      v46 = __rdtsc();
      v42[v45 + 2] = v46;
      if ( Sys_HasValidCurrentThreadContext() )
        CurrentThreadContext = Sys_GetCurrentThreadContext();
      else
        CurrentThreadContext = THREAD_CONTEXT_COUNT;
      CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 182, NULL, 0);
      v48 = (float *)(v40 + 3);
      v49 = (float *)((char *)v40 + v72);
      v50 = (vec2_t *)((char *)v80 + v77);
      v51 = (char *)v80 + v78;
      AnglesToAxis(angles, &axis);
      if ( (_DWORD)v35 )
      {
        v52 = v79;
        v53 = v35;
        do
        {
          if ( doTransform )
          {
            v54 = xyzw[*v52].v[0];
            v55 = xyzw[*v52].v[1];
            v56 = xyzw[*v52].v[2];
            v57 = (float)((float)((float)(v54 * axis.m[0].v[1]) + (float)(v55 * axis.m[1].v[1])) + (float)(v56 * axis.m[2].v[1])) + position->v[1];
            v58 = (float)((float)((float)(v54 * axis.m[0].v[2]) + (float)(v55 * axis.m[1].v[2])) + (float)(v56 * axis.m[2].v[2])) + position->v[2];
            *v48 = (float)((float)((float)(v54 * axis.m[0].v[0]) + (float)(v55 * axis.m[1].v[0])) + (float)(v56 * axis.m[2].v[0])) + position->v[0];
            v48[1] = v57;
            v48[2] = v58;
            v48[3] = 1.0;
          }
          else
          {
            *(vec4_t *)v48 = xyzw[*v52];
          }
          v48 += 4;
          if ( normal )
          {
            v59 = *v52;
            if ( doTransform )
            {
              v60 = normal[v59].v[0];
              v61 = normal[v59].v[1];
              v62 = normal[v59].v[2];
              v63 = (float)((float)(v60 * axis.m[0].v[1]) + (float)(v61 * axis.m[1].v[1])) + (float)(v62 * axis.m[2].v[1]);
              v64 = (float)(v60 * axis.m[0].v[2]) + (float)(v61 * axis.m[1].v[2]);
              v65 = v62 * axis.m[2].v[2];
              *v49 = (float)((float)(v60 * axis.m[0].v[0]) + (float)(v61 * axis.m[1].v[0])) + (float)(v62 * axis.m[2].v[0]);
              v49[1] = v63;
              v49[2] = v64 + v65;
            }
            else
            {
              *v49 = normal[v59].v[0];
              v49[1] = normal[*v52].v[1];
              v49[2] = normal[*v52].v[2];
            }
            v49 += 3;
          }
          if ( st )
            *v50++ = st[*v52];
          if ( v19 )
          {
            if ( singleColor )
            {
              *v51 = *(_BYTE *)v19;
              v51[1] = (*v19)[1];
              v51[2] = (*v19)[2];
              v51[3] = (*v19)[3];
            }
            else
            {
              *v51 = v19[*v52][0];
              v51[1] = v19[*v52][1];
              v51[2] = v19[*v52][2];
              v51[3] = v19[*v52][3];
            }
            v51 += 4;
          }
          ++v52;
          --v53;
        }
        while ( v53 );
        m_ptr = v83;
      }
      v66 = (_WORD *)((char *)v80 + v75);
      v67 = v84;
      v18 = v81;
      if ( v84 < v81 )
      {
        do
          *v66++ = m_ptr[indices[v67++]];
        while ( v67 < v81 );
        v19 = color;
      }
      Profile_EndInternal(NULL);
      v16 = v73;
      v17 = v74;
    }
    while ( v73 < v74 );
  }
  Mem_LargeLocal::~Mem_LargeLocal(&v85);
  Mem_LargeLocal::~Mem_LargeLocal(&v86);
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
void R_AddCmdSaveScreenSection(float viewX, float viewY, float viewWidth, float viewHeight, int clientID)
{
  float *CommandBufferInternal; 

  if ( (unsigned int)clientID > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 5871, ASSERT_TYPE_ASSERT, "( 0 ) <= ( clientID ) && ( clientID ) <= ( 2 )", "clientID not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", clientID, 0i64, 2) )
    __debugbreak();
  CommandBufferInternal = (float *)R_GetCommandBufferInternal(RC_SAVE_SCREEN_SECTION, 0x18ui64, 4ui64);
  if ( !CommandBufferInternal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 5875, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  CommandBufferInternal[1] = viewX;
  CommandBufferInternal[2] = viewY;
  CommandBufferInternal[3] = viewWidth;
  CommandBufferInternal[4] = viewHeight;
  *((_DWORD *)CommandBufferInternal + 5) = clientID;
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
void R_AddCmdSetFirstUIMask(float maskX, float maskY, float maskWidth, float maskHeight, float maskRotation, float alphaScale, float alphaOffset, float maskUMin, float maskVMin, float maskUMax, float maskVMax, const vec2_t *viewportSize, GfxImage *image)
{
  GfxCmdSetUIMask *CommandBufferInternal; 

  CommandBufferInternal = (GfxCmdSetUIMask *)R_GetCommandBufferInternal(RC_SET_FIRST_UI_MASK, 0x30ui64, 8ui64);
  if ( CommandBufferInternal )
    R_SetUIMaskCommandParams(CommandBufferInternal, maskX, maskY, maskWidth, maskHeight, maskRotation, alphaScale, alphaOffset, maskUMin, maskVMin, maskUMax, maskVMax, viewportSize, image);
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
void R_AddCmdSetSecondUIMask(float maskX, float maskY, float maskWidth, float maskHeight, float maskRotation, float alphaScale, float alphaOffset, float maskUMin, float maskVMin, float maskUMax, float maskVMax, const vec2_t *viewportSize, GfxImage *image)
{
  GfxCmdSetUIMask *CommandBufferInternal; 

  CommandBufferInternal = (GfxCmdSetUIMask *)R_GetCommandBufferInternal(RC_SET_SECOND_UI_MASK, 0x30ui64, 8ui64);
  if ( CommandBufferInternal )
    R_SetUIMaskCommandParams(CommandBufferInternal, maskX, maskY, maskWidth, maskHeight, maskRotation, alphaScale, alphaOffset, maskUMin, maskVMin, maskUMax, maskVMax, viewportSize, image);
}

/*
==============
R_AddCmdSetUIBlur
==============
*/
void R_AddCmdSetUIBlur(const bool enabled, const float scale)
{
  const float *CommandBufferInternal; 

  CommandBufferInternal = (const float *)R_GetCommandBufferInternal(RC_SET_UI_BLUR, 8ui64, 4ui64);
  if ( CommandBufferInternal )
  {
    if ( enabled && frontEndDataOut->viewInfoCount )
      CommandBufferInternal[1] = scale;
    else
      CommandBufferInternal[1] = 0.0;
  }
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
  char *CommandBufferInternal; 

  CommandBufferInternal = (char *)R_GetCommandBufferInternal(RC_SET_UI_COLOR_MATRIX, 0x28ui64, 4ui64);
  if ( CommandBufferInternal )
  {
    *(__m256i *)(CommandBufferInternal + 4) = *(__m256i *)matrix->m[0].v;
    *((_DWORD *)CommandBufferInternal + 9) = LODWORD(matrix->m[2].v[2]);
  }
}

/*
==============
R_AddCmdSetUIColorOp
==============
*/
void R_AddCmdSetUIColorOp(const unsigned __int8 op, const float param)
{
  const float *CommandBufferInternal; 

  CommandBufferInternal = (const float *)R_GetCommandBufferInternal(RC_SET_UI_COLOR_OP, 0xCui64, 4ui64);
  if ( CommandBufferInternal )
  {
    CommandBufferInternal[2] = param;
    *((_BYTE *)CommandBufferInternal + 4) = op;
  }
}

/*
==============
R_AddCmdSetUIGlitch
==============
*/
void R_AddCmdSetUIGlitch(const unsigned __int8 effectIntensity, const unsigned __int8 blockWidth, const unsigned __int8 blockHeight, const unsigned __int8 distortRange, const float maskPitch)
{
  const float *CommandBufferInternal; 

  CommandBufferInternal = (const float *)R_GetCommandBufferInternal(RC_SET_UI_GLITCH, 0xCui64, 4ui64);
  if ( CommandBufferInternal )
  {
    CommandBufferInternal[2] = maskPitch;
    *((_BYTE *)CommandBufferInternal + 4) = effectIntensity;
    *((_BYTE *)CommandBufferInternal + 5) = blockWidth;
    *((_BYTE *)CommandBufferInternal + 6) = blockHeight;
    *((_BYTE *)CommandBufferInternal + 7) = distortRange;
  }
}

/*
==============
R_AddCmdSetUIPixelGrid
==============
*/
void R_AddCmdSetUIPixelGrid(const unsigned __int8 blockWidth, const unsigned __int8 blockHeight, const unsigned __int8 gutterWidth, const unsigned __int8 gutterHeight, const float contrast)
{
  const float *CommandBufferInternal; 

  CommandBufferInternal = (const float *)R_GetCommandBufferInternal(RC_SET_UI_PIXEL_GRID, 0xCui64, 4ui64);
  if ( CommandBufferInternal )
  {
    CommandBufferInternal[2] = contrast;
    *((_BYTE *)CommandBufferInternal + 4) = blockWidth;
    *((_BYTE *)CommandBufferInternal + 5) = blockHeight;
    *((_BYTE *)CommandBufferInternal + 6) = gutterWidth;
    *((_BYTE *)CommandBufferInternal + 7) = gutterHeight;
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
void R_AddCmdUISetPixelShapeParams(GfxPixelShapeType pixelShapeType, float innerRadius, float outerRadius)
{
  float *CommandBufferInternal; 

  if ( pixelShapeType != GFX_PIXEL_SHAPE_TYPE_CIRCLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 6598, ASSERT_TYPE_ASSERT, "(pixelShapeType == GFX_PIXEL_SHAPE_TYPE_CIRCLE)", (const char *)&queryFormat, "pixelShapeType == GFX_PIXEL_SHAPE_TYPE_CIRCLE") )
    __debugbreak();
  CommandBufferInternal = (float *)R_GetCommandBufferInternal(RC_SET_UI_PIXEL_SHAPE_PARAMS, 0xCui64, 4ui64);
  CommandBufferInternal[1] = innerRadius;
  CommandBufferInternal[2] = outerRadius;
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
void R_AddDrawRect2DEntry(GfxCmdDrawRect2D *cmd, float x, float y, float width, float height, const GfxColor *color)
{
  __int64 rectCount; 
  unsigned __int64 v8; 

  rectCount = cmd->rectCount;
  cmd->rects[rectCount].x = x;
  cmd->rects[rectCount].y = y;
  cmd->rects[rectCount].width = width;
  cmd->rects[rectCount].height = height;
  cmd->rects[rectCount].color = *color;
  v8 = 20i64 * ++cmd->rectCount + 8;
  if ( v8 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned __int16)v8, "unsigned", v8) )
    __debugbreak();
  if ( cmd->header.byteCount < (unsigned __int16)v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 5998, ASSERT_TYPE_ASSERT, "(cmd->header.byteCount >= truncate_cast<GfxCmdHeaderSize_t>( sizeof( GfxCmdDrawRect2D ) + ( cmd->rectCount - 1 ) * sizeof( GfxCmdDrawRect2D::Rect ) ))", (const char *)&queryFormat, "cmd->header.byteCount >= truncate_cast<GfxCmdHeaderSize_t>( sizeof( GfxCmdDrawRect2D ) + ( cmd->rectCount - 1 ) * sizeof( GfxCmdDrawRect2D::Rect ) )") )
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
  R_RT_ColorHandle sceneColor; 
  R_RT_DepthHandle sceneDepth; 
  R_RT_Handle packedStencil; 
  __int128 v14; 
  const GfxWrappedBuffer *exposureBuffer; 
  const void *v16; 
  __int64 v17; 
  __int64 v18; 
  GfxCmdBuf *v19; 
  GfxCmdBufContext v20; 
  GfxAsync2DRenderData data; 

  memset_0(&data.resources, 0, 0x80ui64);
  sceneColor = resources->sceneColor;
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
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&data.resources.universalClut = _XMM0;
  data.triList.resetStats = 0;
  data.gfxContext = *gfxContext;
  data.resources.displayColor = resources->displayColor;
  sceneDepth = resources->sceneDepth;
  data.resources.sceneColor = sceneColor;
  packedStencil = resources->packedStencil;
  data.resources.sceneDepth = sceneDepth;
  v14 = *(_OWORD *)&resources->universalClut;
  data.resources.packedStencil = packedStencil;
  exposureBuffer = resources->exposureBuffer;
  *(_OWORD *)&data.resources.universalClut = v14;
  data.resources.exposureBuffer = exposureBuffer;
  if ( receivePPFX )
  {
    v16 = viewInfo->displayCmds[3];
    v17 = 913320i64;
    v18 = 904194i64;
  }
  else
  {
    v16 = viewInfo->displayCmds[1];
    v17 = 904200i64;
    v18 = 904193i64;
  }
  v19 = (GfxCmdBuf *)((char *)gfxData + v17);
  RB_Async2D_InitContext(&data, (GfxCmdBuf *)((char *)gfxData + v17), receivePPFX);
  v20 = data.gfxContext;
  RB_ExecuteRenderCommandsLoop(&v20, v16, NULL);
  RB_Async2D_ShutdownContext(&data, v19);
  *((_BYTE *)&gfxData->mesh[0].indexCount + v18) = 0;
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
  rg.invViewScale = FLOAT_1_0;
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
  GfxCmdArray *v2; 
  unsigned __int64 usedCritical; 
  unsigned __int64 usedTotal; 
  __int64 v7; 
  float v8; 
  float v9; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  GfxRenderCommand v13; 

  v2 = s_cmdList;
  if ( renderCmd < RC_FIRST_NONCRITICAL )
  {
    usedCritical = s_cmdList->usedCritical;
    if ( usedCritical < 0x1E00 && bytes + usedCritical >= 0x1E00 && !s_cmdList->criticalWarnCount )
    {
      s_cmdList->criticalWarnCount = 1;
      Com_PrintWarning(8, "RENDERCOMMAND_CRITICAL_WARN_SIZE (%i bytes) reached\n", 7680i64);
      v2 = s_cmdList;
    }
  }
  usedTotal = v2->usedTotal;
  v7 = s_renderCmdWarnSize;
  if ( usedTotal < s_renderCmdWarnSize && bytes + usedTotal >= s_renderCmdWarnSize && !v2->warnCount )
  {
    v2->warnCount = 1;
    v8 = (float)v7;
    if ( v7 < 0 )
    {
      v9 = (float)v7;
      v8 = v9 + 1.8446744e19;
    }
    Com_PrintWarning(8, "RENDERCOMMAND_WARN_SIZE (%.0f KB) reached\n", (float)(v8 * 0.0009765625));
    v2 = s_cmdList;
  }
  v10 = v2->usedTotal;
  v11 = s_renderCmdBufferSize - v10;
  if ( renderCmd >= RC_FIRST_NONCRITICAL )
    v11 = v11 + v2->usedCritical - 0x2000;
  if ( bytes <= v11 )
    return 1;
  if ( renderCmd < RC_FIRST_NONCRITICAL )
  {
    v13 = renderCmd;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 1917, ASSERT_TYPE_ASSERT, "(renderCmd >= RC_FIRST_NONCRITICAL)", "%s\n\trc %i used %zu critical %zu bytes %zu", "renderCmd >= RC_FIRST_NONCRITICAL", v13, v10, v2->usedCritical, bytes) )
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
  int *p_pendingSize; 
  int v4; 
  int v6; 
  int v7; 
  signed int reserveSize; 
  unsigned int v11; 
  unsigned __int32 *p_offset; 
  int v14; 
  int v15; 
  __int64 v16; 
  __int64 v17; 
  unsigned __int32 constantPageOffset; 
  int v19; 
  signed __int32 v20; 

  constantBufferAllocations = state->constantBufferAllocations;
  if ( !constantBufferAllocations && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 855, ASSERT_TYPE_ASSERT, "(constantBufferAllocations)", (const char *)&queryFormat, "constantBufferAllocations") )
    __debugbreak();
  constantBufferInfo = constantBufferAllocations->constantBufferInfo;
  if ( !constantBufferAllocations->constantBufferInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 858, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  if ( constantBufferInfo->type >= (unsigned int)GFX_CONSTANT_BUFFER_INFO_COUNT )
  {
    LODWORD(v16) = constantBufferInfo->type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 860, ASSERT_TYPE_ASSERT, "(unsigned)( info->type ) < (unsigned)( GFX_CONSTANT_BUFFER_INFO_COUNT )", "info->type doesn't index GFX_CONSTANT_BUFFER_INFO_COUNT\n\t%i not in [0, %i)", v16, 2) )
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
    v19 = constantPageOffset % constantBufferInfo->linear.pageSize + constantBufferAllocations->reserveSize;
    if ( constantBufferAllocations->reserveSize + constantPageOffset <= constantBufferInfo->linear.testFailOffset )
    {
      if ( v19 < (signed int)constantBufferInfo->linear.pageSize )
      {
LABEL_35:
        constantBufferAllocations->constantLastCheckedOffset = constantPageOffset;
        return 1i64;
      }
      p_offset = (unsigned __int32 *)&constantBufferInfo->linear.offset;
      v14 = v19 / constantBufferInfo->linear.pageSize;
      while ( 1 )
      {
        constantPageOffset = *p_offset;
        v20 = v14 * constantBufferInfo->linear.pageSize + *p_offset;
        if ( v20 > (signed int)constantBufferInfo->linear.bufSize )
          break;
        if ( ((unsigned __int8)p_offset & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &constantBufferInfo->ring[0].bufSize + 1) )
          __debugbreak();
        if ( _InterlockedCompareExchange((volatile signed __int32 *)p_offset, v20, constantPageOffset) == constantPageOffset )
        {
          constantBufferAllocations->constantPageOffset = constantPageOffset;
          goto LABEL_35;
        }
      }
    }
    R_WarnOncePerFrame(R_WARN_CONSTANT_BUFFER_OVERFLOW);
    v15 = constantBufferInfo->linear.pageSize - 1;
    constantBufferAllocations->constantLastCheckedOffset = -1;
    constantBufferAllocations->constantPageOffset = v15;
    return 0i64;
  }
  else
  {
    p_pendingSize = &constantBufferInfo->ring[0].ringBuffer.pendingSize;
    v4 = 0;
    while ( 1 )
    {
      if ( *((_BYTE *)p_pendingSize + 2069) )
      {
        _XMM2 = (unsigned int)p_pendingSize[516];
        v6 = p_pendingSize[2];
        v7 = *p_pendingSize;
        reserveSize = constantBufferAllocations->reserveSize;
        __asm
        {
          vcmpeqss xmm1, xmm2, xmm6
          vblendvps xmm3, xmm2, xmm0, xmm1
        }
        if ( *p_pendingSize >= (int)(float)((float)v6 * *(float *)&_XMM3) )
          break;
        v11 = *(p_pendingSize - 2);
        if ( v11 >= v6 )
        {
          LODWORD(v17) = p_pendingSize[2];
          LODWORD(v16) = *(p_pendingSize - 2);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 783, ASSERT_TYPE_ASSERT, "(unsigned)( beginIndexReady ) < (unsigned)( bufSize )", "beginIndexReady doesn't index bufSize\n\t%i not in [0, %i)", v16, v17) )
            __debugbreak();
        }
        if ( (int)(v11 + reserveSize) > v6 )
          v7 += v6 - v11;
        if ( v6 - v7 < reserveSize )
          break;
      }
      ++v4;
      p_pendingSize += 532;
      if ( v4 )
        return 1i64;
    }
    return 0i64;
  }
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
double R_DebugShader_AdjustColorChannel(double x)
{
  double v1; 

  if ( *(float *)&x >= 0.0 )
  {
    HIDWORD(v1) = HIDWORD(x);
    *(float *)&v1 = *(float *)&x * 0.0039215689;
    if ( (float)(*(float *)&x * 0.0039215689) > 0.039280001 )
    {
      *(float *)&x = powf_0((float)(*(float *)&v1 * 0.94786733) + 0.052132703, 2.4000001);
    }
    else
    {
      *(float *)&v1 = *(float *)&v1 * 0.077399381;
      return v1;
    }
  }
  else
  {
    *(_QWORD *)&x = LODWORD(FLOAT_N1_0);
  }
  return x;
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
  R_RT_Handle v2; 
  R_RT_Handle result; 
  R_RT_Handle v4; 

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
  R_RT_GetGlobal(&v4, R_RENDERTARGET_DISPLAY_BUFFER_PREV_FRONTEND);
  if ( (result.m_surfaceID & 0x7FFF) != 0 )
    v2.m_surfaceID = result.m_surfaceID & 0x7FFF | 0x8000;
  else
    v2.m_surfaceID = 0;
  v2.m_tracking = result.m_tracking;
  g_R_RT_globals[9] = v2;
  if ( (v4.m_surfaceID & 0x7FFF) != 0 )
    v2.m_surfaceID = v4.m_surfaceID & 0x7FFF | 0x8000;
  else
    v2.m_surfaceID = 0;
  v2.m_tracking = v4.m_tracking;
  g_R_RT_globals[8] = v2;
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
  double v4; 
  double v5; 
  float bufSize; 
  unsigned int v7; 
  GfxConstantBufferInfoType type; 
  int v9; 

  if ( info->type >= (unsigned int)GFX_CONSTANT_BUFFER_INFO_COUNT )
  {
    v9 = 2;
    type = info->type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 901, ASSERT_TYPE_ASSERT, "(unsigned)( info->type ) < (unsigned)( GFX_CONSTANT_BUFFER_INFO_COUNT )", "info->type doesn't index GFX_CONSTANT_BUFFER_INFO_COUNT\n\t%i not in [0, %i)", type, v9) )
      __debugbreak();
  }
  if ( info->type )
  {
    v4 = I_random();
    if ( *(float *)&v4 >= r_randomFailConstantBuffer->current.value )
    {
      v7 = -1;
    }
    else
    {
      v5 = I_random();
      bufSize = (float)info->linear.bufSize;
      v7 = (int)(float)(*(float *)&v5 * bufSize);
    }
    info->linear.testFailOffset = v7;
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
  unsigned int *v8; 
  volatile unsigned int *address; 
  unsigned int (__fastcall *AddRef)(IGraphicsUnknown *); 
  const char *v11; 
  const char *v12; 
  int v13; 
  __int64 v14; 
  __int64 v15; 
  int v16; 
  int v17; 
  GfxBufferCreationContext v18; 

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
  v18.zoneName = (char *)&queryFormat.fmt + 3;
  context->constantBufferSize = v7;
  v18.objectName = "Async Compute Constant Buffer";
  R_InitComputeBufferState(&context->constantBuffer, v7, &v18);
  v8 = (unsigned int *)PMem_Alloc(4ui64, 0x40ui64, MEM_POOL_GPU_PRIVATE, PMEM_STACK_GAME, "Async Compute Memcpy Fence");
  context->memcpyFenceData = v8;
  *v8 = 0;
  if ( R_ProfIsEnabled() )
  {
    address = context->computeFence.address;
    AddRef = g_dx.d3d12device->m_pFunction[21].AddRef;
    if ( (_DWORD)v2 )
    {
      if ( ((unsigned int (__fastcall *)(ID3D12Device *, volatile unsigned int *, const wchar_t *))AddRef)(g_dx.d3d12device, address, L"Backend Compute CMP") == -1 )
      {
        v17 = ((__int64 (__fastcall *)(ID3D12Device *, volatile unsigned int *, const wchar_t *))g_dx.d3d12device->m_pFunction[21].AddRef)(g_dx.d3d12device, context->computeFence.address, L"Backend Compute CMP");
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 344, ASSERT_TYPE_ASSERT, "( 0xFFFFFFFFU ) != ( g_dx.d3d12device->RegisterCustomFenceLocationX( (D3D12_GPU_VIRTUAL_ADDRESS)context->computeFence.address, L\"Backend Compute CMP\" ) )", "%s != %s\n\t%i, %i", "0xFFFFFFFFU", "g_dx.d3d12device->RegisterCustomFenceLocationX( (D3D12_GPU_VIRTUAL_ADDRESS)context->computeFence.address, L\"Backend Compute CMP\" )", -1, v17) )
          __debugbreak();
      }
      if ( ((unsigned int (__fastcall *)(ID3D12Device *, volatile unsigned int *, const wchar_t *))g_dx.d3d12device->m_pFunction[21].AddRef)(g_dx.d3d12device, context->graphicsFence.address, L"Backend Compute GFX") == -1 )
      {
        LODWORD(v15) = ((__int64 (__fastcall *)(ID3D12Device *, volatile unsigned int *, const wchar_t *))g_dx.d3d12device->m_pFunction[21].AddRef)(g_dx.d3d12device, context->graphicsFence.address, L"Backend Compute GFX");
        LODWORD(v14) = -1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 345, ASSERT_TYPE_ASSERT, "( 0xFFFFFFFFU ) != ( g_dx.d3d12device->RegisterCustomFenceLocationX( (D3D12_GPU_VIRTUAL_ADDRESS)context->graphicsFence.address, L\"Backend Compute GFX\" ) )", "%s != %s\n\t%i, %i", "0xFFFFFFFFU", "g_dx.d3d12device->RegisterCustomFenceLocationX( (D3D12_GPU_VIRTUAL_ADDRESS)context->graphicsFence.address, L\"Backend Compute GFX\" )", v14, v15) )
          __debugbreak();
      }
      if ( ((unsigned int (__fastcall *)(ID3D12Device *, unsigned int *, const wchar_t *))g_dx.d3d12device->m_pFunction[21].AddRef)(g_dx.d3d12device, context->endFenceData, L"Backend Compute END") == -1 )
      {
        LODWORD(v15) = ((__int64 (__fastcall *)(ID3D12Device *, unsigned int *, const wchar_t *))g_dx.d3d12device->m_pFunction[21].AddRef)(g_dx.d3d12device, context->endFenceData, L"Backend Compute END");
        LODWORD(v14) = -1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 346, ASSERT_TYPE_ASSERT, "( 0xFFFFFFFFU ) != ( g_dx.d3d12device->RegisterCustomFenceLocationX( (D3D12_GPU_VIRTUAL_ADDRESS)context->endFenceData, L\"Backend Compute END\" ) )", "%s != %s\n\t%i, %i", "0xFFFFFFFFU", "g_dx.d3d12device->RegisterCustomFenceLocationX( (D3D12_GPU_VIRTUAL_ADDRESS)context->endFenceData, L\"Backend Compute END\" )", v14, v15) )
          __debugbreak();
      }
      if ( ((unsigned int (__fastcall *)(ID3D12Device *, unsigned int *, const wchar_t *))g_dx.d3d12device->m_pFunction[21].AddRef)(g_dx.d3d12device, context->memcpyFenceData, L"Backend Compute MEM") == -1 )
      {
        LODWORD(v15) = ((__int64 (__fastcall *)(ID3D12Device *, unsigned int *, const wchar_t *))g_dx.d3d12device->m_pFunction[21].AddRef)(g_dx.d3d12device, context->memcpyFenceData, L"Backend Compute MEM");
        v11 = "( 0xFFFFFFFFU ) != ( g_dx.d3d12device->RegisterCustomFenceLocationX( (D3D12_GPU_VIRTUAL_ADDRESS)context->memcpyFenceData, L\"Backend Compute MEM\" ) )";
        v12 = "g_dx.d3d12device->RegisterCustomFenceLocationX( (D3D12_GPU_VIRTUAL_ADDRESS)context->memcpyFenceData, L\"Backend Compute MEM\" )";
        v13 = 347;
LABEL_34:
        LODWORD(v14) = -1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", v13, ASSERT_TYPE_ASSERT, v11, "%s != %s\n\t%i, %i", "0xFFFFFFFFU", v12, v14, v15) )
          __debugbreak();
      }
    }
    else
    {
      if ( ((unsigned int (__fastcall *)(ID3D12Device *, volatile unsigned int *, const wchar_t *))AddRef)(g_dx.d3d12device, address, L"Frontend Compute CMP") == -1 )
      {
        v16 = ((__int64 (__fastcall *)(ID3D12Device *, volatile unsigned int *, const wchar_t *))g_dx.d3d12device->m_pFunction[21].AddRef)(g_dx.d3d12device, context->computeFence.address, L"Frontend Compute CMP");
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 337, ASSERT_TYPE_ASSERT, "( 0xFFFFFFFFU ) != ( g_dx.d3d12device->RegisterCustomFenceLocationX( (D3D12_GPU_VIRTUAL_ADDRESS)context->computeFence.address, L\"Frontend Compute CMP\" ) )", "%s != %s\n\t%i, %i", "0xFFFFFFFFU", "g_dx.d3d12device->RegisterCustomFenceLocationX( (D3D12_GPU_VIRTUAL_ADDRESS)context->computeFence.address, L\"Frontend Compute CMP\" )", -1, v16) )
          __debugbreak();
      }
      if ( ((unsigned int (__fastcall *)(ID3D12Device *, volatile unsigned int *, const wchar_t *))g_dx.d3d12device->m_pFunction[21].AddRef)(g_dx.d3d12device, context->graphicsFence.address, L"Frontend Compute GFX") == -1 )
      {
        LODWORD(v15) = ((__int64 (__fastcall *)(ID3D12Device *, volatile unsigned int *, const wchar_t *))g_dx.d3d12device->m_pFunction[21].AddRef)(g_dx.d3d12device, context->graphicsFence.address, L"Frontend Compute GFX");
        LODWORD(v14) = -1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 338, ASSERT_TYPE_ASSERT, "( 0xFFFFFFFFU ) != ( g_dx.d3d12device->RegisterCustomFenceLocationX( (D3D12_GPU_VIRTUAL_ADDRESS)context->graphicsFence.address, L\"Frontend Compute GFX\" ) )", "%s != %s\n\t%i, %i", "0xFFFFFFFFU", "g_dx.d3d12device->RegisterCustomFenceLocationX( (D3D12_GPU_VIRTUAL_ADDRESS)context->graphicsFence.address, L\"Frontend Compute GFX\" )", v14, v15) )
          __debugbreak();
      }
      if ( ((unsigned int (__fastcall *)(ID3D12Device *, unsigned int *, const wchar_t *))g_dx.d3d12device->m_pFunction[21].AddRef)(g_dx.d3d12device, context->endFenceData, L"Frontend Compute END") == -1 )
      {
        LODWORD(v15) = ((__int64 (__fastcall *)(ID3D12Device *, unsigned int *, const wchar_t *))g_dx.d3d12device->m_pFunction[21].AddRef)(g_dx.d3d12device, context->endFenceData, L"Frontend Compute END");
        LODWORD(v14) = -1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 339, ASSERT_TYPE_ASSERT, "( 0xFFFFFFFFU ) != ( g_dx.d3d12device->RegisterCustomFenceLocationX( (D3D12_GPU_VIRTUAL_ADDRESS)context->endFenceData, L\"Frontend Compute END\" ) )", "%s != %s\n\t%i, %i", "0xFFFFFFFFU", "g_dx.d3d12device->RegisterCustomFenceLocationX( (D3D12_GPU_VIRTUAL_ADDRESS)context->endFenceData, L\"Frontend Compute END\" )", v14, v15) )
          __debugbreak();
      }
      if ( ((unsigned int (__fastcall *)(ID3D12Device *, unsigned int *, const wchar_t *))g_dx.d3d12device->m_pFunction[21].AddRef)(g_dx.d3d12device, context->memcpyFenceData, L"Frontend Compute MEM") == -1 )
      {
        LODWORD(v15) = ((__int64 (__fastcall *)(ID3D12Device *, unsigned int *, const wchar_t *))g_dx.d3d12device->m_pFunction[21].AddRef)(g_dx.d3d12device, context->memcpyFenceData, L"Frontend Compute MEM");
        v11 = "( 0xFFFFFFFFU ) != ( g_dx.d3d12device->RegisterCustomFenceLocationX( (D3D12_GPU_VIRTUAL_ADDRESS)context->memcpyFenceData, L\"Frontend Compute MEM\" ) )";
        v12 = "g_dx.d3d12device->RegisterCustomFenceLocationX( (D3D12_GPU_VIRTUAL_ADDRESS)context->memcpyFenceData, L\"Frontend Compute MEM\" )";
        v13 = 340;
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
  unsigned int v5; 
  void *v6; 
  HRESULT v7; 
  const char *v8; 
  ID3D12DeviceChild *v9; 
  ID3D12DeviceChild *resource; 
  _BYTE v11[48]; 
  __int64 v12; 
  __m256i v13; 
  __int128 v14; 
  double v15; 

  *(_QWORD *)v11 = 1i64;
  info->type = GFX_CONSTANT_BUFFER_INFO_LINEAR;
  v12 = 0i64;
  v5 = (size + 63) & 0xFFFFFFC0;
  *(_QWORD *)&v11[28] = 65537i64;
  *(_DWORD *)&v11[24] = 1;
  *(_QWORD *)&v11[8] = 0i64;
  *(_QWORD *)&v11[16] = v5;
  *(_QWORD *)&v11[36] = 1i64;
  *(_DWORD *)&v11[44] = 1;
  v13 = *(__m256i *)v11;
  v15 = 0.0;
  v14 = *(_OWORD *)&v11[32];
  v6 = PMem_Alloc(v5, 0x40ui64, MEM_POOL_GPU_PRIVATE, PMEM_STACK_GAME, "R_InitConstantBufferInfo_Linear");
  v7 = ((__int64 (__fastcall *)(ID3D12Device *, void *, __m256i *, __int64, _QWORD, GUID *, ID3D12DeviceChild **))g_dx.d3d12device->m_pFunction[14].Release)(g_dx.d3d12device, v6, &v13, 2243i64, 0i64, &GUID_696442be_a72e_4059_bc79_5b5c98040fad, &resource);
  if ( v7 < 0 )
  {
    v8 = R_ErrorDescription(v7);
    Sys_Error((const ObfuscateErrorText)&stru_14436DF60, 307i64, v8);
  }
  PIXSetDebugName(resource, "R_InitConstantBufferInfo_Linear");
  v9 = resource;
  if ( v6 != (void *)((__int64 (__fastcall *)(ID3D12DeviceChild *))resource->m_pFunction[3].Release)(resource) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 538, ASSERT_TYPE_ASSERT, "(reinterpret_cast< D3D12_GPU_VIRTUAL_ADDRESS >( buf ) == placedResourceBuffer->GetGPUVirtualAddress())", (const char *)&queryFormat, "reinterpret_cast< D3D12_GPU_VIRTUAL_ADDRESS >( buf ) == placedResourceBuffer->GetGPUVirtualAddress()") )
    __debugbreak();
  info->linear.buf = (unsigned __int8 *)((__int64 (__fastcall *)(ID3D12DeviceChild *))v9->m_pFunction[3].Release)(v9);
  info->linear.bufSize = v5;
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
  void *v5; 
  HRESULT v6; 
  const char *v7; 
  ID3D12DeviceChild *v8; 
  ID3D12DeviceChild *resource; 
  _BYTE v10[48]; 
  __int64 v11; 
  __m256i v12; 
  __int128 v13; 
  double v14; 

  info->type = GFX_CONSTANT_BUFFER_INFO_RING;
  v3 = *sizes;
  if ( !*sizes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 571, ASSERT_TYPE_ASSERT, "(size)", (const char *)&queryFormat, "size") )
    __debugbreak();
  *(_QWORD *)&v10[28] = 65537i64;
  *(_DWORD *)&v10[24] = 1;
  *(_QWORD *)&v10[36] = 1i64;
  *(_DWORD *)&v10[44] = 1;
  v4 = (v3 + 63) & 0xFFFFFFC0;
  *(_QWORD *)&v10[16] = v4;
  *(_QWORD *)v10 = 1i64;
  *(_QWORD *)&v10[8] = 0i64;
  v12 = *(__m256i *)v10;
  v11 = 0i64;
  v14 = 0.0;
  v13 = *(_OWORD *)&v10[32];
  v5 = PMem_Alloc(v4, 0x40ui64, MEM_POOL_GPU_PRIVATE, PMEM_STACK_GAME, "R_InitConstantBufferInfo_Ring");
  v6 = ((__int64 (__fastcall *)(ID3D12Device *, void *, __m256i *, __int64, _QWORD, GUID *, ID3D12DeviceChild **))g_dx.d3d12device->m_pFunction[14].Release)(g_dx.d3d12device, v5, &v12, 2243i64, 0i64, &GUID_696442be_a72e_4059_bc79_5b5c98040fad, &resource);
  if ( v6 < 0 )
  {
    v7 = R_ErrorDescription(v6);
    Sys_Error((const ObfuscateErrorText)&stru_14436DF60, 307i64, v7);
  }
  PIXSetDebugName(resource, "R_InitConstantBufferInfo_Ring");
  v8 = resource;
  if ( v5 != (void *)((__int64 (__fastcall *)(ID3D12DeviceChild *))resource->m_pFunction[3].Release)(resource) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 596, ASSERT_TYPE_ASSERT, "(reinterpret_cast< D3D12_GPU_VIRTUAL_ADDRESS >( buf ) == placedResourceBuffer->GetGPUVirtualAddress())", (const char *)&queryFormat, "reinterpret_cast< D3D12_GPU_VIRTUAL_ADDRESS >( buf ) == placedResourceBuffer->GetGPUVirtualAddress()") )
    __debugbreak();
  info->linear.buf = (unsigned __int8 *)((__int64 (__fastcall *)(ID3D12DeviceChild *))v8->m_pFunction[3].Release)(v8);
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
  unsigned int v2; 
  GfxDescriptorHeapInfo *computeDescHeapInfo; 
  __int64 v4; 
  ID3D12DeviceChild **cmdAllocs; 
  unsigned int v6; 
  ID3D12CommandAllocator **v7; 
  HRESULT v8; 
  const char *v9; 
  const char *v10; 
  const dvar_t *v11; 
  unsigned int j; 
  GfxBackEndData *v13; 
  unsigned int v14; 
  ComputeContextData *contextData; 
  unsigned __int8 *v16; 
  unsigned int *v17; 
  GfxBatchedQuadMeshData (*spotShadowBatchedQuadMesh)[6][8]; 
  __int64 v19; 
  __int64 v20; 
  GfxMeshData *p_meshData; 
  GfxBatchedQuadMeshData (*sunShadowBatchedQuadMesh)[6][2][10]; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  GfxBufferCreationContext v26; 
  GfxBufferCreationContext v27; 
  GfxBufferCreationContext v28; 

  R_LockGfxImmediateContext();
  for ( i = 0; i < 2; ++i )
  {
    BackEndData = R_GetBackEndData(i);
    R_InitConstantBufferInfo_Linear(&BackEndData->constantBufferInfo, 0xC00000u, 0x20000u);
    R_InitConstantBufferInfo_Linear(&BackEndData->async2D.constBufferInfo, 0x40000u, 0x2000u);
    R_InitDescriptorHeapInfo_Linear(&BackEndData->async2D.descHeapInfo, D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV, 1u, 0xC00u, 0x80u, 64);
    v26.zoneName = (char *)&queryFormat.fmt + 3;
    v26.objectName = "GfxBackEndData.async2D.indices";
    v28 = v26;
    R_InitDynamicIndexBufferState(&BackEndData->async2D.indices, 30720, &v28);
    v27.zoneName = (char *)&queryFormat.fmt + 3;
    v27.objectName = "GfxBackEndData.async2D.vertices";
    v28 = v27;
    R_InitDynamicVertexBufferState(&BackEndData->async2D.vertices, 655360, 0, D3D12_RESOURCE_STATE_GENERIC_READ, &v28);
    R_InitDescriptorHeapInfo_Linear(&BackEndData->drawDescHeapInfo, D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV, 0, g_secondaryDescriptorHeapSize, g_secondaryDescriptorHeapDangerZone, g_secondaryDescriptorHeapPageSize);
    v2 = 0;
    computeDescHeapInfo = BackEndData->computeDescHeapInfo;
    v4 = 0i64;
    do
    {
      R_InitDescriptorHeapInfo_Linear(computeDescHeapInfo, D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV, v2 + 2, g_computeDescriptorHeapSizes[v4], g_computeDescriptorHeapDangerZones[v4], g_computeDescriptorHeapPageSizes[v4]);
      ++v2;
      ++v4;
      ++computeDescHeapInfo;
    }
    while ( v2 < 2 );
    cmdAllocs = BackEndData->cmdAllocs;
    v6 = 0;
    v7 = BackEndData->cmdAllocs;
    do
    {
      v8 = ((__int64 (__fastcall *)(ID3D12Device *, _QWORD, GUID *, ID3D12CommandAllocator **))g_dx.d3d12device->m_pFunction[3].QueryInterface)(g_dx.d3d12device, 0i64, &GUID_6102dee4_af59_4b09_b999_b44d73f09b24, v7);
      if ( v8 < 0 )
      {
        v9 = R_ErrorDescription(v8);
        Sys_Error((const ObfuscateErrorText)&stru_144426AE0, 1199i64, v9);
      }
      v10 = j_va("Cmdbuf command allocator %d", v6);
      PIXSetDebugName(*cmdAllocs, v10);
      ++v6;
      ++v7;
      ++cmdAllocs;
    }
    while ( v6 < 6 );
    v11 = r_emissive_surf_vert_limit;
    if ( !r_emissive_surf_vert_limit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    R_InitDynamicMesh(BackEndData->mesh, "GFXMESH_CODE_EMISSIVE", 0x30000u, v11->current.unsignedInt, 0x30u, 0x4000u, 0x4000u, 0x600u, 0, 0x600u, 0);
    R_InitDynamicMesh(&BackEndData->mesh[1], "GFXMESH_CODE_SUNSHADOW_TRANS", 0x18000u, 0x10000u, 0x30u, 0x4000u, 0x4000u, 0x600u, 0, 0x600u, 0);
    R_InitDynamicMesh(&BackEndData->mesh[2], "GFXMESH_GLASS", 0x4800u, 0, 0, 0, 0, 0, 0, 0, 0x2100u);
    R_InitDynamicMesh(&BackEndData->mesh[3], "GFXMESH_FLARE", 0x1200u, 0xC00u, 0x30u, 0, 0, 0x100u, 0x100u, 0, 0);
    BackEndData->endFence = 0i64;
    PIXSetDebugFenceName(&BackEndData->endFence, "End Fence");
  }
  for ( j = 0; j < 2; ++j )
  {
    v13 = R_GetBackEndData(j);
    v14 = 0;
    contextData = v13->compute.contextData;
    do
      R_InitComputeContextData(contextData++, v14++);
    while ( v14 < 2 );
    v16 = (unsigned __int8 *)R_AllocGlobalVariable(0x100000ui64, "computeCmds");
    R_InitComputeCmdList(&v13->compute.cmdListData, v16, 0x100000);
    v17 = (unsigned int *)PMem_Alloc(4ui64, 0x40ui64, MEM_POOL_GPU_PRIVATE, PMEM_STACK_GAME, "Gfx Compute Memcpy Fence");
    v13->memcpyFenceData = v17;
    *v17 = 0;
  }
  R_InitDynamicMesh(&gfxMeshGlob.spotShadowViewMesh.meshData, "Spot Shadow View Mesh", 6u, 4u, 0x20u, 0, 0, 0, 0, 0, 0);
  spotShadowBatchedQuadMesh = gfxMeshGlob.spotShadowBatchedQuadMesh;
  v19 = 6i64;
  do
  {
    v20 = 8i64;
    do
    {
      R_InitDynamicMesh((GfxMeshData *)spotShadowBatchedQuadMesh, "Spot Shadow Batched Quad Mesh", 0x1800u, 0x1000u, 0x20u, 0, 0, 0, 0, 0, 0);
      R_InitBatchedQuadMesh((GfxMeshData *)spotShadowBatchedQuadMesh, 1024);
      spotShadowBatchedQuadMesh = (GfxBatchedQuadMeshData (*)[6][8])((char *)spotShadowBatchedQuadMesh + 1016);
      --v20;
    }
    while ( v20 );
    --v19;
  }
  while ( v19 );
  p_meshData = &gfxMeshGlob.sunShadowCacheQuadMesh[0][0][0][0].meshData;
  sunShadowBatchedQuadMesh = gfxMeshGlob.sunShadowBatchedQuadMesh;
  v23 = 6i64;
  do
  {
    v24 = 2i64;
    do
    {
      v25 = 10i64;
      do
      {
        R_InitDynamicMesh((GfxMeshData *)sunShadowBatchedQuadMesh, "Sun Shadow Batched Quad Mesh", 0x180u, 0x100u, 0x20u, 0, 0, 0, 0, 0, 0);
        R_InitBatchedQuadMesh((GfxMeshData *)sunShadowBatchedQuadMesh, 64);
        R_InitDynamicMesh(p_meshData, "Sun Shadow Cache Quad Mesh", 6u, 4u, 0x20u, 0, 0, 0, 0, 0, 0);
        sunShadowBatchedQuadMesh = (GfxBatchedQuadMeshData (*)[6][2][10])((char *)sunShadowBatchedQuadMesh + 1016);
        p_meshData = (GfxMeshData *)((char *)p_meshData + 1032);
        --v25;
      }
      while ( v25 );
      --v24;
    }
    while ( v24 );
    --v23;
  }
  while ( v23 );
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
void R_IssueRenderCommandsEnd(void)
{
  bool v0; 
  GfxBackEndData *v1; 
  int renderFromBackEnd; 
  GfxBackEndData *v3; 
  volatile unsigned int v4; 
  volatile unsigned int v5; 
  float v6; 
  const dvar_t *v7; 
  float value; 
  float v9; 
  __int128 unsignedInt; 
  GfxBackEndData *v13; 
  float v14; 
  const dvar_t *v16; 
  __int128 v18; 
  GfxBackEndData *v19; 
  float v20; 
  const dvar_t *v22; 
  __int128 v24; 
  GfxBackEndData *v25; 
  bool IsMainThread; 

  if ( !Sys_IsUpdateScreenThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 1731, ASSERT_TYPE_ASSERT, "(Sys_IsUpdateScreenThread())", (const char *)&queryFormat, "Sys_IsUpdateScreenThread()", -2i64) )
    __debugbreak();
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 1732, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  Profile2_UpdateEntry(35);
  if ( ((unsigned __int8)&dword_14FDE805C & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE805C) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE805C);
  r_glob.allowAddDrawCall = 0;
  v0 = !Sys_IsMainThread();
  v1 = frontEndDataOut;
  if ( !v0 && (frontEndDataOut->drawType & 2) != 0 )
  {
    if ( frontEndDataOut->frontendFramePass != R_RT_GetFrontendFramePass() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 1741, ASSERT_TYPE_ASSERT, "(frontEndDataOut->frontendFramePass == R_RT_GetFrontendFramePass())", (const char *)&queryFormat, "frontEndDataOut->frontendFramePass == R_RT_GetFrontendFramePass()") )
      __debugbreak();
    R_RT_EndFrontendFrame();
    v1 = frontEndDataOut;
  }
  renderFromBackEnd = v1->renderFromBackEnd;
  v1->finishReady = 1;
  R_TG_SetupPhase(&frontEndDataOut->viewInfo[frontEndDataOut->viewInfoIndex], frontEndDataOut->smpFrame, 6u);
  v3 = frontEndDataOut;
  if ( (frontEndDataOut->drawType & 2) != 0 )
  {
    v4 = (int)(float)(737280.0 * r_SkinnedCacheCorpseThreshold->current.value);
    v5 = (int)(float)(737280.0 * r_SkinnedCacheLODThreshold->current.value);
    v6 = 737280.0 * r_SkinnedCacheLODThreshold->current.vector.v[1];
    if ( !frontEndDataOut->skinnedCacheVb && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 1420, ASSERT_TYPE_ASSERT, "(frontEndDataOut->skinnedCacheVb)", (const char *)&queryFormat, "frontEndDataOut->skinnedCacheVb") )
      __debugbreak();
    rg.skinnedCacheReachedCorpseThreshold = frontEndDataOut->skinnedCacheVb->used >= v4;
    rg.skinnedCacheReachedLODThreshold = frontEndDataOut->skinnedCacheVb->used >= v5;
    rg.skinnedCacheLeftLODThreshold = frontEndDataOut->skinnedCacheVb->used < (unsigned int)(int)v6;
    if ( Com_GameMode_SupportsFeature(WEAPON_CHARGING_IN|0x80) )
    {
      if ( rg.skinnedCacheReachedLODThreshold )
      {
        v7 = r_skinnedLodBias;
        value = r_skinnedLodBias->current.value;
        v9 = r_skinnedLodBiasStep->current.value;
        *(float *)&_XMM1 = v9 * 2.0;
        if ( value != v9 && value != (float)(v9 * 2.0) )
          LODWORD(_XMM1) = r_skinnedLodBiasStep->current.integer;
      }
      else
      {
        if ( !rg.skinnedCacheLeftLODThreshold )
          goto LABEL_30;
        v7 = r_skinnedLodBias;
        unsignedInt = r_skinnedLodBias->current.unsignedInt;
        *(float *)&unsignedInt = r_skinnedLodBias->current.value - (float)(v3->frameTime * r_skinnedLodBiasDecay->current.value);
        _XMM1 = unsignedInt;
        __asm { vmaxss  xmm1, xmm1, xmm6 }
      }
    }
    else
    {
      v7 = r_skinnedLodBias;
      if ( r_skinnedLodBias->current.value == 0.0 )
        goto LABEL_30;
      LODWORD(_XMM1) = 0;
    }
    Dvar_SetFloat_Internal(v7, *(float *)&_XMM1);
  }
LABEL_30:
  v13 = frontEndDataOut;
  if ( (frontEndDataOut->drawType & 2) == 0 )
    goto LABEL_40;
  v14 = 2097152.0 * r_skinnedSubdivLODThreshold->current.vector.v[1];
  rg.skinnedSubdivCacheReachedLODThreshold = frontEndDataOut->subdivCacheVb->used >= (unsigned int)(int)(float)(2097152.0 * r_skinnedSubdivLODThreshold->current.value);
  rg.skinnedSubdivCacheLeftLODThreshold = frontEndDataOut->subdivCacheVb->used < (unsigned int)(int)v14;
  if ( Com_GameMode_SupportsFeature(WEAPON_CHARGING_IN|0x80) )
  {
    if ( rg.skinnedSubdivCacheReachedLODThreshold )
    {
      LODWORD(_XMM1) = r_skinnedSubdivLodBiasStep->current.integer;
      v16 = r_skinnedSubdivLodBias;
      if ( *(float *)&_XMM1 == r_skinnedSubdivLodBias->current.value )
        *(float *)&_XMM1 = *(float *)&_XMM1 * 2.0;
    }
    else
    {
      if ( !rg.skinnedSubdivCacheLeftLODThreshold )
        goto LABEL_40;
      v16 = r_skinnedSubdivLodBias;
      v18 = r_skinnedSubdivLodBias->current.unsignedInt;
      *(float *)&v18 = r_skinnedSubdivLodBias->current.value - (float)(v13->frameTime * r_skinnedSubdivLodBiasDecay->current.value);
      _XMM1 = v18;
      __asm { vmaxss  xmm1, xmm1, xmm6 }
    }
  }
  else
  {
    v16 = r_skinnedSubdivLodBias;
    if ( r_skinnedSubdivLodBias->current.value == 0.0 )
      goto LABEL_40;
    LODWORD(_XMM1) = 0;
  }
  Dvar_SetFloat_Internal(v16, *(float *)&_XMM1);
LABEL_40:
  v19 = frontEndDataOut;
  if ( (frontEndDataOut->drawType & 2) != 0 )
  {
    v20 = 262144.0 * r_sceneSurfsLODThreshold->current.vector.v[1];
    rg.sceneSurfsReachedLODThreshold = frontEndDataOut->surfPos >= (unsigned int)(int)(float)(262144.0 * r_sceneSurfsLODThreshold->current.value);
    rg.sceneSurfsLeftLODThreshold = frontEndDataOut->surfPos < (unsigned int)(int)v20;
    if ( Com_GameMode_SupportsFeature(WEAPON_CHARGING_LOOP|0x80) )
    {
      if ( rg.sceneSurfsReachedLODThreshold )
      {
        LODWORD(_XMM1) = r_sceneSurfsLodBiasStep->current.integer;
        v22 = r_sceneSurfsLodBias;
        if ( *(float *)&_XMM1 == r_sceneSurfsLodBias->current.value )
          *(float *)&_XMM1 = *(float *)&_XMM1 * 2.0;
        goto LABEL_49;
      }
      if ( rg.sceneSurfsLeftLODThreshold )
      {
        v22 = r_sceneSurfsLodBias;
        v24 = r_sceneSurfsLodBias->current.unsignedInt;
        *(float *)&v24 = r_sceneSurfsLodBias->current.value - (float)(v19->frameTime * r_sceneSurfsLodBiasDecay->current.value);
        _XMM1 = v24;
        __asm { vmaxss  xmm1, xmm1, xmm6 }
LABEL_49:
        Dvar_SetFloat_Internal(v22, *(float *)&_XMM1);
      }
    }
    else
    {
      v22 = r_sceneSurfsLodBias;
      if ( r_sceneSurfsLodBias->current.value != 0.0 )
      {
        LODWORD(_XMM1) = 0;
        goto LABEL_49;
      }
    }
  }
  v25 = frontEndDataOut;
  frontEndDataOut = NULL;
  if ( renderFromBackEnd == 1 && s_deferWakeRenderer )
    R_WakeRenderer(v25);
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
      RB_DrawFrame(v25);
      rbBackendDataCopier.m_commands[0].m_consumerThreadId = 0;
      rbBackendDataCopier.m_commands[1].m_consumerThreadId = 0;
      rbBackendDataCopier.m_commands[2].m_consumerThreadId = 0;
    }
    else
    {
      RB_DrawFrame(v25);
    }
  }
  Profile2_UpdateEntry(35);
  if ( ((unsigned __int64)&dword_14FDE805C & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE805C) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE805C);
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

void __fastcall R_SetUIMaskCommandParams(GfxCmdSetUIMask *cmd, float maskX, float maskY, double maskWidth, float maskHeight, float maskRotation, float alphaScale, float alphaOffset, float maskUMin, float maskVMin, float maskUMax, float maskVMax, const vec2_t *viewportSize, GfxImage *image)
{
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 

  _XMM6 = *(_OWORD *)&maskWidth;
  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 3584, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  _XMM0 = LODWORD(maskHeight);
  __asm
  {
    vmaxss  xmm0, xmm0, cs:__real@00800000
    vmaxss  xmm6, xmm6, cs:__real@00800000
  }
  v27 = *(float *)&_XMM0;
  *(double *)&_XMM0 = j___libm_sse2_sincosf_(cmd, v14, v15, v16);
  v22 = viewportSize->v[0];
  v23 = viewportSize->v[1];
  cmd->alphaOffset = alphaOffset;
  cmd->alphaScale = alphaScale;
  cmd->transformX = (float)((float)((float)((float)(maskUMax - maskUMin) * 0.5) * _mm_shuffle_ps((__m128)(unsigned __int64)_XMM0, (__m128)(unsigned __int64)_XMM0, 1).m128_f32[0]) * v22) * (float)(1.0 / *(float *)&_XMM6);
  cmd->transformY = (float)((float)((float)((float)(maskUMax - maskUMin) * 0.5) * *(float *)&_XMM0) * v23) * (float)(1.0 / *(float *)&_XMM6);
  v24 = (float)((float)(*(float *)&_XMM6 - v22) * 0.5) + maskX;
  v25 = (float)((float)(v27 - v23) * 0.5) + maskY;
  v26 = _mm_shuffle_ps((__m128)(unsigned __int64)_XMM0, (__m128)(unsigned __int64)_XMM0, 1).m128_f32[0];
  cmd->translateX = (float)((float)(maskUMax + maskUMin) * 0.5) - (float)((float)((float)((float)(v24 * v26) - (float)(v25 * *(float *)&_XMM0)) * (float)(maskUMax - maskUMin)) * (float)(1.0 / *(float *)&_XMM6));
  cmd->transformZ = (float)((float)((float)((float)(maskVMax - maskVMin) * 0.5) * *(float *)&_XMM0) * v22) * (float)(1.0 / v27);
  cmd->transformW = (float)((float)((float)((float)(maskVMax - maskVMin) * -0.5) * v26) * v23) * (float)(1.0 / v27);
  cmd->image = image;
  cmd->translateY = (float)((float)(maskVMax + maskVMin) * 0.5) - (float)((float)((float)((float)(v25 * v26) + (float)(v24 * *(float *)&_XMM0)) * (float)(maskVMax - maskVMin)) * (float)(1.0 / v27));
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
void R_ToggleSmpFrame(LocalClientNum_t localClientNum)
{
  bool v2; 
  __int128 v5; 
  __int128 v9; 
  double v12; 
  double v14; 
  double v18; 
  double v21; 
  double v24; 
  double v27; 
  double v30; 
  double v33; 
  double v36; 
  double v39; 
  double v42; 
  double v45; 
  double v48; 
  double v51; 
  double v54; 
  double v57; 
  double v60; 
  double v63; 
  double v66; 
  double v69; 
  double v72; 
  double v75; 
  double v78; 
  double v81; 
  double v84; 
  double v87; 
  double v90; 
  int v98; 
  unsigned int v99; 
  int skinnedCachePeak; 
  unsigned __int64 pFrameTimesUSec[32]; 

  if ( frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2774, ASSERT_TYPE_ASSERT, "(!frontEndDataOut)", (const char *)&queryFormat, "!frontEndDataOut") )
    __debugbreak();
  if ( Sys_IsMainThread() )
    R_ReleaseThreadOwnership();
  Sys_ProfBeginNamedEvent(0xFF404040, "wait renderer2");
  Sys_ProcessWorkerCmdsWithTimeout(Sys_IsRendererReady2, NULL);
  Sys_ProfEndNamedEvent();
  v2 = rg.viewInfoCount == 0;
  if ( !rg.viewInfoCount )
  {
    CG_Draw_CalculateFPS();
    CG_Draw_CopyLastFrameTimesUSec(pFrameTimesUSec, 0x20u);
    _XMM2 = 0i64;
    __asm { vcvtsi2sd xmm2, xmm2, rax }
    if ( (pFrameTimesUSec[1] & 0x8000000000000000ui64) != 0i64 )
    {
      *((_QWORD *)&v5 + 1) = *((_QWORD *)&_XMM2 + 1);
      *(double *)&v5 = *(double *)&_XMM2 + 1.844674407370955e19;
      _XMM2 = v5;
    }
    _XMM1 = 0i64;
    __asm { vcvtsi2sd xmm1, xmm1, rax }
    if ( (pFrameTimesUSec[0] & 0x8000000000000000ui64) != 0i64 )
      *(double *)&_XMM1 = *(double *)&_XMM1 + 1.844674407370955e19;
    _XMM3 = 0i64;
    *((_QWORD *)&v9 + 1) = *((_QWORD *)&_XMM2 + 1);
    *(double *)&v9 = *(double *)&_XMM2 + *(double *)&_XMM1;
    __asm { vcvtsi2sd xmm3, xmm3, rax }
    if ( (pFrameTimesUSec[2] & 0x8000000000000000ui64) != 0i64 )
      *(double *)&_XMM3 = *(double *)&_XMM3 + 1.844674407370955e19;
    _XMM1 = 0i64;
    v12 = *(double *)&v9 + *(double *)&_XMM3;
    __asm { vcvtsi2sd xmm1, xmm1, rax }
    if ( (pFrameTimesUSec[3] & 0x8000000000000000ui64) != 0i64 )
      *(double *)&_XMM1 = *(double *)&_XMM1 + 1.844674407370955e19;
    v14 = v12 + *(double *)&_XMM1;
    _XMM2 = 0i64;
    __asm { vcvtsi2sd xmm2, xmm2, rax }
    if ( (pFrameTimesUSec[4] & 0x8000000000000000ui64) != 0i64 )
      *(double *)&_XMM2 = *(double *)&_XMM2 + 1.844674407370955e19;
    _XMM1 = 0i64;
    v18 = v14 + *(double *)&_XMM2;
    __asm { vcvtsi2sd xmm1, xmm1, rax }
    if ( (pFrameTimesUSec[5] & 0x8000000000000000ui64) != 0i64 )
      *(double *)&_XMM1 = *(double *)&_XMM1 + 1.844674407370955e19;
    _XMM2 = 0i64;
    v21 = v18 + *(double *)&_XMM1;
    __asm { vcvtsi2sd xmm2, xmm2, rax }
    if ( (pFrameTimesUSec[6] & 0x8000000000000000ui64) != 0i64 )
      *(double *)&_XMM2 = *(double *)&_XMM2 + 1.844674407370955e19;
    _XMM1 = 0i64;
    v24 = v21 + *(double *)&_XMM2;
    __asm { vcvtsi2sd xmm1, xmm1, rax }
    if ( (pFrameTimesUSec[7] & 0x8000000000000000ui64) != 0i64 )
      *(double *)&_XMM1 = *(double *)&_XMM1 + 1.844674407370955e19;
    _XMM2 = 0i64;
    v27 = v24 + *(double *)&_XMM1;
    __asm { vcvtsi2sd xmm2, xmm2, rax }
    if ( (pFrameTimesUSec[8] & 0x8000000000000000ui64) != 0i64 )
      *(double *)&_XMM2 = *(double *)&_XMM2 + 1.844674407370955e19;
    _XMM1 = 0i64;
    v30 = v27 + *(double *)&_XMM2;
    __asm { vcvtsi2sd xmm1, xmm1, rax }
    if ( (pFrameTimesUSec[9] & 0x8000000000000000ui64) != 0i64 )
      *(double *)&_XMM1 = *(double *)&_XMM1 + 1.844674407370955e19;
    _XMM2 = 0i64;
    v33 = v30 + *(double *)&_XMM1;
    __asm { vcvtsi2sd xmm2, xmm2, rax }
    if ( (pFrameTimesUSec[10] & 0x8000000000000000ui64) != 0i64 )
      *(double *)&_XMM2 = *(double *)&_XMM2 + 1.844674407370955e19;
    _XMM1 = 0i64;
    v36 = v33 + *(double *)&_XMM2;
    __asm { vcvtsi2sd xmm1, xmm1, rax }
    if ( (pFrameTimesUSec[11] & 0x8000000000000000ui64) != 0i64 )
      *(double *)&_XMM1 = *(double *)&_XMM1 + 1.844674407370955e19;
    _XMM2 = 0i64;
    v39 = v36 + *(double *)&_XMM1;
    __asm { vcvtsi2sd xmm2, xmm2, rax }
    if ( (pFrameTimesUSec[12] & 0x8000000000000000ui64) != 0i64 )
      *(double *)&_XMM2 = *(double *)&_XMM2 + 1.844674407370955e19;
    _XMM1 = 0i64;
    v42 = v39 + *(double *)&_XMM2;
    __asm { vcvtsi2sd xmm1, xmm1, rax }
    if ( (pFrameTimesUSec[13] & 0x8000000000000000ui64) != 0i64 )
      *(double *)&_XMM1 = *(double *)&_XMM1 + 1.844674407370955e19;
    _XMM2 = 0i64;
    v45 = v42 + *(double *)&_XMM1;
    __asm { vcvtsi2sd xmm2, xmm2, rax }
    if ( (pFrameTimesUSec[14] & 0x8000000000000000ui64) != 0i64 )
      *(double *)&_XMM2 = *(double *)&_XMM2 + 1.844674407370955e19;
    _XMM1 = 0i64;
    v48 = v45 + *(double *)&_XMM2;
    __asm { vcvtsi2sd xmm1, xmm1, rax }
    if ( (pFrameTimesUSec[15] & 0x8000000000000000ui64) != 0i64 )
      *(double *)&_XMM1 = *(double *)&_XMM1 + 1.844674407370955e19;
    _XMM2 = 0i64;
    v51 = v48 + *(double *)&_XMM1;
    __asm { vcvtsi2sd xmm2, xmm2, rax }
    if ( (pFrameTimesUSec[16] & 0x8000000000000000ui64) != 0i64 )
      *(double *)&_XMM2 = *(double *)&_XMM2 + 1.844674407370955e19;
    _XMM1 = 0i64;
    v54 = v51 + *(double *)&_XMM2;
    __asm { vcvtsi2sd xmm1, xmm1, rax }
    if ( (pFrameTimesUSec[17] & 0x8000000000000000ui64) != 0i64 )
      *(double *)&_XMM1 = *(double *)&_XMM1 + 1.844674407370955e19;
    _XMM2 = 0i64;
    v57 = v54 + *(double *)&_XMM1;
    __asm { vcvtsi2sd xmm2, xmm2, rax }
    if ( (pFrameTimesUSec[18] & 0x8000000000000000ui64) != 0i64 )
      *(double *)&_XMM2 = *(double *)&_XMM2 + 1.844674407370955e19;
    _XMM1 = 0i64;
    v60 = v57 + *(double *)&_XMM2;
    __asm { vcvtsi2sd xmm1, xmm1, rax }
    if ( (pFrameTimesUSec[19] & 0x8000000000000000ui64) != 0i64 )
      *(double *)&_XMM1 = *(double *)&_XMM1 + 1.844674407370955e19;
    _XMM2 = 0i64;
    v63 = v60 + *(double *)&_XMM1;
    __asm { vcvtsi2sd xmm2, xmm2, rax }
    if ( (pFrameTimesUSec[20] & 0x8000000000000000ui64) != 0i64 )
      *(double *)&_XMM2 = *(double *)&_XMM2 + 1.844674407370955e19;
    _XMM1 = 0i64;
    v66 = v63 + *(double *)&_XMM2;
    __asm { vcvtsi2sd xmm1, xmm1, rax }
    if ( (pFrameTimesUSec[21] & 0x8000000000000000ui64) != 0i64 )
      *(double *)&_XMM1 = *(double *)&_XMM1 + 1.844674407370955e19;
    _XMM2 = 0i64;
    v69 = v66 + *(double *)&_XMM1;
    __asm { vcvtsi2sd xmm2, xmm2, rax }
    if ( (pFrameTimesUSec[22] & 0x8000000000000000ui64) != 0i64 )
      *(double *)&_XMM2 = *(double *)&_XMM2 + 1.844674407370955e19;
    _XMM1 = 0i64;
    v72 = v69 + *(double *)&_XMM2;
    __asm { vcvtsi2sd xmm1, xmm1, rax }
    if ( (pFrameTimesUSec[23] & 0x8000000000000000ui64) != 0i64 )
      *(double *)&_XMM1 = *(double *)&_XMM1 + 1.844674407370955e19;
    _XMM2 = 0i64;
    v75 = v72 + *(double *)&_XMM1;
    __asm { vcvtsi2sd xmm2, xmm2, rax }
    if ( (pFrameTimesUSec[24] & 0x8000000000000000ui64) != 0i64 )
      *(double *)&_XMM2 = *(double *)&_XMM2 + 1.844674407370955e19;
    _XMM1 = 0i64;
    v78 = v75 + *(double *)&_XMM2;
    __asm { vcvtsi2sd xmm1, xmm1, rax }
    if ( (pFrameTimesUSec[25] & 0x8000000000000000ui64) != 0i64 )
      *(double *)&_XMM1 = *(double *)&_XMM1 + 1.844674407370955e19;
    _XMM2 = 0i64;
    v81 = v78 + *(double *)&_XMM1;
    __asm { vcvtsi2sd xmm2, xmm2, rax }
    if ( (pFrameTimesUSec[26] & 0x8000000000000000ui64) != 0i64 )
      *(double *)&_XMM2 = *(double *)&_XMM2 + 1.844674407370955e19;
    _XMM1 = 0i64;
    v84 = v81 + *(double *)&_XMM2;
    __asm { vcvtsi2sd xmm1, xmm1, rax }
    if ( (pFrameTimesUSec[27] & 0x8000000000000000ui64) != 0i64 )
      *(double *)&_XMM1 = *(double *)&_XMM1 + 1.844674407370955e19;
    _XMM2 = 0i64;
    v87 = v84 + *(double *)&_XMM1;
    __asm { vcvtsi2sd xmm2, xmm2, rax }
    if ( (pFrameTimesUSec[28] & 0x8000000000000000ui64) != 0i64 )
      *(double *)&_XMM2 = *(double *)&_XMM2 + 1.844674407370955e19;
    _XMM1 = 0i64;
    v90 = v87 + *(double *)&_XMM2;
    __asm { vcvtsi2sd xmm1, xmm1, rax }
    if ( (pFrameTimesUSec[29] & 0x8000000000000000ui64) != 0i64 )
      *(double *)&_XMM1 = *(double *)&_XMM1 + 1.844674407370955e19;
    _XMM2 = 0i64;
    *(double *)&v9 = v90 + *(double *)&_XMM1;
    __asm { vcvtsi2sd xmm2, xmm2, rax }
    if ( (pFrameTimesUSec[30] & 0x8000000000000000ui64) != 0i64 )
      *(double *)&_XMM2 = *(double *)&_XMM2 + 1.844674407370955e19;
    _XMM1 = 0i64;
    __asm { vcvtsi2sd xmm1, xmm1, rax }
    if ( (pFrameTimesUSec[31] & 0x8000000000000000ui64) != 0i64 )
      *(double *)&_XMM1 = *(double *)&_XMM1 + 1.844674407370955e19;
    *(double *)&v9 = (*(double *)&v9 + *(double *)&_XMM2 + *(double *)&_XMM1) * 0.00000003125;
    _XMM1 = v9;
    __asm { vcvtsd2ss xmm6, xmm1, xmm1 }
    R_GetBackEndData(s_smpFrame)->frameTime = *(float *)&_XMM6;
  }
  v98 = ((_BYTE)s_smpFrame - 1) & 1;
  s_smpFrame = v98;
  frontEndDataOut = R_GetBackEndData(v98);
  v99 = Sys_Milliseconds();
  R_ResetGPUHangDetection(v99);
  if ( v2 && !R_Screenshot_InProcess() )
  {
    ++gfxBuf.skinnedCacheFrameCount;
    gfxBuf.skinnedCacheVbPoolFrame = (gfxBuf.skinnedCacheVbPoolFrame + 1) % 3;
  }
  R_ToggleSmpFrameInternal(localClientNum);
  if ( v2 )
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
  __int64 v7; 
  __int64 v8; 
  unsigned int v9; 
  __int64 v10; 
  unsigned int v11; 
  __int64 v12; 
  bool enabled; 
  bool v14; 
  volatile int surfPos; 
  GfxMultiLightGridFXLightingBuffers *v16; 
  GfxMultiLightGridFXLightingBuffers *v17; 
  GfxBackEndData *v18; 
  __int64 relightingIndexToCopy; 
  const dvar_t *v20; 
  int integer; 
  const dvar_t *v22; 
  signed int v23; 
  signed int v24; 
  __m256i *VisibilityBitArray; 
  unsigned int v26; 
  unsigned __int64 v27; 
  __int64 v28; 
  __m256i v29; 
  GfxBackEndData *v30; 
  XZoneHandleUnique ZoneUniqueHandleFromWorldTransientIndex; 
  unsigned __int16 FrontendFramePass; 
  __int64 v33; 
  R_RT_Handle result; 
  __m256i v35; 
  __m256i v36; 
  __m256i v37; 
  __m256i v38; 
  __m256i v39; 
  __m256i v40; 

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
  frontEndDataOut->displayRtDebug = *R_RT_GetGlobal(&result, R_RENDERTARGET_DISPLAY_BUFFER_FRONTEND);
  frontEndDataOut->cmdAllocNeedsReset[0] = 1;
  frontEndDataOut->cmdAllocNeedsReset[1] = 1;
  frontEndDataOut->cmdAllocNeedsReset[2] = 1;
  frontEndDataOut->cmdAllocNeedsReset[3] = 1;
  frontEndDataOut->cmdAllocNeedsReset[4] = 1;
  frontEndDataOut->cmdAllocNeedsReset[5] = 1;
  R_EndFrameDescriptorHeapInfo(&frontEndDataOut->drawDescHeapInfo, 0i64);
  v7 = 0i64;
  v8 = 2i64;
  do
  {
    R_EndFrameDescriptorHeapInfo(&frontEndDataOut->computeDescHeapInfo[v7++], 0i64);
    --v8;
  }
  while ( v8 );
  rg.surfPosHistory[rg.surfPosHistoryIndex] = frontEndDataOut->surfPos;
  rg.surfPosHistoryIndex = (rg.surfPosHistoryIndex + 1) % 64;
  frontEndDataOut->mayhemChannelsBuffer = &gfxBuf.mayhemChannelsBufferPool[(__int64)gfxBuf.mayhemChannelsBufferPoolFrame];
  frontEndDataOut->mayhemChannelsVb = &gfxBuf.mayhemChannelsVbPool[gfxBuf.mayhemChannelsBufferPoolFrame];
  frontEndDataOut->tessFactorsBuffer = &gfxBuf.tessFactorsBufferPool[(__int64)gfxBuf.tessFactorsBufferPoolFrame];
  frontEndDataOut->bspIndirectArgsBuffer = &gfxBuf.bspIndirectArgs[s_smpFrame & 1];
  frontEndDataOut->bspIndirectArgs = NULL;
  if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_GENERATE_REACTIVEMOTION) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2446, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_GENERATE_REACTIVEMOTION ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_GENERATE_REACTIVEMOTION )") )
    __debugbreak();
  v9 = R_ToggleReactiveMotionFrame();
  v10 = s_smpFrame & 1;
  v11 = s_smpFrame & 1;
  frontEndDataOut->reactiveMotionIndex = v9;
  v12 = v10;
  v10 *= 96i64;
  frontEndDataOut->globalLightConstantBuffer = &deviceGlobals.globalLightStructuredBuffer[v12];
  frontEndDataOut->globalShadowConstantBuffer = &deviceGlobals.globalShadowStructuredBuffer[v12];
  frontEndDataOut->globalSceneConstantBuffer = &deviceGlobals.globalSceneConstantBuffer[v12];
  frontEndDataOut->globalPersistentBufferTable = (GfxDescriptorTable *)((char *)deviceGlobals.globalPersistentBufferTables[0] + v10);
  frontEndDataOut->globalPersistentTextureTable = (GfxDescriptorTable *)((char *)deviceGlobals.globalPersistentTextureTables[0] + v10);
  frontEndDataOut->entityDataBuffer = &deviceGlobals.entityDataBuffer[v12];
  frontEndDataOut->dynamicLightListBufferIndex = v11;
  enabled = r_asyncCompute->current.enabled;
  frontEndDataOut->compute.asyncEnabled = enabled;
  v14 = enabled && r_smpCompute->current.enabled && !r_deviceDebug->current.enabled;
  frontEndDataOut->compute.smpEnabled = v14;
  if ( CL_IsRenderingSplitScreen() )
    frontEndDataOut->compute.smpEnabled &= r_smpComputeInSplitScreen->current.color[0];
  frontEndDataOut->mayhemChannelsBuffer->used = 0;
  frontEndDataOut->mayhemChannelsVb->used = 0;
  frontEndDataOut->tessFactorsBuffer->used = 0;
  s_cmdList = frontEndDataOut->commands;
  Sys_ProfBeginNamedEvent(0xFFFF7F50, "dev clear buffers");
  if ( frontEndDataOut->drawSurfCount > 0x4000u )
  {
    LODWORD(v33) = frontEndDataOut->drawSurfCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2507, ASSERT_TYPE_ASSERT, "( 0 ) <= ( frontEndDataOut->drawSurfCount ) && ( frontEndDataOut->drawSurfCount ) <= ( static_cast<int>(( sizeof( *array_counter( frontEndDataOut->drawSurfs ) ) + 0 )) )", "frontEndDataOut->drawSurfCount not in [0, static_cast<int>(ARRAY_COUNT( frontEndDataOut->drawSurfs ))]\n\t%i not in [%i, %i]", v33, 0i64, 0x4000) )
      __debugbreak();
  }
  if ( frontEndDataOut->surfPos < 0 )
  {
    LODWORD(v33) = frontEndDataOut->surfPos;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2508, ASSERT_TYPE_ASSERT, "( ( frontEndDataOut->surfPos >= 0 ) )", "( frontEndDataOut->surfPos ) = %i", v33) )
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
    v16 = &s_multiLightGridFXLightingWorldBuffers[0][frontEndDataOut->frameIndex % 2];
  else
    v16 = NULL;
  R_ResetMesh(frontEndDataOut->mesh, v16);
  frontEndDataOut->codeSurfEmissiveDepthHackCount = 0;
  frontEndDataOut->codeSurfEmissivePostBlurCount = 0;
  frontEndDataOut->codeSurfEmissivePostBlurDepthHackCount = 0;
  frontEndDataOut->codeSurfCount[1] = 0;
  frontEndDataOut->codeSurfArgsCount[1] = 0;
  if ( s_world.draw.lightGridType == GFX_LIGHTGRID_TYPE_MULTI )
    v17 = &s_multiLightGridFXLightingWorldBuffers[1][frontEndDataOut->frameIndex % 2];
  else
    v17 = NULL;
  R_ResetMesh(&frontEndDataOut->mesh[1], v17);
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
  v18 = frontEndDataOut;
  frontEndDataOut->debugGlobals.lineCount = 0;
  v18->debugGlobals.stringCount = 0;
  v18->debugGlobals.vertCount = 0;
  v18->debugGlobals.polyCount = 0;
  if ( v18->debugGlobals.enableDebugString && !v18->debugGlobals.strings )
    R_DebugAlloc((void **)&v18->debugGlobals.strings, 112 * v18->debugGlobals.stringLimit, "R_ToggleSmpFrameInternal");
  if ( v18->debugGlobals.enableDebugLines && !v18->debugGlobals.lines )
    R_DebugAlloc((void **)&v18->debugGlobals.lines, 32 * v18->debugGlobals.lineLimit, "R_ToggleSmpFrameInternal");
  if ( v18->debugGlobals.enableDebugPolys && !v18->debugGlobals.polys )
  {
    if ( v18->debugGlobals.verts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 2598, ASSERT_TYPE_ASSERT, "(debugGlobalsEntry->verts == 0)", (const char *)&queryFormat, "debugGlobalsEntry->verts == NULL") )
      __debugbreak();
    R_DebugAlloc((void **)&v18->debugGlobals.polys, 28 * v18->debugGlobals.polyLimit, "(debugGlobalsEntry->polys)");
    R_DebugAlloc((void **)&v18->debugGlobals.verts, 12 * v18->debugGlobals.vertLimit, "(debugGlobalsEntry->verts)");
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
  v20 = DVARINT_sm_spotUpdateLimit;
  if ( DVARINT_sm_spotUpdateLimit )
  {
    integer = sm_spotUpdateLimitMax->current.integer;
    Dvar_CheckFrontendServerThread(DVARINT_sm_spotUpdateLimit);
    if ( v20->current.integer < integer )
      integer = v20->current.integer;
  }
  else
  {
    integer = 0;
  }
  frontEndDataOut->spotShadowUpdateLimit = integer;
  v22 = DVARINT_sm_spotUpdateLimitDynLight;
  if ( DVARINT_sm_spotUpdateLimitDynLight )
  {
    Dvar_CheckFrontendServerThread(DVARINT_sm_spotUpdateLimitDynLight);
    v23 = v22->current.integer;
  }
  else
  {
    v23 = 0;
  }
  v24 = 0;
  if ( (signed int)(frontEndDataOut->spotShadowUpdateLimit - 2) > 0 )
    v24 = frontEndDataOut->spotShadowUpdateLimit - 2;
  if ( v24 < v23 )
    v23 = v24;
  frontEndDataOut->spotShadowDynLightUpdateLimit = v23;
  if ( g_worldDraw )
  {
    VisibilityBitArray = (__m256i *)CL_TransientsWorld_GetVisibilityBitArray(localClientNum);
    v26 = 0;
    v27 = 0i64;
    v28 = 320i64;
    v29 = VisibilityBitArray[4];
    v35 = *VisibilityBitArray;
    v36 = VisibilityBitArray[1];
    v37 = VisibilityBitArray[2];
    v38 = VisibilityBitArray[3];
    v39 = v29;
    v40 = VisibilityBitArray[5];
    v30 = frontEndDataOut;
    *(__m256i *)frontEndDataOut->transientVisibility.array = v35;
    *(__m256i *)&v30->transientVisibility.array[8] = v36;
    *(__m256i *)&v30->transientVisibility.array[16] = v37;
    *(__m256i *)&v30->transientVisibility.array[24] = v38;
    *(__m256i *)&v30->transientVisibility.array[32] = v39;
    *(__m256i *)&v30->transientVisibility.array[40] = v40;
    do
    {
      if ( !*(_QWORD *)((char *)&g_worldDraw->reflectionProbeData.reflectionProbeCount + v28) )
        frontEndDataOut->transientVisibility.array[v27 >> 5] &= ~(0x80000000 >> (v26 & 0x1F));
      if ( *(_QWORD *)((char *)&g_worldDraw->reflectionProbeData.reflectionProbeCount + v28) )
      {
        ZoneUniqueHandleFromWorldTransientIndex = DB_Zones_GetZoneUniqueHandleFromWorldTransientIndex(v26);
        if ( !DB_BackendCallbacks_AllZoneCallbackProcessed(ZoneUniqueHandleFromWorldTransientIndex) )
          frontEndDataOut->transientVisibility.array[v27 >> 5] &= ~(0x80000000 >> (v26 & 0x1F));
      }
      ++v26;
      ++v27;
      v28 += 8i64;
    }
    while ( v26 < 0x600 );
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
  __int128 v0; 
  __int128 v1; 
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  char v9; 
  const dvar_t *v10; 
  unsigned int v11; 
  TestLodEnableFlags v12; 
  const dvar_t *v13; 
  unsigned int v14; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  const dvar_t *v17; 
  const dvar_t *v18; 
  bool v19; 
  bool v20; 
  bool v21; 
  bool v22; 
  bool v23; 
  bool v24; 
  bool v25; 
  const dvar_t *v26; 
  bool enabled; 
  const dvar_t *v28; 
  int Bool_Internal; 
  const dvar_t *v30; 
  const dvar_t *v31; 
  int v32; 
  const dvar_t *v33; 
  unsigned int unsignedInt; 
  int v35; 
  const dvar_t *v36; 
  int integer; 
  const dvar_t *v38; 
  int v39; 
  const dvar_t *v40; 
  int v41; 
  const dvar_t *v42; 
  int v43; 
  const dvar_t *v44; 
  int v45; 
  const dvar_t *v46; 
  int v47; 
  const dvar_t *v48; 
  int v49; 
  const dvar_t *v50; 
  int v51; 
  const dvar_t *v52; 
  int v53; 
  const dvar_t *v54; 
  int v55; 
  const dvar_t *v56; 
  const dvar_t *v57; 
  int v58; 
  char v59; 
  const dvar_t *v60; 
  int v61; 
  unsigned int v62; 
  bool v63; 
  unsigned int v64; 
  bool v65; 
  int v66; 
  const dvar_t *v67; 
  const dvar_t *v68; 
  const dvar_t *v69; 
  BOOL v70; 
  int v71; 
  bool v72; 
  const dvar_t *v73; 
  int v74; 
  const dvar_t *v75; 
  int v76; 
  const dvar_t *v77; 
  int v78; 
  const dvar_t *v79; 
  int v80; 
  const dvar_t *v81; 
  int v82; 
  const dvar_t *v83; 
  int v84; 
  const dvar_t *v85; 
  float v86; 
  int v87; 
  int v88; 
  float v89; 
  double v90; 
  float v91; 
  double Float_Internal; 
  float v93; 
  int v94; 
  int v95; 
  int v96; 
  int v97; 
  const dvar_t *v102; 
  __int128 v103; 
  __int128 v105; 
  __int128 v107; 
  __int128 v108; 
  __int128 v109; 
  __int128 v110; 
  __int128 v112; 
  __int128 v113; 
  const dvar_t *v115; 
  const dvar_t *v116; 
  double v117; 
  double v118; 
  double v119; 
  double v120; 
  double v121; 
  const dvar_t *v122; 
  double v123; 
  double v124; 
  double v125; 
  const dvar_t *v126; 
  float v127; 
  unsigned int v128; 
  const dvar_t *v129; 
  float v130; 
  float v131; 
  bool v132; 
  bool v133; 
  float v134; 
  const dvar_t *v135; 
  const dvar_t *v136; 
  int IsOctahedronEnabled; 
  const dvar_t *v138; 
  const dvar_t *v139; 
  const dvar_t *v140; 
  const dvar_t *v141; 
  const dvar_t *v142; 
  const dvar_t *v143; 
  const dvar_t *v144; 
  const dvar_t *v145; 
  const dvar_t *v146; 
  char v147; 
  const dvar_t *v148; 
  bool v149; 
  const dvar_t *v150; 
  int v151; 
  const dvar_t *v152; 
  int v153; 
  const dvar_t *v154; 
  int v155; 
  const dvar_t *v156; 
  int v157; 
  const dvar_t *v158; 
  int v159; 
  const dvar_t *v160; 
  int v161; 
  const dvar_t *v162; 
  bool Bool_Internal_DebugName; 
  const dvar_t *v164; 
  const dvar_t *v165; 
  double Float_Internal_DebugName; 
  int v167; 
  int v168; 
  const dvar_t *result; 
  char v170; 
  char v171; 
  int v172; 
  float v173; 
  unsigned int v174; 
  float v175; 
  bool v176; 
  bool v177; 
  bool v178; 
  unsigned int v179; 
  float v180; 
  float value; 
  unsigned int v182; 
  unsigned int v183; 
  float v184; 
  float v185; 
  float v186; 
  float v187; 
  __int128 v188; 
  __m128 v189; 
  __int128 v190; 
  __int128 v191; 
  __int128 v192; 
  __int128 v193; 
  __int128 v194; 
  __int128 v195; 
  __int128 v196; 
  __int128 v197; 
  __int128 v198; 

  v198 = v0;
  v195 = v3;
  v171 = 0;
  v194 = v4;
  v193 = v5;
  v192 = v6;
  v9 = *((_BYTE *)&g_gfxCmdBufInput + 7920) ^ r_cmdbuf_worker->current.enabled;
  v191 = v7;
  v190 = v8;
  *((_BYTE *)&g_gfxCmdBufInput + 7920) ^= v9 & 1;
  if ( r_sun_from_dvars->current.enabled && rgp.world )
    R_SetSunFromDvars(&rgp.world->sun);
  XModelSetTestLodToColLod(r_forceLodToColLod->current.enabled);
  v10 = r_forceLod;
  if ( r_forceLod->current.integer == r_forceLod->reset.integer )
  {
    v13 = r_clampLod;
    if ( r_clampLod->current.integer == r_clampLod->reset.integer )
    {
      XModelSetTestLodLevel(0, ENABLE, r_lod0Dist->current.value);
      XModelSetTestLodLevel(1u, ENABLE, r_lod1Dist->current.value);
      XModelSetTestLodLevel(2u, ENABLE, r_lod2Dist->current.value);
      XModelSetTestLodLevel(3u, ENABLE, r_lod3Dist->current.value);
      XModelSetTestLodLevel(4u, ENABLE, r_lod4Dist->current.value);
      XModelSetTestLodLevel(5u, ENABLE, r_lod5Dist->current.value);
    }
    else
    {
      v14 = 0;
      while ( 1 )
      {
        XModelSetTestLodLevel(v14, (const TestLodEnableFlags)((v14 < v13->current.integer) + 2));
        if ( ++v14 >= 6 )
          break;
        v13 = r_clampLod;
      }
    }
  }
  else
  {
    v11 = 0;
    while ( 1 )
    {
      v12 = FORCE_ENABLE;
      if ( v11 != v10->current.integer )
        v12 = FORCE_DISABLE;
      XModelSetTestLodLevel(v11++, v12);
      if ( v11 >= 6 )
        break;
      v10 = r_forceLod;
    }
  }
  if ( rg.showXModelRanking != r_showXModelRanking->current.integer || rg.showXModelRankingFilterMode != r_showXModelRankingFilterMode->current.integer || rg.showXModelRankingOffset != r_showXModelRankingOffset->current.integer || rg.showXModelRankingStopUpdate != r_showXModelRankingStopUpdate->current.enabled || rg.showXModelRemoteConsole != Dvar_GetBool_Internal_DebugName(DVARBOOL_r_showXModelRemoteConsole, "r_showXModelRemoteConsole") )
  {
    R_SyncRenderThread();
    v15 = DVARBOOL_r_showXModelRemoteConsole;
    rg.showXModelRanking = r_showXModelRanking->current.integer;
    rg.showXModelRankingFilterMode = r_showXModelRankingFilterMode->current.integer;
    rg.showXModelRankingOffset = r_showXModelRankingOffset->current.integer;
    rg.showXModelRankingStopUpdate = r_showXModelRankingStopUpdate->current.enabled;
    if ( !DVARBOOL_r_showXModelRemoteConsole && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_showXModelRemoteConsole") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    rg.showXModelRemoteConsole = v15->current.enabled;
  }
  v16 = DVARBOOL_r_showXModelRemoteConsole;
  rg.showXModelRemoteConsoleCount = 0;
  rg.showXModelRemoteConsoleHeader = 0;
  if ( !DVARBOOL_r_showXModelRemoteConsole && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_showXModelRemoteConsole") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  if ( v16->current.enabled )
    Dvar_SetBool_Internal(DVARBOOL_r_showXModelRemoteConsole, 0);
  if ( rgp.world && rgp.world->dpvs.sunShadowOptCount && R_CheckDvarModified(r_useShadowGeomOpt) )
    R_GenerateShadowMapCasterCells();
  if ( R_CheckDvarModified(r_profMaterial) )
    R_SyncRenderThread();
  v17 = r_profMaterial;
  if ( !r_profMaterial && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  rg.profMaterial = v17->current.unsignedInt;
  if ( R_CheckDvarModified(r_cinematic) )
    R_SyncRenderThread();
  v18 = r_cinematic;
  if ( !r_cinematic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  rg.cinematic = v18->current.enabled;
  v19 = R_CheckDvarModified(r_texFilterMipBias) || R_CheckDvarModified(r_smaaGradientAdjust);
  v20 = R_CheckDvarModified(r_texFilterTrilinearWindow);
  v21 = R_CheckDvarModified(r_texFilterAnisoWindow);
  v22 = R_CheckDvarModified(r_texFilterAnisoBias);
  if ( v19 || v20 || v21 || v22 || R_CheckDvarModified(r_texFilter) || R_CheckDvarModified(r_texFilterMipMode) )
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
  v23 = R_CheckDvarModified(r_st_sm_polygonOffsetBias);
  v176 = v23;
  v24 = R_CheckDvarModified(r_st_sm_polygonOffsetScale);
  v177 = v24;
  v25 = R_CheckDvarModified(r_st_sm_polygonOffsetClamp);
  v178 = v25;
  if ( R_CheckDvarModified(sm_polygonOffsetBias) || R_CheckDvarModified(sm_polygonOffsetScale) || R_CheckDvarModified(sm_polygonOffsetClamp) || v23 || v24 || v25 || R_CheckDvarModified(r_polygonOffsetBias) || R_CheckDvarModified(r_polygonOffsetScale) || R_CheckDvarModified(r_polygonOffsetClamp) )
  {
    R_SyncRenderThread();
    v171 = 1;
  }
  if ( R_CheckDvarModified(r_vrsEnabled) )
    R_SyncRenderThread();
  v26 = r_vrsEnabled;
  if ( !r_vrsEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  enabled = v26->current.enabled;
  v28 = r_vrsMaskEnabled;
  rg.variableRateShadingEnabled = enabled;
  if ( !r_vrsMaskEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v28);
  rg.variableRateShadingVRSMaskEnabled = v28->current.enabled;
  if ( R_CheckDvarModified(r_fullbright) )
  {
    Bool_Internal = Dvar_GetBool_Internal(r_fullbright);
    Dvar_SetInt_Internal(r_debugShaderMaterial, Bool_Internal);
  }
  if ( R_CheckDvarModified(r_debugGPUPipeline) )
  {
    v30 = r_debugGPUPipeline;
    if ( !r_debugGPUPipeline && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v30);
    Dvar_SetInt_Internal(r_debugShaderMaterial, v30->current.integer != 0);
  }
  if ( R_CheckDvarModified(r_reflectionProbeDebugMode) )
  {
    v31 = r_reflectionProbeDebugMode;
    if ( !r_reflectionProbeDebugMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v31);
    switch ( v31->current.integer )
    {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
        Dvar_SetInt_Internal(r_debugShaderMaterial, 0);
        Dvar_SetInt_Internal(r_debugShaderLighting, 0);
        v32 = 0;
        goto LABEL_90;
      case 5:
        Dvar_SetInt_Internal(r_debugShaderMaterial, 1);
        Dvar_SetInt_Internal(r_debugShaderLighting, 0);
        v32 = 1;
        goto LABEL_90;
      case 6:
        Dvar_SetInt_Internal(r_debugShaderMaterial, 2);
        Dvar_SetInt_Internal(r_debugShaderLighting, 0);
        v32 = 2;
        goto LABEL_90;
      case 7:
        Dvar_SetInt_Internal(r_debugShaderMaterial, 0);
        Dvar_SetInt_Internal(r_debugShaderLighting, 4);
        v32 = 4;
        goto LABEL_90;
      case 8:
        Dvar_SetInt_Internal(r_debugShaderMaterial, 0);
        Dvar_SetInt_Internal(r_debugShaderLighting, 6);
        v32 = 5;
        goto LABEL_90;
      case 9:
        Dvar_SetInt_Internal(r_debugShaderMaterial, 0);
        Dvar_SetInt_Internal(r_debugShaderLighting, 1);
        v32 = 6;
LABEL_90:
        Dvar_SetInt_Internal(r_reflectionProbeLightingDebugMode, v32);
        break;
      default:
        break;
    }
  }
  v33 = r_reflectionProbeDebugMode;
  if ( !r_reflectionProbeDebugMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v33);
  unsignedInt = v33->current.unsignedInt;
  v183 = unsignedInt;
  if ( unsignedInt <= 6 && (v35 = 105, _bittest(&v35, unsignedInt)) )
  {
    v170 = 0;
  }
  else
  {
    v170 = 1;
    v183 = unsignedInt | 0x80000000;
  }
  if ( R_CheckDvarModified(r_debugShaderMaterial) || R_CheckDvarModified(r_debugShaderLighting) || R_CheckDvarModified(r_debugShaderTexture) || R_CheckDvarModified(r_debugShaderPerf) || R_CheckDvarModified(r_debugAssetCost) || R_CheckDvarModified(r_debugGPUPipeline) || R_CheckDvarModified(r_reflectionProbeDebugMode) || R_CheckDvarModified(r_debugShaderOptimumTexelDensity) || R_CheckDvarModified(r_debugShaderBlend) || R_CheckDvarModified(r_debugShaderDiffuseColor) || R_CheckDvarModified(r_debugShaderSpecularColor) || R_CheckDvarModified(r_debugShaderGloss) || R_CheckDvarModified(r_debugShaderDNSGValues) || R_CheckDvarModified(r_debugShaderGlossinessBandsValues) || R_CheckDvarModified(r_debugShaderTemperatureBandsValues) || R_CheckDvarModified(r_debugShaderDiffuseBRDF) || R_CheckDvarModified(r_debugShaderSpecularBRDF) || R_CheckDvarModified(r_debugShaderGGXGeom) || R_CheckDvarModified(r_debugTextureOverlay) || R_CheckDvarModified(r_debugOverdrawOverlay) )
    R_SyncRenderThread();
  v36 = r_debugShaderMaterial;
  if ( !r_debugShaderMaterial && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v36);
  integer = v36->current.integer;
  v38 = r_debugShaderLighting;
  if ( !r_debugShaderLighting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v38);
  v39 = v38->current.integer;
  v40 = r_debugShaderTexture;
  v174 = v39;
  if ( !r_debugShaderTexture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v40);
  v41 = v40->current.integer;
  v42 = r_debugShaderPerf;
  if ( !r_debugShaderPerf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v42);
  v43 = v42->current.integer;
  v44 = r_debugGPUPipeline;
  if ( !r_debugGPUPipeline && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v44);
  v45 = v44->current.integer;
  v46 = r_debugShaderDiffuseBRDF;
  v182 = v45;
  if ( !r_debugShaderDiffuseBRDF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v46);
  v47 = v46->current.integer;
  v48 = r_debugShaderSpecularBRDF;
  v172 = v47;
  if ( !r_debugShaderSpecularBRDF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v48);
  v49 = v48->current.integer;
  v50 = r_debugShaderGGXGeom;
  if ( !r_debugShaderGGXGeom && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v50);
  v51 = v50->current.integer;
  v52 = r_debugAssetCost;
  if ( !r_debugAssetCost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v52);
  v53 = v52->current.integer;
  v54 = r_lgvDebugEvalFreq;
  v179 = v53;
  if ( !r_lgvDebugEvalFreq && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v54);
  v55 = v54->current.integer;
  v56 = r_lgvDebugOcclusionMode;
  if ( !r_lgvDebugOcclusionMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v56);
  v57 = r_lgvEvalMode;
  v58 = v56->current.integer;
  if ( !r_lgvEvalMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v57);
  if ( rg.useLightGridVolumes )
  {
    if ( v55 )
      v59 = v55 + 2;
    else
      v59 = v57->current.integer + 1;
  }
  else
  {
    v59 = 0;
  }
  v60 = r_debugShaderBlend;
  v61 = v59 & 0xF | ((v58 & 3) << 6);
  if ( !r_debugShaderBlend && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v60);
  v62 = v179;
  value = v60->current.value;
  if ( v179 )
  {
    v43 = 15;
    if ( v60->current.value == 1.0 )
      value = FLOAT_0_80000001;
  }
  else if ( v43 == 15 )
  {
    v62 = 5;
  }
  v63 = r_globalSecondarySelfVisScale->reset.value != r_globalSecondarySelfVisScale->current.value || r_rimLightingLerp->reset.value != r_rimLightingLerp->current.value || r_reflectionProbeForceNoParallax->current.enabled != r_reflectionProbeForceNoParallax->reset.enabled;
  v64 = v174;
  if ( integer || v174 || v41 || v43 || v182 || v172 || v49 || v51 || v63 || (v65 = R_UseBakedLighting(), v64 = v174, !v65) )
  {
    rg.debugShaderEnabled = 1;
    rg.debugShaderLightingData = !v43 && (!integer || (unsigned int)(integer - 20) <= 3) && (v41 & 0xFFFFFFF6) == 0 && (v64 - 9 > 9 && v64 < 0x15 || v172 || v49 || v51 || v170);
  }
  else
  {
    rg.debugShaderEnabled = 0;
    rg.debugShaderLightingData = 1;
  }
  v66 = (v43 << 8) | (unsigned __int8)v41;
  v67 = r_debugShaderFocus;
  LODWORD(v180) = (unsigned __int8)integer | (((unsigned __int8)v64 | (v66 << 8)) << 8);
  if ( !r_debugShaderFocus && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v67);
  LODWORD(v184) = LOWORD(v67->current.unsignedInt) | ((v61 | 0x210) << 16);
  v68 = r_debugShaderBentC;
  LODWORD(v185) = v172 & 3 | (4 * (v49 & 1 | (2 * (v51 & 3))));
  if ( !r_debugShaderBentC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v68);
  v69 = r_debugShaderReflectionPassthrough;
  v70 = v68->current.enabled;
  if ( !r_debugShaderReflectionPassthrough && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v69);
  v71 = v70 | 2;
  v72 = !v69->current.enabled;
  v73 = r_debugShaderLightAttMode;
  if ( v72 )
    v71 = v70;
  if ( !r_debugShaderLightAttMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v73);
  v74 = v73->current.integer;
  v75 = r_debugShaderBentCLightAngRadiiOff;
  if ( !r_debugShaderBentCLightAngRadiiOff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v75);
  v76 = v71 | ((unsigned __int8)(int)(float)(v75->current.value * 1020.0) << 8);
  v77 = r_primaryOmniLightPerPixelLimit;
  LODWORD(v186) = (unsigned __int8)v74 | (v76 << 8);
  if ( !r_primaryOmniLightPerPixelLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v77);
  v78 = v77->current.integer;
  v79 = r_primarySpotLightPerPixelLimit;
  if ( !r_primarySpotLightPerPixelLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v79);
  v80 = v79->current.integer;
  v81 = r_debugShaderMetalnessMode;
  if ( !r_debugShaderMetalnessMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v81);
  v82 = v81->current.integer;
  v83 = r_debugShaderCullMode;
  if ( !r_debugShaderCullMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v83);
  v84 = v83->current.integer;
  v85 = r_debugShaderGlossCurve;
  LODWORD(v187) = (unsigned __int8)v82 | (((unsigned __int8)v80 | (((unsigned __int8)v78 | (v84 << 8)) << 8)) << 8);
  if ( !r_debugShaderGlossCurve && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v85);
  v86 = v85->current.value;
  v173 = v86;
  if ( !R_UseBakedLighting() )
  {
    LODWORD(v86) ^= _xmm;
    v173 = v86;
  }
  v87 = v41 - 2;
  if ( v87 )
  {
    v88 = v87 - 1;
    if ( !v88 )
    {
      Float_Internal = Dvar_GetFloat_Internal(r_debugShaderOptimumTexelDensity);
      v91 = *(float *)&Float_Internal;
      LODWORD(Float_Internal) = 0;
      v93 = 0.0;
      v89 = 0.0;
      goto LABEL_238;
    }
    if ( v88 == 5 )
    {
      v90 = Dvar_GetFloat_Internal(r_debugShaderYUVPackingMipMapOffset);
      v91 = *(float *)&v90;
      Float_Internal = Dvar_GetFloat_Internal(r_debugShaderNOGPackingMipMapOffset);
      v93 = 0.0;
      v89 = 0.0;
      goto LABEL_238;
    }
    LODWORD(v89) = _mm_shuffle_ps((__m128)0i64, (__m128)0i64, 255).m128_u32[0];
    v188 = 0i64;
  }
  else
  {
    Dvar_GetVec3_Internal(r_debugShaderLightmapDensity, (vec3_t *)&v188);
    v89 = 0.0;
  }
  LODWORD(Float_Internal) = DWORD1(v188);
  v91 = *(float *)&v188;
  v93 = *((float *)&v188 + 2);
LABEL_238:
  v175 = *(float *)&Float_Internal;
  v94 = integer - 20;
  if ( v94 )
  {
    v95 = v94 - 2;
    if ( v95 )
    {
      v96 = v95 - 1;
      if ( v96 )
      {
        v97 = v96 - 7;
        if ( v97 )
        {
          if ( v97 == 8 )
          {
            v102 = r_debugShaderTemperatureBandsValues;
            v197 = v1;
            v196 = v2;
            if ( !r_debugShaderTemperatureBandsValues && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 669, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v102);
            v103 = v102->current.unsignedInt;
            *(float *)&v103 = (float)((float)(v102->current.value - 32.0) * 0.55555558) + 273.14999;
            _XMM2 = v103;
            v105 = LODWORD(v102->current.vector.v[1]);
            __asm { vmaxss  xmm12, xmm2, xmm9 }
            *(float *)&v105 = (float)((float)(*(float *)&v105 - 32.0) * 0.55555558) + 273.14999;
            _XMM2 = v105;
            v107 = LODWORD(v102->current.vector.v[2]);
            *(float *)&v107 = (float)(*(float *)&v107 - 32.0) * 0.55555558;
            v108 = v107;
            v110 = LODWORD(v102->current.vector.v[3]);
            *(float *)&v110 = v102->current.vector.v[3] - 32.0;
            v109 = v110;
            __asm { vmaxss  xmm11, xmm2, xmm9 }
            v112 = v108;
            *(float *)&v112 = *(float *)&v108 + 273.14999;
            _XMM2 = v112;
            v113 = v109;
            v86 = v173;
            __asm { vmaxss  xmm10, xmm2, xmm9 }
            *(float *)&v113 = (float)(*(float *)&v109 * 0.55555558) + 273.14999;
            _XMM2 = v113;
            __asm { vmaxss  xmm1, xmm2, xmm9 }
          }
          else
          {
            v189 = (__m128)_xmm_bf800000bf800000bf800000bf800000;
            LODWORD(_XMM10) = DWORD2(_xmm_bf800000bf800000bf800000bf800000);
            LODWORD(_XMM11) = DWORD1(_xmm_bf800000bf800000bf800000bf800000);
            LODWORD(_XMM12) = _xmm_bf800000bf800000bf800000bf800000;
            LODWORD(_XMM1) = _mm_shuffle_ps(v189, v189, 255).m128_u32[0];
          }
          goto LABEL_262;
        }
        v115 = r_debugShaderGlossinessBandsValues;
      }
      else
      {
        v115 = r_debugShaderDNSGValues;
      }
      if ( !v115 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 669, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v115);
      *(float *)&_XMM1 = v115->current.vector.v[3];
      LODWORD(_XMM12) = v115->current.integer;
      *(float *)&_XMM11 = v115->current.vector.v[1];
      *(float *)&_XMM10 = v115->current.vector.v[2];
    }
    else
    {
      v116 = r_debugShaderSpecularColor;
      if ( !r_debugShaderSpecularColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 662, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v116);
      v117 = R_DebugShader_AdjustColorChannel(COERCE_DOUBLE((unsigned __int64)v116->current.integer));
      LODWORD(_XMM12) = LODWORD(v117);
      v118 = R_DebugShader_AdjustColorChannel(COERCE_DOUBLE((unsigned __int64)LODWORD(v116->current.vector.v[1])));
      LODWORD(_XMM11) = LODWORD(v118);
      v119 = R_DebugShader_AdjustColorChannel(COERCE_DOUBLE((unsigned __int64)LODWORD(v116->current.vector.v[2])));
      LODWORD(_XMM10) = LODWORD(v119);
      v120 = Dvar_GetFloat_Internal(r_debugShaderGloss);
      v121 = R_DebugShader_AdjustColorChannel(v120);
      LODWORD(_XMM1) = LODWORD(v121);
    }
  }
  else
  {
    v122 = r_debugShaderDiffuseColor;
    if ( !r_debugShaderDiffuseColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 662, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v122);
    v123 = R_DebugShader_AdjustColorChannel(COERCE_DOUBLE((unsigned __int64)v122->current.integer));
    LODWORD(_XMM12) = LODWORD(v123);
    v124 = R_DebugShader_AdjustColorChannel(COERCE_DOUBLE((unsigned __int64)LODWORD(v122->current.vector.v[1])));
    LODWORD(_XMM11) = LODWORD(v124);
    v125 = R_DebugShader_AdjustColorChannel(COERCE_DOUBLE((unsigned __int64)LODWORD(v122->current.vector.v[2])));
    LODWORD(_XMM10) = LODWORD(v125);
    LODWORD(_XMM1) = 0;
  }
LABEL_262:
  if ( v62 )
    v91 = (float)v62;
  v126 = r_debugTextureOverlay;
  g_gfxCmdBufInput.sceneConstants.debugParameters0.v[0] = v180;
  g_gfxCmdBufInput.sceneConstants.debugParameters0.v[1] = v184;
  g_gfxCmdBufInput.sceneConstants.debugParameters0.v[2] = v185;
  g_gfxCmdBufInput.sceneConstants.debugParameters0.v[3] = value;
  g_gfxCmdBufInput.sceneConstants.debugParameters1.v[0] = v186;
  g_gfxCmdBufInput.sceneConstants.debugParameters1.v[1] = v187;
  g_gfxCmdBufInput.sceneConstants.debugParameters1.v[2] = v86;
  g_gfxCmdBufInput.sceneConstants.debugParameters2.v[0] = v91;
  g_gfxCmdBufInput.sceneConstants.debugParameters2.v[2] = v93;
  g_gfxCmdBufInput.sceneConstants.debugParameters2.v[3] = v89;
  g_gfxCmdBufInput.sceneConstants.debugParametersColor.v[0] = *(float *)&_XMM12;
  g_gfxCmdBufInput.sceneConstants.debugParametersColor.v[1] = *(float *)&_XMM11;
  g_gfxCmdBufInput.sceneConstants.debugParametersColor.v[2] = *(float *)&_XMM10;
  g_gfxCmdBufInput.sceneConstants.debugParameters2.v[1] = v175;
  g_gfxCmdBufInput.sceneConstants.debugParameters1.v[3] = 0.0;
  g_gfxCmdBufInput.sceneConstants.debugParametersColor.v[3] = *(float *)&_XMM1;
  *(_QWORD *)g_gfxCmdBufInput.sceneConstants.debugParametersTweak.v = r_debugShaderTweaks->current.integer64;
  g_gfxCmdBufInput.sceneConstants.debugParametersTweak.v[2] = r_debugShaderTweaks->current.vector.v[2];
  v127 = r_debugShaderTweaks->current.vector.v[3];
  g_gfxCmdBufInput.sceneConstants.debugGPUPipeline = v182;
  g_gfxCmdBufInput.sceneConstants.debugReflectionProbe = v183;
  g_gfxCmdBufInput.sceneConstants.debugParametersTweak.v[3] = v127;
  if ( !r_debugTextureOverlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v126);
  v128 = v126->current.unsignedInt;
  v129 = r_debugOverdrawOverlay;
  rg.debugTextureOverlay = v128;
  if ( !r_debugOverdrawOverlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v129);
  rg.debugOverdrawOverlay = v129->current.enabled;
  v130 = r_debugTextureOverlayMip->current.value;
  v131 = r_debugTextureOverlayBlend->current.value;
  g_gfxCmdBufInput.sceneConstants.debugTextureParameters.v[0] = *(float *)&rg.debugTextureOverlay;
  g_gfxCmdBufInput.sceneConstants.debugTextureParameters.v[1] = v130;
  g_gfxCmdBufInput.sceneConstants.debugTextureParameters.v[2] = 0.0;
  g_gfxCmdBufInput.sceneConstants.debugTextureParameters.v[3] = v131;
  v132 = r_identifyOldMaterial->current.enabled;
  v133 = R_Screenshot_InProcess();
  if ( v132 )
    v134 = r_oldMaterialEmissive->current.value;
  else
    v134 = 0.0;
  g_gfxCmdBufInput.sceneConstants.identifyOldMaterialEmissive = v134;
  v72 = !v132;
  v135 = r_nearPlaneFadeDistance;
  g_gfxCmdBufInput.sceneConstants.globalFlags = !v72 | (v133 ? 2 : 0);
  if ( !r_nearPlaneFadeDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v135);
  g_gfxCmdBufInput.sceneConstants.invNearPlaneFade = 1.0 / v135->current.value;
  if ( R_CheckDvarModified(r_distortion) || R_CheckDvarModified(r_ssrMode) )
    R_SyncRenderThread();
  v136 = r_distortion;
  if ( !r_distortion && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v136);
  if ( !v136->current.enabled || (rg.distortion = 1, rg.debugOverdrawOverlay) )
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
  if ( !r_drawSModels->current.enabled || (v72 = !r_drawRigidModels->current.enabled, rg.drawSModels = 1, v72) )
    rg.drawSModels = 0;
  rg.drawXModels = r_drawXModels->current.enabled;
  rg.drawSkinnedModels = r_drawSkinnedModels->current.enabled;
  rg.drawRigidModels = r_drawRigidModels->current.enabled;
  if ( !r_drawDynEnts->current.enabled || (v72 = !r_drawXModels->current.enabled, rg.drawDynEnts = 1, v72) )
    rg.drawDynEnts = 0;
  rg.drawTessellatedWorld = r_drawTessellatedWorld->current.enabled;
  rg.drawUmbraOccluders = r_drawUmbraOccluders->current.unsignedInt;
  if ( rg.drawUmbraOccluders )
    *(_WORD *)&rg.drawXModels = 0;
  v138 = r_subdiv;
  if ( rg.subdiv != r_subdiv->current.enabled || (v139 = r_subdivLimit, rg.subdivLimit != r_subdivLimit->current.integer) || (v140 = r_adaptiveSubdiv, rg.adaptiveSubdiv != r_adaptiveSubdiv->current.integer) || (v141 = r_adaptiveSubdivBaseFactor, rg.adaptiveSubdivBaseFactor != r_adaptiveSubdivBaseFactor->current.value) || (v142 = r_adaptiveSubdivPatchFactor, rg.adaptiveSubdivPatchFactor != r_adaptiveSubdivPatchFactor->current.value) )
  {
    R_SyncRenderThread();
    v138 = r_subdiv;
    v139 = r_subdivLimit;
    v140 = r_adaptiveSubdiv;
    v141 = r_adaptiveSubdivBaseFactor;
    v142 = r_adaptiveSubdivPatchFactor;
  }
  v143 = DCONST_DVARBOOL_r_patchCountAllowed;
  rg.subdiv = v138->current.enabled;
  rg.subdivLimit = v139->current.integer;
  rg.adaptiveSubdiv = v140->current.integer;
  LODWORD(rg.adaptiveSubdivBaseFactor) = v141->current.integer;
  LODWORD(rg.adaptiveSubdivPatchFactor) = v142->current.integer;
  if ( !DCONST_DVARBOOL_r_patchCountAllowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_patchCountAllowed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v143);
  if ( rg.patchCountAllowed != v143->current.enabled )
    goto LABEL_322;
  v144 = DCONST_DVARINT_r_subdivPatchCount;
  if ( !DCONST_DVARINT_r_subdivPatchCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_subdivPatchCount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v144);
  if ( rg.subdivPatchCount != v144->current.integer )
    goto LABEL_322;
  v145 = DCONST_DVARINT_r_displacementPatchCount;
  if ( !DCONST_DVARINT_r_displacementPatchCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_displacementPatchCount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v145);
  if ( rg.displacementPatchCount != v145->current.integer )
    goto LABEL_322;
  v146 = DCONST_DVARINT_r_defaultPatchCount;
  if ( !DCONST_DVARINT_r_defaultPatchCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_defaultPatchCount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v146);
  if ( rg.defaultPatchCount == v146->current.integer && !R_GPUDvarsChanged() )
  {
    v147 = v171;
  }
  else
  {
LABEL_322:
    R_SyncRenderThread();
    v147 = 1;
  }
  R_InitTessellationState();
  v148 = DCONST_DVARBOOL_r_gpuLateAllocParamCacheAllowed;
  if ( !DCONST_DVARBOOL_r_gpuLateAllocParamCacheAllowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_gpuLateAllocParamCacheAllowed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v148);
  v149 = v148->current.enabled;
  v150 = DCONST_DVARINT_r_gpuLateAllocParamCacheSubdiv;
  rg.gpuLateAllocParamCacheAllowed = v149;
  if ( !DCONST_DVARINT_r_gpuLateAllocParamCacheSubdiv && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_gpuLateAllocParamCacheSubdiv") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v150);
  v151 = v150->current.integer;
  v152 = DCONST_DVARINT_r_gpuLateAllocParamCacheSubdivDepthOnly;
  rg.gpuLateAllocParamCacheSubdiv = v151;
  if ( !DCONST_DVARINT_r_gpuLateAllocParamCacheSubdivDepthOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_gpuLateAllocParamCacheSubdivDepthOnly") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v152);
  v153 = v152->current.integer;
  v154 = DCONST_DVARINT_r_gpuLateAllocParamCacheBSP;
  rg.gpuLateAllocParamCacheSubdivDepthOnly = v153;
  if ( !DCONST_DVARINT_r_gpuLateAllocParamCacheBSP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_gpuLateAllocParamCacheBSP") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v154);
  v155 = v154->current.integer;
  v156 = DCONST_DVARINT_r_gpuLateAllocParamCacheBSPDepthOnly;
  rg.gpuLateAllocParamCacheBSP = v155;
  if ( !DCONST_DVARINT_r_gpuLateAllocParamCacheBSPDepthOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_gpuLateAllocParamCacheBSPDepthOnly") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v156);
  v157 = v156->current.integer;
  v158 = DCONST_DVARINT_r_gpuLateAllocParamCacheST;
  rg.gpuLateAllocParamCacheBSPDepthOnly = v157;
  if ( !DCONST_DVARINT_r_gpuLateAllocParamCacheST && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_gpuLateAllocParamCacheST") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v158);
  v159 = v158->current.integer;
  v160 = DCONST_DVARINT_r_gpuLateAllocParamCacheSTDepthOnly;
  rg.gpuLateAllocParamCacheST = v159;
  if ( !DCONST_DVARINT_r_gpuLateAllocParamCacheSTDepthOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_gpuLateAllocParamCacheSTDepthOnly") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v160);
  v161 = v160->current.integer;
  v162 = DCONST_DVARINT_r_gpuLateAllocParamCacheEffects;
  rg.gpuLateAllocParamCacheSTDepthOnly = v161;
  if ( !DCONST_DVARINT_r_gpuLateAllocParamCacheEffects && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_gpuLateAllocParamCacheEffects") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v162);
  rg.gpuLateAllocParamCacheEffects = v162->current.integer;
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
  if ( !rg.needSunShadowCacheFlush && !v176 && !v177 && !v178 && !R_CheckDvarModified(r_st_sm_lod) && !R_CheckDvarModified(r_st_enable) && !R_CheckDvarModified(r_st_cutoutMeshFilter) )
    goto LABEL_362;
  v164 = r_usePrebuiltSunShadow;
  if ( r_usePrebuiltSunShadow->current.integer == 1 )
  {
    Dvar_SetInt_Internal(r_usePrebuiltSunShadow, 3);
LABEL_362:
    v164 = r_usePrebuiltSunShadow;
  }
  if ( sm_sunMoving->current.enabled || rg.useCompressedSunShadow == 3 )
  {
    rg.useCachedSunShadow = 0;
  }
  else
  {
    rg.useCachedSunShadow = v164->current.unsignedInt;
    if ( rg.useCachedSunShadow == 3 )
      Dvar_SetInt_Internal(v164, 1);
  }
  rg.cachedSunShadowMaxTilesPerFrame = r_cachedSunShadowMaxTilesPerFrame->current.unsignedInt;
  rg.useCompressedSunShadow = R_CompressedSunShadow_GetType();
  LODWORD(rg.compressedSunShadowBiasScale) = r_compressedSunShadowBiasScale->current.integer;
  if ( R_CheckDvarModified(r_transShadowEnable) )
    R_SyncRenderThread();
  rg.useTransSunShadow = Dvar_GetBool_Internal(r_transShadowEnable);
  LODWORD(rg.transShadowPrevFrameMaskLerpFactor) = r_transShadowPrevFrameMaskLerpFactor->current.integer;
  if ( R_CheckDvarModified(r_volumetricDepth) )
    R_SyncRenderThread();
  Dvar_GetVec4_Internal(r_volumetricDepth, &rg.volumetricDepth);
  v165 = DVARBOOL_r_volumetrics;
  if ( !DVARBOOL_r_volumetrics )
    goto LABEL_377;
  if ( DVARBOOL_r_volumetrics->modified )
  {
    Dvar_ClearModified(DVARBOOL_r_volumetrics);
    R_SyncRenderThread();
    v165 = DVARBOOL_r_volumetrics;
  }
  if ( v165 )
    rg.volumetrics = Dvar_GetBool_Internal_DebugName(v165, "r_volumetrics");
  else
LABEL_377:
    rg.volumetrics = 0;
  if ( R_CheckDvarModified(r_vrs) )
    R_SyncRenderThread();
  if ( r_vrs->current.integer != 1 || (rg.vrsEmissiveOnly = 1, rg.debugOverdrawOverlay) )
    rg.vrsEmissiveOnly = 0;
  if ( r_vrs->current.integer != 2 || rg.debugOverdrawOverlay || rg.debugShaderEnabled || (v72 = !r_deviceDebug->current.enabled, rg.vrs = 1, !v72) )
    rg.vrs = 0;
  if ( R_CheckDvarModified(r_halfResEmissive) )
    R_SyncRenderThread();
  if ( !Dvar_GetBool_Internal(r_halfResEmissive) || rg.vrs || rg.debugShaderEnabled || (rg.halfResEmissive = 1, rg.debugOverdrawOverlay) )
    rg.halfResEmissive = 0;
  if ( v147 )
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
    Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_r_sunsprite_size_override, "r_sunsprite_size_override");
  else
    *(float *)&Float_Internal_DebugName = FLOAT_N1_0;
  rg.sunspriteSizeOverride = *(float *)&Float_Internal_DebugName;
  v167 = r_primaryLightMotionDetect->current.integer;
  if ( rg.primaryLightMotionDetect != v167 || R_CheckDvarModified(r_primaryLightMotionDetectUseSkinnedModel) || R_CheckDvarModified(r_primaryLightMotionDetectSizeMin) || R_CheckDvarModified(r_primaryLightMotionDetectSizeMax) || R_CheckDvarModified(r_lightSensorMode) )
    R_SyncRenderThread();
  rg.primaryLightMotionDetect = v167;
  rg.primaryLightMotionDetectUseSkinnedModel = r_primaryLightMotionDetectUseSkinnedModel->current.enabled;
  LODWORD(rg.primaryLightMotionDetectSizeMin) = r_primaryLightMotionDetectSizeMin->current.integer;
  LODWORD(rg.primaryLightMotionDetectSizeMax) = r_primaryLightMotionDetectSizeMax->current.integer;
  rg.lightSensorMode = r_lightSensorMode->current.integer;
  if ( R_CheckDvarModified(r_tessellationOverride) || R_CheckDvarModified(r_tessellation) || R_CheckDvarModified(r_tessellationForceFlushesOnShaderStageChanges) )
    R_SyncRenderThread();
  v168 = r_tessellationOverride->current.integer;
  if ( v168 == -1 )
  {
    if ( rg.tessellationFactor == 0.0 )
      v168 = 0;
    else
      v168 = r_tessellation->current.integer;
  }
  if ( CL_IsRenderingSplitScreen() )
    v168 = 0;
  rg.tessellation = v168;
  if ( R_CheckDvarModified(r_dof_filter_fireflySuppression) || R_CheckDvarModified(r_dof_filter_bokehEdgeSharpness) || R_CheckDvarModified(r_dof_filter_sharpen) || R_CheckDvarModified(r_dof_filter_temporalFilter) || R_CheckDvarModified(r_dof_filter_backgroundReconstruction) || R_CheckDvarModified(r_dof_filter_fullres) )
    R_SyncRenderThread();
  rg.dofFilter.enabled = R_DOF_DvarEnabled();
  rg.dofFilter.preset = R_DOF_GetBokehPreset();
  rg.dofFilter.fullres = r_dof_filter_fullres->current.color[0];
  LODWORD(rg.dofFilter.fireflySuppression) = r_dof_filter_fireflySuppression->current.integer;
  LODWORD(rg.dofFilter.bokehEdgeSharpness) = r_dof_filter_bokehEdgeSharpness->current.integer;
  LODWORD(rg.dofFilter.sharpen) = r_dof_filter_sharpen->current.integer;
  rg.dofFilter.temporalFilterEnabled = r_dof_filter_temporalFilter->current.color[0];
  result = r_ringFractionForFlush;
  rg.dofFilter.backgroundReconstruction = r_dof_filter_backgroundReconstruction->current.color[0];
  if ( rg.ringFractionForFlush != r_ringFractionForFlush->current.value )
  {
    R_SyncRenderThread();
    result = r_ringFractionForFlush;
    LODWORD(rg.ringFractionForFlush) = r_ringFractionForFlush->current.integer;
  }
  return result;
}

/*
==============
R_UpdateFrontEndDvarOptions_NetworkDvars
==============
*/
void R_UpdateFrontEndDvarOptions_NetworkDvars()
{
  const dvar_t *v0; 
  float value; 
  const dvar_t *v2; 
  float v3; 
  const dvar_t *v4; 
  bool enabled; 
  const dvar_t *v6; 
  float v7; 
  const dvar_t *v8; 
  int v9; 
  int integer; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  float v13; 
  float v14; 
  const dvar_t *v15; 
  int v16; 
  int v17; 
  const dvar_t *v18; 
  int v19; 
  const dvar_t *v20; 
  bool v21; 
  const dvar_t *v22; 
  float v23; 
  const dvar_t *v24; 
  float v25; 
  const dvar_t *v26; 
  float v27; 
  const dvar_t *v28; 
  float v29; 
  const dvar_t *v30; 
  float v31; 
  const dvar_t *v32; 
  bool v33; 
  const dvar_t *v34; 
  const dvar_t *v35; 
  float v36; 
  const dvar_t *v37; 
  float v38; 
  const dvar_t *v39; 
  float v40; 
  const dvar_t *v41; 
  float v42; 
  const dvar_t *v43; 
  float v44; 
  const dvar_t *v45; 
  float v46; 
  const dvar_t *v47; 
  bool v48; 
  unsigned __int16 unsignedInt; 
  const dvar_t *v50; 
  unsigned int v51; 
  const dvar_t *v52; 
  float v53; 
  const dvar_t *v54; 
  float v55; 
  const dvar_t *v56; 
  const dvar_t *v57; 
  const dvar_t *v58; 
  float v59; 
  const dvar_t *v60; 
  bool v61; 
  const dvar_t *v62; 
  const dvar_t *v63; 
  float tessellationCutoffDistance; 

  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() )
  {
    v0 = DVARFLT_r_specularColorScale;
    if ( !DVARFLT_r_specularColorScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_specularColorScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v0);
    value = v0->current.value;
    v2 = DVARFLT_r_diffuseColorScale;
    rg.specularColorScale = value;
    if ( !DVARFLT_r_diffuseColorScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_diffuseColorScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    v3 = v2->current.value;
    v4 = DVARBOOL_r_drawSun;
    rg.diffuseColorScale = v3;
    if ( DVARBOOL_r_drawSun )
    {
      Dvar_CheckFrontendServerThread(DVARBOOL_r_drawSun);
      enabled = v4->current.enabled;
    }
    else
    {
      enabled = 0;
    }
    v6 = DVARFLT_sm_sunSampleSizeNear;
    rg.drawSun = enabled;
    if ( !DVARFLT_sm_sunSampleSizeNear && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_sunSampleSizeNear") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    v7 = v6->current.value;
    v8 = DVARINT_sm_sunCascadeSizeMultiplier1;
    v9 = 2;
    rg.sunSampleSizeNear = v7;
    if ( DVARINT_sm_sunCascadeSizeMultiplier1 )
    {
      Dvar_CheckFrontendServerThread(DVARINT_sm_sunCascadeSizeMultiplier1);
      integer = v8->current.integer;
    }
    else
    {
      integer = 2;
    }
    v11 = DVARINT_sm_sunCascadeSizeMultiplier2;
    rg.sunCascadeSizeMultiplier[0] = integer;
    if ( DVARINT_sm_sunCascadeSizeMultiplier2 )
    {
      Dvar_CheckFrontendServerThread(DVARINT_sm_sunCascadeSizeMultiplier2);
      v9 = v11->current.integer;
    }
    rg.sunCascadeSizeMultiplier[1] = v9;
    v12 = DVARFLT_r_sdfShadowPenumbra;
    v13 = 0.0;
    if ( DVARFLT_r_sdfShadowPenumbra )
    {
      Dvar_CheckFrontendServerThread(DVARFLT_r_sdfShadowPenumbra);
      v14 = v12->current.value;
    }
    else
    {
      v14 = 0.0;
    }
    v15 = DVARINT_sm_roundRobinPrioritySpotShadows;
    v16 = 0;
    rg.sdfShadowPenumbra = v14;
    if ( DVARINT_sm_roundRobinPrioritySpotShadows )
    {
      Dvar_CheckFrontendServerThread(DVARINT_sm_roundRobinPrioritySpotShadows);
      v17 = v15->current.integer;
    }
    else
    {
      v17 = 0;
    }
    v18 = DVARINT_sm_spotUpdateLimit;
    rg.roundRobinPrioritySpotShadows = v17;
    if ( DVARINT_sm_spotUpdateLimit )
    {
      Dvar_CheckFrontendServerThread(DVARINT_sm_spotUpdateLimit);
      v19 = v18->current.integer;
    }
    else
    {
      v19 = 0;
    }
    rg.spotUpdateLimit = v19;
    if ( rg.spotCandidateLimit < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rendercmds.cpp", 3939, ASSERT_TYPE_ASSERT, "( rg.spotCandidateLimit ) >= ( 0 )", "%s >= %s\n\t%i, %i", "rg.spotCandidateLimit", "0", rg.spotCandidateLimit, 0i64) )
      __debugbreak();
    v20 = DVARBOOL_r_umbraExclusive;
    if ( !DVARBOOL_r_umbraExclusive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_umbraExclusive") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    v21 = v20->current.enabled;
    v22 = DVARFLT_r_umbraAccurateOcclusionThreshold;
    rg.umbraExclusive = v21;
    if ( !DVARFLT_r_umbraAccurateOcclusionThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_umbraAccurateOcclusionThreshold") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    v23 = v22->current.value;
    v24 = DVARFLT_r_umbraShadowAccurateOcclusionThreshold;
    rg.umbraAccurateOcclusionThreshold = v23;
    if ( !DVARFLT_r_umbraShadowAccurateOcclusionThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_umbraShadowAccurateOcclusionThreshold") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v24);
    v25 = v24->current.value;
    v26 = DVARFLT_r_umbraMinObjectContribution;
    rg.umbraShadowAccurateOcclusionThreshold = v25;
    if ( !DVARFLT_r_umbraMinObjectContribution && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_umbraMinObjectContribution") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    v27 = v26->current.value;
    v28 = DVARFLT_r_sceneResMinContributionScale;
    rg.umbraMinObjectContribution = v27;
    if ( !DVARFLT_r_sceneResMinContributionScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneResMinContributionScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v28);
    v29 = rg.umbraMinObjectContribution * v28->current.value;
    v30 = DVARFLT_r_umbraMinShadowObjectContribution;
    rg.umbraMinObjectContribution = v29;
    if ( !DVARFLT_r_umbraMinShadowObjectContribution && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_umbraMinShadowObjectContribution") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v30);
    v31 = v30->current.value;
    v32 = DVARBOOL_r_showReactiveMotionSModels;
    rg.umbraMinShadowObjectContribution = v31;
    if ( !DVARBOOL_r_showReactiveMotionSModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_showReactiveMotionSModels") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v32);
    v33 = !v32->current.enabled;
    v34 = DVARBOOL_r_showSplinedSModels;
    rg.hideReactiveMotionSModels = v33;
    if ( !DVARBOOL_r_showSplinedSModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_showSplinedSModels") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v34);
    v33 = !v34->current.enabled;
    v35 = DVARFLT_r_vertexDeformCutOffDist;
    rg.hideSplinedModels = v33;
    if ( DVARFLT_r_vertexDeformCutOffDist )
    {
      Dvar_CheckFrontendServerThread(DVARFLT_r_vertexDeformCutOffDist);
      v36 = v35->current.value;
    }
    else
    {
      v36 = FLOAT_512_0;
    }
    v37 = DVARFLT_r_vertexDeformFadeDist;
    rg.vertexDeformCutOffDist = v36;
    if ( DVARFLT_r_vertexDeformFadeDist )
    {
      Dvar_CheckFrontendServerThread(DVARFLT_r_vertexDeformFadeDist);
      v38 = v37->current.value;
    }
    else
    {
      v38 = FLOAT_256_0;
    }
    v39 = DVARFLT_r_tessellationFactor;
    rg.vertexDeformFadeDist = v38;
    if ( DVARFLT_r_tessellationFactor )
    {
      Dvar_CheckFrontendServerThread(DVARFLT_r_tessellationFactor);
      v40 = v39->current.value;
    }
    else
    {
      v40 = 0.0;
    }
    v41 = DVARFLT_r_tessellationCutoffDistance;
    rg.tessellationFactor = v40;
    if ( DVARFLT_r_tessellationCutoffDistance )
    {
      Dvar_CheckFrontendServerThread(DVARFLT_r_tessellationCutoffDistance);
      v42 = v41->current.value;
    }
    else
    {
      v42 = FLOAT_960_0;
    }
    v43 = DVARFLT_r_tessellationCutoffFalloff;
    rg.tessellationCutoffDistance = v42;
    if ( DVARFLT_r_tessellationCutoffFalloff )
    {
      Dvar_CheckFrontendServerThread(DVARFLT_r_tessellationCutoffFalloff);
      v44 = v43->current.value;
    }
    else
    {
      v44 = FLOAT_320_0;
    }
    v45 = DVARFLT_r_st_lodDistanceScale;
    rg.tessellationCutoffFalloff = v44;
    if ( DVARFLT_r_st_lodDistanceScale )
    {
      Dvar_CheckFrontendServerThread(DVARFLT_r_st_lodDistanceScale);
      v46 = v45->current.value;
    }
    else
    {
      v46 = FLOAT_1_0;
    }
    v47 = DVARINT_sm_firstForceCacheSModelPartition;
    rg.stLodDistanceScale = v46;
    if ( !DVARINT_sm_firstForceCacheSModelPartition || (v48 = R_CheckDvarModified(DVARINT_sm_firstForceCacheSModelPartition), v47 = DVARINT_sm_firstForceCacheSModelPartition, rg.needSunShadowCacheFlush = 1, !v48) )
      rg.needSunShadowCacheFlush = 0;
    if ( v47 )
    {
      Dvar_CheckFrontendServerThread(v47);
      unsignedInt = v47->current.unsignedInt;
    }
    else
    {
      unsignedInt = 3;
    }
    v50 = DVARINT_r_compressedSunShadowFiltering;
    rg.firstForceCacheSModelPartition = unsignedInt;
    if ( DVARINT_r_compressedSunShadowFiltering )
    {
      Dvar_CheckFrontendServerThread(DVARINT_r_compressedSunShadowFiltering);
      v51 = v50->current.unsignedInt;
    }
    else
    {
      v51 = 0;
    }
    v52 = DVARFLT_r_compressedSunShadowFilteringMaxRadius;
    rg.compressedSunShadowFiltering = v51;
    if ( DVARFLT_r_compressedSunShadowFilteringMaxRadius )
    {
      Dvar_CheckFrontendServerThread(DVARFLT_r_compressedSunShadowFilteringMaxRadius);
      v53 = v52->current.value;
    }
    else
    {
      v53 = 0.0;
    }
    v54 = DVARFLT_r_compressedSunShadowFilteringFarZ;
    rg.compressedSunShadowFilteringMaxRadius = v53;
    if ( DVARFLT_r_compressedSunShadowFilteringFarZ )
    {
      Dvar_CheckFrontendServerThread(DVARFLT_r_compressedSunShadowFilteringFarZ);
      v55 = v54->current.value;
    }
    else
    {
      v55 = 0.0;
    }
    rg.compressedSunShadowFilteringFarZ = v55;
    if ( !rg.useCompressedSunShadow || (v56 = DVARBOOL_r_compressedSunShadowClipPlanes) == NULL || (Dvar_CheckFrontendServerThread(DVARBOOL_r_compressedSunShadowClipPlanes), v33 = !v56->current.enabled, rg.useCompressedSunShadowClipPlanes = 1, v33) )
      rg.useCompressedSunShadowClipPlanes = 0;
    v57 = DVARFLT_sm_spotDistCull;
    if ( DVARFLT_sm_spotDistCull )
    {
      Dvar_CheckFrontendServerThread(DVARFLT_sm_spotDistCull);
      v13 = v57->current.value;
    }
    v58 = DCONST_DVARFLT_r_thermalFog;
    rg.smSpotDistCull = v13;
    rg.useNightAndThermalVisionComboTweak = r_nightAndThermalVisionTweak->current.enabled;
    rg.useNightAndThermalVisionCombo = r_nightAndThermalVision->current.enabled;
    LODWORD(rg.nightVisionExposureAdjustment) = r_nightVisionExposureAdjustment->current.integer;
    LODWORD(rg.nightVisionMinExposureBias) = r_nightVisionMinExposureBias->current.integer;
    LODWORD(rg.thermalAmbient) = r_thermalAmbient->current.integer;
    LODWORD(rg.thermalAmbientReflection) = r_thermalAmbientReflection->current.integer;
    LODWORD(rg.thermalRadiationMin) = r_thermalRadiationMin->current.integer;
    LODWORD(rg.thermalRadiationMax) = r_thermalRadiationMax->current.integer;
    LODWORD(rg.lightIntensityScopeScreen) = r_lightIntensityScopeScreen->current.integer;
    LODWORD(rg.thermalSurfaceNormalStrength) = r_thermalSurfaceNormalStrength->current.integer;
    LODWORD(rg.thermalCutoff) = r_thermalCutoff->current.integer;
    if ( !DCONST_DVARFLT_r_thermalFog && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_thermalFog") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v58);
    v59 = v58->current.value;
    v60 = DVARBOOL_r_gpuCullTriOcclusionUmbra;
    rg.thermalFog = v59;
    rg.thermalColdColor = *(vec3_t *)&r_thermalColdColor->current.string;
    rg.thermalHotColor = *(vec3_t *)&r_thermalHotColor->current.string;
    LODWORD(rg.thermalColorScale) = r_thermalColorScale->current.integer;
    rg.useNVGScope = r_nvgScopeForce->current.enabled;
    LODWORD(rg.thermalSurfaceNormalStrengthMul) = r_thermalSurfaceNormalStrengthMul->current.integer;
    if ( DVARBOOL_r_gpuCullTriOcclusionUmbra )
    {
      Dvar_CheckFrontendServerThread(DVARBOOL_r_gpuCullTriOcclusionUmbra);
      v61 = v60->current.enabled;
    }
    else
    {
      v61 = 0;
    }
    v62 = DVARBOOL_r_gpuCullTriClusterOcclusionUmbra;
    if ( DVARBOOL_r_gpuCullTriClusterOcclusionUmbra )
    {
      Dvar_CheckFrontendServerThread(DVARBOOL_r_gpuCullTriClusterOcclusionUmbra);
      LOBYTE(v62) = v62->current.enabled;
    }
    if ( rg.gpuCullTriOcclusionUmbra != v61 || rg.gpuCullOcclusionUmbra != (_BYTE)v62 )
    {
      R_SyncRenderThread();
      rg.gpuCullTriOcclusionUmbra = v61;
      rg.gpuCullOcclusionUmbra = (char)v62;
    }
    v63 = DVARINT_r_waveWaterEnable;
    if ( DVARINT_r_waveWaterEnable )
    {
      Dvar_CheckFrontendServerThread(DVARINT_r_waveWaterEnable);
      v16 = v63->current.integer;
    }
    if ( rg.waveWaterEnable == v16 )
      goto LABEL_109;
    goto LABEL_108;
  }
  tessellationCutoffDistance = FLOAT_960_0;
  v16 = 0;
  rg.umbraExclusive = 1;
  rg.sunSampleSizeNear = FLOAT_0_25;
  *(_OWORD *)&rg.umbraAccurateOcclusionThreshold = _xmm;
  rg.vertexDeformCutOffDist = FLOAT_512_0;
  rg.tessellationCutoffFalloff = FLOAT_320_0;
  rg.vertexDeformFadeDist = FLOAT_256_0;
  rg.lightGridSHBands = 0;
  *(_OWORD *)&rg.nightVisionExposureAdjustment = 0i64;
  *(_OWORD *)&rg.thermalCutoff = 0i64;
  rg.specularColorScale = FLOAT_1_0;
  rg.diffuseColorScale = FLOAT_1_0;
  rg.sdfShadowPenumbra = 0.0;
  rg.compressedSunShadowFilteringMaxRadius = 0.0;
  rg.compressedSunShadowFilteringFarZ = 0.0;
  rg.smSpotDistCull = 0.0;
  rg.tessellationFactor = 0.0;
  rg.tessellationCutoffDistance = FLOAT_960_0;
  rg.stLodDistanceScale = FLOAT_1_0;
  rg.thermalColorScale = FLOAT_1_0;
  rg.thermalSurfaceNormalStrengthMul = FLOAT_1_0;
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
  *(_OWORD *)&rg.thermalRadiationMin = 0i64;
  *(_OWORD *)&rg.thermalColdColor.z = 0i64;
  if ( rg.gpuCullTriOcclusionUmbra || rg.gpuCullOcclusionUmbra )
  {
    R_SyncRenderThread();
    tessellationCutoffDistance = rg.tessellationCutoffDistance;
    *(_WORD *)&rg.gpuCullTriOcclusionUmbra = 0;
  }
  if ( rg.waveWaterEnable )
  {
LABEL_108:
    R_SyncRenderThread();
    rg.waveWaterEnable = v16;
LABEL_109:
    rg.tessellationCutoffDistanceSq = rg.tessellationCutoffDistance * rg.tessellationCutoffDistance;
    return;
  }
  rg.tessellationCutoffDistanceSq = tessellationCutoffDistance * tessellationCutoffDistance;
}

/*
==============
R_UpdateFrontEndDvarOptions_Shadows
==============
*/
void R_UpdateFrontEndDvarOptions_Shadows(bool splitscreen)
{
  const dvar_t *v2; 
  const dvar_t *v3; 
  float value; 
  char enabled; 
  char v6; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  float v9; 
  const dvar_t *v10; 
  int integer; 
  const dvar_t *v12; 

  rg.spotCandidateLimit = 64;
  rg.useSunShadow = 2;
  if ( R_CheckDvarModified(r_shadowTileResolution) || DVARINT_sm_sunDistantShadows && R_CheckDvarModified(DVARINT_sm_sunDistantShadows) )
    goto LABEL_9;
  v2 = DVARBOOL_sm_sunFarShadows;
  if ( DVARBOOL_sm_sunFarShadows )
  {
    if ( R_CheckDvarModified(DVARBOOL_sm_sunFarShadows) )
      goto LABEL_9;
    v2 = DVARBOOL_sm_sunFarShadows;
  }
  if ( DVARFLT_sm_sunShadowScaleSingleLQ )
  {
    v3 = Dvar_ValidatePtr(DVARFLT_sm_sunShadowScaleSingleLQ);
    if ( !R_CheckDvarModified(v3) )
    {
LABEL_10:
      v2 = DVARBOOL_sm_sunFarShadows;
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
  value = FLOAT_1_0;
  rg.sunShadowScaleSingleLQ = FLOAT_1_0;
  if ( v2 )
  {
    Dvar_CheckFrontendServerThread(v2);
    enabled = v2->current.enabled;
  }
  else
  {
    enabled = 1;
  }
  v6 = 0;
  if ( !splitscreen )
    goto LABEL_27;
  v7 = DCONST_DVARBOOL_r_splitscreenSingleSunShadow;
  if ( !DCONST_DVARBOOL_r_splitscreenSingleSunShadow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_splitscreenSingleSunShadow") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
  {
    v6 = 1;
    rg.sunShadowOpaqueCascadeLimit = 1;
  }
  else
  {
LABEL_27:
    if ( enabled )
    {
      v10 = DVARINT_sm_sunDistantShadows;
      if ( DVARINT_sm_sunDistantShadows )
      {
        Dvar_CheckFrontendServerThread(DVARINT_sm_sunDistantShadows);
        integer = v10->current.integer;
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
  if ( !v6 )
  {
LABEL_31:
    *(_DWORD *)&rg.firstCachedSunShadowPartition = 0;
    goto LABEL_32;
  }
  v8 = DVARFLT_sm_sunShadowScaleSingleLQ;
  if ( DVARFLT_sm_sunShadowScaleSingleLQ )
  {
    Dvar_CheckFrontendServerThread(DVARFLT_sm_sunShadowScaleSingleLQ);
    value = v8->current.value;
  }
  rg.sunShadowScaleSingleLQ = value;
  if ( enabled )
  {
    v9 = (float)(unsigned int)(1 << SLOBYTE(rg.sunCascadeSizeMultiplier[0]));
    rg.sunShadowScaleSingleLQ = v9 * value;
  }
LABEL_25:
  if ( rg.sunShadowOpaqueCascadeCount <= 1 )
    goto LABEL_31;
LABEL_26:
  rg.firstCachedSunShadowPartition = LOWORD(rg.sunShadowOpaqueCascadeCount) - 2;
  rg.lastCachedSunShadowPartition = LOWORD(rg.sunShadowOpaqueCascadeCount) - 2 + 1;
LABEL_32:
  v12 = r_shadowTileResolution;
  if ( !r_shadowTileResolution && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  rg.shadowMapResolutionIndex = v12->current.integer;
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

