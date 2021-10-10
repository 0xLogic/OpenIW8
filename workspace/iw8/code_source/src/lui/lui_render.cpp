/*
==============
LUI_Render_ResetParallaxEnabled
==============
*/

void LUI_Render_ResetParallaxEnabled(void)
{
  ?LUI_Render_ResetParallaxEnabled@@YAXXZ();
}

/*
==============
LUI_Render_DrawImage
==============
*/

void __fastcall LUI_Render_DrawImage(const LocalClientNum_t localClientNum, LUIElement *element, lua_State *luaVM, const vec4_t (*verts)[4], float uMin, float vMin, float uMax, float vMax, const vec4_t *color, const GfxImage *material)
{
  ?LUI_Render_DrawImage@@YAXW4LocalClientNum_t@@PEAULUIElement@@PEAUlua_State@@AEAY03$$CBTvec4_t@@MMMMAEBT4@PEBUGfxImage@@@Z(localClientNum, element, luaVM, verts, uMin, vMin, uMax, vMax, color, material);
}

/*
==============
LUI_Render_ResetDrawListMode
==============
*/

void LUI_Render_ResetDrawListMode(void)
{
  ?LUI_Render_ResetDrawListMode@@YAXXZ();
}

/*
==============
LUI_Render_DrawQuadCache
==============
*/

void __fastcall LUI_Render_DrawQuadCache(lua_State *luaVM, UIQuadCache *quadCache)
{
  ?LUI_Render_DrawQuadCache@@YAXPEAUlua_State@@PEAUUIQuadCache@@@Z(luaVM, quadCache);
}

/*
==============
LUI_Render_PopScopeIndex
==============
*/

void LUI_Render_PopScopeIndex(void)
{
  ?LUI_Render_PopScopeIndex@@YAXXZ();
}

/*
==============
LUI_Render_GetColorSourceImageType
==============
*/

LUIColorSource __fastcall LUI_Render_GetColorSourceImageType(bool isSDF, GfxPixelShapeType pixelShapeType)
{
  return ?LUI_Render_GetColorSourceImageType@@YA?AW4LUIColorSource@@_NW4GfxPixelShapeType@@@Z(isSDF, pixelShapeType);
}

/*
==============
LUI_Render_PopMask
==============
*/

void __fastcall LUI_Render_PopMask(const LocalClientNum_t localClientNum)
{
  ?LUI_Render_PopMask@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_Render_PopRTT
==============
*/

unsigned int __fastcall LUI_Render_PopRTT(const LocalClientNum_t localClientNum)
{
  return ?LUI_Render_PopRTT@@YAIW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_Render_GetCurrentDrawListMode
==============
*/

unsigned int __fastcall LUI_Render_GetCurrentDrawListMode()
{
  return ?LUI_Render_GetCurrentDrawListMode@@YAIXZ();
}

/*
==============
LUI_Render_GetCurrentParallaxAmount
==============
*/

double __fastcall LUI_Render_GetCurrentParallaxAmount()
{
  double result; 

  *(float *)&result = ?LUI_Render_GetCurrentParallaxAmount@@YAMXZ();
  return result;
}

/*
==============
LUI_Render_PopUnitScale
==============
*/

void LUI_Render_PopUnitScale(void)
{
  ?LUI_Render_PopUnitScale@@YAXXZ();
}

/*
==============
LUI_Render_PushScopeIndex
==============
*/

void __fastcall LUI_Render_PushScopeIndex(int index)
{
  ?LUI_Render_PushScopeIndex@@YAXH@Z(index);
}

/*
==============
LUI_Render_ApplyParallax
==============
*/

void __fastcall LUI_Render_ApplyParallax(const vec4_t *inPosition, vec4_t *outPosition, const float *overrideAmount)
{
  ?LUI_Render_ApplyParallax@@YAXAEBTvec4_t@@AEAT1@PEBM@Z(inPosition, outPosition, overrideAmount);
}

/*
==============
LUI_Render_PopBlendMode
==============
*/

void LUI_Render_PopBlendMode(void)
{
  ?LUI_Render_PopBlendMode@@YAXXZ();
}

/*
==============
LUI_Render_DrawText
==============
*/

void __fastcall LUI_Render_DrawText(const LocalClientNum_t localClientNum, lua_State *luaVM, LUIElement *element, const vec4_t (*verts)[4], const vec4_t *color, GfxFont *font, const char *text, int style, char tracking, float rotation, int fontSize, FontDecodeStyle *fontDecodeStyle, FontGlowStyle *fontGlowStyle)
{
  ?LUI_Render_DrawText@@YAXW4LocalClientNum_t@@PEAUlua_State@@PEAULUIElement@@AEAY03$$CBTvec4_t@@AEBT4@PEAUGfxFont@@PEBDHDMHPEAUFontDecodeStyle@@PEAUFontGlowStyle@@@Z(localClientNum, luaVM, element, verts, color, font, text, style, tracking, rotation, fontSize, fontDecodeStyle, fontGlowStyle);
}

/*
==============
LUI_Render_DrawQuadRotated
==============
*/

void __fastcall LUI_Render_DrawQuadRotated(const LocalClientNum_t localClientNum, LUIElement *element, float centerX, float centerY, float width, float height, float uMin, float vMin, float uMax, float vMax, float angle, float red, float green, float blue, float alpha, const GfxImage *material, lua_State *luaVM)
{
  ?LUI_Render_DrawQuadRotated@@YAXW4LocalClientNum_t@@PEAULUIElement@@MMMMMMMMMMMMMPEBUGfxImage@@PEAUlua_State@@@Z(localClientNum, element, centerX, centerY, width, height, uMin, vMin, uMax, vMax, angle, red, green, blue, alpha, material, luaVM);
}

/*
==============
LUI_Render_PopPixelGrid
==============
*/

void __fastcall LUI_Render_PopPixelGrid(const LocalClientNum_t localClientNum)
{
  ?LUI_Render_PopPixelGrid@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_Render_PopParallaxEnabled
==============
*/

void LUI_Render_PopParallaxEnabled(void)
{
  ?LUI_Render_PopParallaxEnabled@@YAXXZ();
}

/*
==============
LUI_Render_ClearColorOp
==============
*/

void __fastcall LUI_Render_ClearColorOp(const LocalClientNum_t localClientNum)
{
  ?LUI_Render_ClearColorOp@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_Render_CalculatePixelShapeInnerRadius
==============
*/

double __fastcall LUI_Render_CalculatePixelShapeInnerRadius(const vec2_t *const verts, const float uMin, const float uMax, const float vMin, const float vMax, const float shapeWidth)
{
  double result; 

  *(float *)&result = ?LUI_Render_CalculatePixelShapeInnerRadius@@YAMQEBTvec2_t@@MMMMM@Z(verts, uMin, uMax, vMin, vMax, shapeWidth);
  return result;
}

/*
==============
LUI_Render_ApplyOffsetForCameraShake
==============
*/

void __fastcall LUI_Render_ApplyOffsetForCameraShake(const LocalClientNum_t localClientNum, vec4_t *verts, unsigned int vertCount)
{
  ?LUI_Render_ApplyOffsetForCameraShake@@YAXW4LocalClientNum_t@@PEATvec4_t@@I@Z(localClientNum, verts, vertCount);
}

/*
==============
LUI_Render_ClearStencilStack
==============
*/

void LUI_Render_ClearStencilStack(void)
{
  ?LUI_Render_ClearStencilStack@@YAXXZ();
}

/*
==============
LUI_Render_ClearMask
==============
*/

void LUI_Render_ClearMask(void)
{
  ?LUI_Render_ClearMask@@YAXXZ();
}

/*
==============
LUI_Render_PushMask
==============
*/

void __fastcall LUI_Render_PushMask(const LocalClientNum_t localClientNum, float maskCenterX, float maskCenterY, float maskWidth, float maskHeight, float maskRotation, float alphaScale, float alphaOffset, bool applyParallax, float maskUMin, float maskVMin, float maskUMax, float maskVMax, const vec2_t *viewportSize, GfxImage *image)
{
  ?LUI_Render_PushMask@@YAXW4LocalClientNum_t@@MMMMMMM_NMMMMAEBTvec2_t@@PEAUGfxImage@@@Z(localClientNum, maskCenterX, maskCenterY, maskWidth, maskHeight, maskRotation, alphaScale, alphaOffset, applyParallax, maskUMin, maskVMin, maskUMax, maskVMax, viewportSize, image);
}

/*
==============
LUI_Render_DrawImage_SDF
==============
*/

void __fastcall LUI_Render_DrawImage_SDF(const LocalClientNum_t localClientNum, LUIElement *element, lua_State *luaVM, const vec4_t (*verts)[4], float uMin, float vMin, float uMax, float vMax, const vec4_t *color, const GfxImage *material)
{
  ?LUI_Render_DrawImage_SDF@@YAXW4LocalClientNum_t@@PEAULUIElement@@PEAUlua_State@@AEAY03$$CBTvec4_t@@MMMMAEBT4@PEBUGfxImage@@@Z(localClientNum, element, luaVM, verts, uMin, vMin, uMax, vMax, color, material);
}

/*
==============
LUI_Render_ImageFill
==============
*/

void __fastcall LUI_Render_ImageFill(const LocalClientNum_t localClientNum, LUIElement *element, float red, float green, float blue, float alpha, const GfxImage *material, lua_State *luaVM)
{
  ?LUI_Render_ImageFill@@YAXW4LocalClientNum_t@@PEAULUIElement@@MMMMPEBUGfxImage@@PEAUlua_State@@@Z(localClientNum, element, red, green, blue, alpha, material, luaVM);
}

/*
==============
LUI_Render_PopBlur
==============
*/

void LUI_Render_PopBlur(void)
{
  ?LUI_Render_PopBlur@@YAXXZ();
}

/*
==============
LUI_Render_PushPixelGrid
==============
*/

void __fastcall LUI_Render_PushPixelGrid(const LocalClientNum_t localClientNum, LUIElement *element)
{
  ?LUI_Render_PushPixelGrid@@YAXW4LocalClientNum_t@@PEAULUIElement@@@Z(localClientNum, element);
}

/*
==============
LUI_Render_ClearUnitScale
==============
*/

void LUI_Render_ClearUnitScale(void)
{
  ?LUI_Render_ClearUnitScale@@YAXXZ();
}

/*
==============
LUI_Render_PushGlitch
==============
*/

void __fastcall LUI_Render_PushGlitch(float glitchAmount)
{
  ?LUI_Render_PushGlitch@@YAXM@Z(glitchAmount);
}

/*
==============
LUI_Render_PushCustomList
==============
*/

void __fastcall LUI_Render_PushCustomList(const LocalClientNum_t localClientNum, const unsigned int customList)
{
  ?LUI_Render_PushCustomList@@YAXW4LocalClientNum_t@@I@Z(localClientNum, customList);
}

/*
==============
LUI_Render_PopCustomList
==============
*/

void __fastcall LUI_Render_PopCustomList(const LocalClientNum_t localClientNum, const unsigned int customList)
{
  ?LUI_Render_PopCustomList@@YAXW4LocalClientNum_t@@I@Z(localClientNum, customList);
}

/*
==============
LUI_Render_PushRTT
==============
*/

bool __fastcall LUI_Render_PushRTT(const LocalClientNum_t localClientNum, unsigned __int8 rttHandle)
{
  return ?LUI_Render_PushRTT@@YA_NW4LocalClientNum_t@@E@Z(localClientNum, rttHandle);
}

/*
==============
LUI_Render_ClearPixelGrid
==============
*/

void __fastcall LUI_Render_ClearPixelGrid(const LocalClientNum_t localClientNum)
{
  ?LUI_Render_ClearPixelGrid@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_Render_PushAsyncRenderSuspend
==============
*/

void LUI_Render_PushAsyncRenderSuspend(void)
{
  ?LUI_Render_PushAsyncRenderSuspend@@YAXXZ();
}

/*
==============
LUI_Render_PushUnitScale
==============
*/

void __fastcall LUI_Render_PushUnitScale(float unitScale)
{
  ?LUI_Render_PushUnitScale@@YAXM@Z(unitScale);
}

/*
==============
LUI_Render_GetCurrentRTT
==============
*/

unsigned __int8 __fastcall LUI_Render_GetCurrentRTT()
{
  return ?LUI_Render_GetCurrentRTT@@YAEXZ();
}

/*
==============
LUI_Render_GetCurrentUnitScale
==============
*/

double __fastcall LUI_Render_GetCurrentUnitScale()
{
  double result; 

  *(float *)&result = ?LUI_Render_GetCurrentUnitScale@@YAMXZ();
  return result;
}

/*
==============
LUI_IsParallaxEnabled
==============
*/

bool __fastcall LUI_IsParallaxEnabled()
{
  return ?LUI_IsParallaxEnabled@@YA_NXZ();
}

/*
==============
LUI_Render_ClearGlitch
==============
*/

void __fastcall LUI_Render_ClearGlitch(const LocalClientNum_t localClientNum)
{
  ?LUI_Render_ClearGlitch@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_Render_DrawQuadRotatedRelativeToPoint
==============
*/

void __fastcall LUI_Render_DrawQuadRotatedRelativeToPoint(const LocalClientNum_t localClientNum, LUIElement *element, float rotationCenterX, float rotationCenterY, float quadCenterX, float quadCenterY, float width, float height, float uMin, float vMin, float uMax, float vMax, float angle, float red, float green, float blue, float alpha, const GfxImage *material, lua_State *luaVM)
{
  ?LUI_Render_DrawQuadRotatedRelativeToPoint@@YAXW4LocalClientNum_t@@PEAULUIElement@@MMMMMMMMMMMMMMMPEBUGfxImage@@PEAUlua_State@@@Z(localClientNum, element, rotationCenterX, rotationCenterY, quadCenterX, quadCenterY, width, height, uMin, vMin, uMax, vMax, angle, red, green, blue, alpha, material, luaVM);
}

/*
==============
LUI_RenderImmediate_ClearColorOp
==============
*/

void __fastcall LUI_RenderImmediate_ClearColorOp()
{
  ?LUI_RenderImmediate_ClearColorOp@@YAXXZ();
}

/*
==============
LUI_Render_PushBlendMode
==============
*/

void __fastcall LUI_Render_PushBlendMode(const LUIBlendMode blendMode)
{
  ?LUI_Render_PushBlendMode@@YAXW4LUIBlendMode@@@Z(blendMode);
}

/*
==============
LUI_Render_DrawImageRotatedUV
==============
*/

void __fastcall LUI_Render_DrawImageRotatedUV(const LocalClientNum_t localClientNum, LUIElement *element, lua_State *luaVM, const vec4_t (*verts)[4], float uCenter, float vCenter, float uScale, float vScale, float uvAngle, const vec4_t *color, const GfxImage *material)
{
  ?LUI_Render_DrawImageRotatedUV@@YAXW4LocalClientNum_t@@PEAULUIElement@@PEAUlua_State@@AEAY03$$CBTvec4_t@@MMMMMAEBT4@PEBUGfxImage@@@Z(localClientNum, element, luaVM, verts, uCenter, vCenter, uScale, vScale, uvAngle, color, material);
}

/*
==============
LUI_Render_PopGlitch
==============
*/

void LUI_Render_PopGlitch(void)
{
  ?LUI_Render_PopGlitch@@YAXXZ();
}

/*
==============
LUI_Render_ClearAsyncRenderSuspend
==============
*/

void LUI_Render_ClearAsyncRenderSuspend(void)
{
  ?LUI_Render_ClearAsyncRenderSuspend@@YAXXZ();
}

/*
==============
LUI_Render_PushStencilRectangle
==============
*/

void __fastcall LUI_Render_PushStencilRectangle(const LocalClientNum_t localClientNum, float left, float top, float right, float bottom)
{
  ?LUI_Render_PushStencilRectangle@@YAXW4LocalClientNum_t@@MMMM@Z(localClientNum, left, top, right, bottom);
}

/*
==============
LUI_Render_DrawMouseCursor
==============
*/

void __fastcall LUI_Render_DrawMouseCursor(const LocalClientNum_t localClientNum, LUIElement *element, float red, float green, float blue, float alpha, int controllerIndex)
{
  ?LUI_Render_DrawMouseCursor@@YAXW4LocalClientNum_t@@PEAULUIElement@@MMMMH@Z(localClientNum, element, red, green, blue, alpha, controllerIndex);
}

/*
==============
LUI_Render_PopAsyncRenderSuspend
==============
*/

void LUI_Render_PopAsyncRenderSuspend(void)
{
  ?LUI_Render_PopAsyncRenderSuspend@@YAXXZ();
}

/*
==============
LUI_Render_DrawImage_PixelShape
==============
*/

void __fastcall LUI_Render_DrawImage_PixelShape(const LocalClientNum_t localClientNum, LUIElement *element, lua_State *luaVM, const vec4_t (*verts)[4], float uMin, float vMin, float uMax, float vMax, const vec4_t *color, const GfxImage *material, const GfxPixelShapeType pixelShapeType, const float pixelWidth)
{
  ?LUI_Render_DrawImage_PixelShape@@YAXW4LocalClientNum_t@@PEAULUIElement@@PEAUlua_State@@AEAY03$$CBTvec4_t@@MMMMAEBT4@PEBUGfxImage@@W4GfxPixelShapeType@@M@Z(localClientNum, element, luaVM, verts, uMin, vMin, uMax, vMax, color, material, pixelShapeType, pixelWidth);
}

/*
==============
LUI_Render_SendCommandForRTT
==============
*/

void __fastcall LUI_Render_SendCommandForRTT(bool useRTT)
{
  ?LUI_Render_SendCommandForRTT@@YAX_N@Z(useRTT);
}

/*
==============
LUI_Render_GetAsyncRenderSuspended
==============
*/

bool __fastcall LUI_Render_GetAsyncRenderSuspended()
{
  return ?LUI_Render_GetAsyncRenderSuspended@@YA_NXZ();
}

/*
==============
LUI_Render_PushParallaxEnabled
==============
*/

void __fastcall LUI_Render_PushParallaxEnabled(unsigned __int8 value)
{
  ?LUI_Render_PushParallaxEnabled@@YAXE@Z(value);
}

/*
==============
LUI_Render_GetViewportSize
==============
*/

void __fastcall LUI_Render_GetViewportSize(LocalClientNum_t localClientNum, vec2_t *outSize)
{
  ?LUI_Render_GetViewportSize@@YAXW4LocalClientNum_t@@AEATvec2_t@@@Z(localClientNum, outSize);
}

/*
==============
LUI_Render_ClearScopeIndex
==============
*/

void LUI_Render_ClearScopeIndex(void)
{
  ?LUI_Render_ClearScopeIndex@@YAXXZ();
}

/*
==============
LUI_Render_PopColorOp
==============
*/

void LUI_Render_PopColorOp(void)
{
  ?LUI_Render_PopColorOp@@YAXXZ();
}

/*
==============
LUI_Render_GetCurrentBlendMode
==============
*/

LUIBlendMode __fastcall LUI_Render_GetCurrentBlendMode()
{
  return ?LUI_Render_GetCurrentBlendMode@@YA?AW4LUIBlendMode@@XZ();
}

/*
==============
LUI_Render_PopStencilRectangle
==============
*/

void __fastcall LUI_Render_PopStencilRectangle(const LocalClientNum_t localClientNum)
{
  ?LUI_Render_PopStencilRectangle@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_Render_DrawImageRotatedUV
==============
*/

void __fastcall LUI_Render_DrawImageRotatedUV(const LocalClientNum_t localClientNum, LUIElement *element, lua_State *luaVM, const vec4_t (*verts)[4], float uCenter, float vCenter, float uScale, float vScale, float uMin, float vMin, float uMax, float vMax, float uvAngle, const vec4_t *color, const GfxImage *material)
{
  ?LUI_Render_DrawImageRotatedUV@@YAXW4LocalClientNum_t@@PEAULUIElement@@PEAUlua_State@@AEAY03$$CBTvec4_t@@MMMMMMMMMAEBT4@PEBUGfxImage@@@Z(localClientNum, element, luaVM, verts, uCenter, vCenter, uScale, vScale, uMin, vMin, uMax, vMax, uvAngle, color, material);
}

/*
==============
LUI_Render_GetMaterial
==============
*/

Material *__fastcall LUI_Render_GetMaterial(LUIColorSource colorSource, bool allowUiPost)
{
  return ?LUI_Render_GetMaterial@@YAPEAUMaterial@@W4LUIColorSource@@_N@Z(colorSource, allowUiPost);
}

/*
==============
LUI_Render_PushColorOp
==============
*/

void __fastcall LUI_Render_PushColorOp(const LUIColorOpData *colorOp)
{
  ?LUI_Render_PushColorOp@@YAXAEBULUIColorOpData@@@Z(colorOp);
}

/*
==============
LUI_Render_PushBlur
==============
*/

void __fastcall LUI_Render_PushBlur(float amount)
{
  ?LUI_Render_PushBlur@@YAXM@Z(amount);
}

/*
==============
LUI_Render_ClearBlur
==============
*/

void __fastcall LUI_Render_ClearBlur(const LocalClientNum_t localClientNum)
{
  ?LUI_Render_ClearBlur@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_Render_ResetBlendMode
==============
*/

void LUI_Render_ResetBlendMode(void)
{
  ?LUI_Render_ResetBlendMode@@YAXXZ();
}

/*
==============
LUI_IsParallaxEnabled
==============
*/
bool LUI_IsParallaxEnabled()
{
  double CurrentParallaxAmount; 

  if ( LUI_IsInExecDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 402, ASSERT_TYPE_ASSERT, "(!LUI_IsInExecDrawList())", (const char *)&queryFormat, "!LUI_IsInExecDrawList()") )
    __debugbreak();
  CurrentParallaxAmount = LUI_Render_GetCurrentParallaxAmount();
  return *(float *)&CurrentParallaxAmount > 0.0;
}

/*
==============
LUI_RenderImmediate_ClearBlur
==============
*/
void LUI_RenderImmediate_ClearBlur()
{
  R_AddCmdSetUIBlur(0, 0.0);
}

/*
==============
LUI_RenderImmediate_ClearColorOp
==============
*/
void LUI_RenderImmediate_ClearColorOp(void)
{
  R_AddCmdSetUIColorOp(0, 0.0);
}

/*
==============
LUI_RenderImmediate_ClearGlitch
==============
*/
void LUI_RenderImmediate_ClearGlitch()
{
  R_AddCmdSetUIGlitch(0, 0, 0, 0, 0.0);
}

/*
==============
LUI_RenderImmediate_RttBegin
==============
*/
void LUI_RenderImmediate_RttBegin(const unsigned __int8 *rttHandle)
{
  R_AddCmdUIRttBegin(*rttHandle);
}

/*
==============
LUI_RenderImmediate_RttEnd
==============
*/
void LUI_RenderImmediate_RttEnd(const unsigned __int8 *rttHandle)
{
  const GfxViewInfo *ViewInfo; 

  ViewInfo = LUI_GetViewInfo();
  if ( ViewInfo )
    R_AddCmdUIRttEnd(ViewInfo->clientIndex, *rttHandle);
  else
    R_AddCmdUIRttEnd(LOCAL_CLIENT_0, *rttHandle);
}

/*
==============
LUI_RenderImmediate_SetMask
==============
*/
void LUI_RenderImmediate_SetMask(const LUIRenderMaskParams *data)
{
  int renderMaskPushCount; 

  renderMaskPushCount = data->renderMaskPushCount;
  if ( renderMaskPushCount )
  {
    if ( renderMaskPushCount == 1 )
      R_AddCmdSetSecondUIMask(data->maskBounds.v[0], data->maskBounds.v[1], data->maskWidth, data->maskHeight, data->maskRotation, data->alphaScale, data->alphaOffset, data->maskUMin, data->maskVMin, data->maskUMax, data->maskVMax, &data->viewportSize, data->image);
  }
  else
  {
    R_AddCmdSetFirstUIMask(data->maskBounds.v[0], data->maskBounds.v[1], data->maskWidth, data->maskHeight, data->maskRotation, data->alphaScale, data->alphaOffset, data->maskUMin, data->maskVMin, data->maskUMax, data->maskVMax, &data->viewportSize, data->image);
  }
}

/*
==============
LUI_RenderImmediate_SetPixelGrid
==============
*/
void LUI_RenderImmediate_SetPixelGrid(const LUIElementPixelGridSettings *settings)
{
  R_AddCmdSetUIPixelGrid(settings->blockWidth, settings->blockHeight, settings->gutterWidth, settings->gutterHeight, (float)settings->contrast * 0.0039215689);
}

/*
==============
LUI_RenderImmediate_SetScissorRect
==============
*/
void LUI_RenderImmediate_SetScissorRect(const StencilRect *nextRect)
{
  int v3; 

  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 2 }
  v3 = (int)*(float *)&_XMM2;
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 2 }
  R_AddCmdSetScissorRect((int)nextRect->left, (int)nextRect->top, (int)*(float *)&_XMM2, v3);
}

/*
==============
LUI_Render_ApplyColorOp
==============
*/
void LUI_Render_ApplyColorOp(const LUIColorOpData *colorOp)
{
  float param; 

  if ( !colorOp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 641, ASSERT_TYPE_ASSERT, "(colorOp)", (const char *)&queryFormat, "colorOp") )
    __debugbreak();
  if ( s_curColorOp.op != colorOp->op || s_curColorOp.param != colorOp->param )
  {
    param = colorOp->param;
    s_curColorOp = *colorOp;
    R_AddCmdSetUIColorOp(s_curColorOp.op, param);
  }
}

/*
==============
LUI_Render_ApplyGlitch
==============
*/

void __fastcall LUI_Render_ApplyGlitch(double intensity, float unitScale)
{
  int v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  int v11; 
  __int128 v12; 
  __int128 v13; 
  __int128 v14; 
  __int128 v15; 
  __int128 v16; 
  __int128 v17; 
  float v18; 
  __int128 v19; 
  __int128 v20; 
  __int128 v21; 
  __int128 v23; 
  float v24; 
  __int128 v25; 
  __int128 v26; 
  __int128 v27; 
  __int128 v28; 
  __int128 v29; 
  __int128 v33; 
  int v34; 
  __int128 v38; 
  float v42; 

  LODWORD(_XMM9) = LODWORD(intensity);
  if ( s_glitchAmount != *(float *)&intensity )
  {
    s_glitchAmount = *(float *)&intensity;
    v4 = Sys_Milliseconds();
    if ( v4 % 550 >= 500 || v4 % 800 >= 700 || v4 % 2500 >= 2300 )
    {
      v18 = (float)(v4 / 800 % 75) * 0.013333334;
      v19 = 0i64;
      *(float *)&v19 = (float)(v4 / 800 % 130) * 0.0069230767;
      v12 = v19;
      v20 = 0i64;
      *(float *)&v20 = (float)(v4 / 800 % 170) * 0.0052941176;
      v14 = v20;
      v21 = 0i64;
      *(float *)&v21 = (float)(v4 / 800 % 120) * 0.70833331;
      v16 = v21;
    }
    else
    {
      v6 = 0i64;
      *(float *)&v6 = (float)rand();
      v5 = v6;
      v8 = 0i64;
      *(float *)&v8 = (float)rand();
      v7 = v8;
      v10 = 0i64;
      *(float *)&v10 = (float)rand();
      v9 = v10;
      v11 = rand();
      v13 = v5;
      *(float *)&v13 = *(float *)&v5 * 0.000027466658;
      v12 = v13;
      v15 = v7;
      *(float *)&v15 = *(float *)&v7 * 0.000027466658;
      v14 = v15;
      v17 = v9;
      *(float *)&v17 = *(float *)&v9 * 0.0025940733;
      v16 = v17;
      v18 = (float)v11 * 0.000030518509;
    }
    if ( v4 % 4900 > 4700 )
    {
      v23 = *(_OWORD *)&intensity;
      *(float *)&v23 = *(float *)&intensity * 1.5;
      _XMM0 = v23;
      __asm { vminss  xmm9, xmm0, xmm7 }
    }
    v24 = (float)(v18 * 2.0) + 0.1;
    v26 = v12;
    *(float *)&v26 = *(float *)&v12 + 0.1;
    v25 = v26;
    v28 = v14;
    *(float *)&v28 = *(float *)&v14 + 0.1;
    v27 = v28;
    v29 = v25;
    *(float *)&v29 = (float)(*(float *)&v25 * unitScale) * 85.0;
    _XMM0 = v29;
    __asm
    {
      vmaxss  xmm2, xmm0, xmm7
      vminss  xmm1, xmm2, xmm4
    }
    v33 = v27;
    v34 = (int)*(float *)&_XMM1;
    *(float *)&v33 = (float)(*(float *)&v27 * unitScale) * 85.0;
    _XMM1 = v33;
    __asm { vmaxss  xmm2, xmm1, xmm7 }
    v38 = v16;
    *(float *)&v38 = *(float *)&v16 * unitScale;
    _XMM0 = v38;
    __asm
    {
      vmaxss  xmm1, xmm0, xmm7
      vminss  xmm3, xmm2, xmm4
      vminss  xmm2, xmm1, xmm4
    }
    v42 = v24 * unitScale;
    if ( *(float *)&v25 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 555, ASSERT_TYPE_ASSERT, "(blockWidth > 0)", (const char *)&queryFormat, "blockWidth > 0") )
      __debugbreak();
    if ( *(float *)&v27 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 556, ASSERT_TYPE_ASSERT, "(blockHeight > 0)", (const char *)&queryFormat, "blockHeight > 0") )
      __debugbreak();
    if ( v42 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 557, ASSERT_TYPE_ASSERT, "(outMaskPitch > 0.f)", (const char *)&queryFormat, "outMaskPitch > 0.f") )
      __debugbreak();
    R_AddCmdSetUIGlitch((int)(float)(*(float *)&_XMM9 * 255.0), v34, (int)*(float *)&_XMM3, (int)*(float *)&_XMM2, v42);
  }
}

/*
==============
LUI_Render_ApplyOffsetForCameraShake
==============
*/
void LUI_Render_ApplyOffsetForCameraShake(const LocalClientNum_t localClientNum, vec4_t *verts, unsigned int vertCount)
{
  __int64 v4; 
  __int64 v5; 
  cg_t *v6; 
  bool v7; 
  float v8; 
  float v9; 
  float width; 
  float v11; 
  float height; 
  __int64 v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  double v24; 
  float v25; 
  float v26; 
  float v27; 
  __int64 v28; 

  v4 = localClientNum;
  v5 = vertCount;
  if ( localClientNum >= (unsigned int)cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", localClientNum, cg_t::ms_allocatedCount) )
    __debugbreak();
  if ( !cg_t::ms_cgArray[v4] )
  {
    LODWORD(v28) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v28) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v28) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v28) )
      __debugbreak();
  }
  v6 = cg_t::ms_cgArray[v4];
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1891, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( v6->refdef.droneCameraEffects.enabled )
  {
    v7 = (float)v6->refdef.droneCameraEffects.shakeCameraOnOff != 0.0;
    v8 = 1.0 - v6->refdef.droneCameraEffects.zoomUV;
    v9 = FLOAT_0_5;
    width = (float)v6->refdef.displayViewport.width;
    v11 = (float)(1.0 - v8) * 0.5;
    height = (float)v6->refdef.displayViewport.height;
    if ( (_DWORD)v5 )
    {
      v13 = v5;
      v14 = 1.0 / height;
      do
      {
        v16 = (float)((float)((float)(1.0 / width) * verts->v[0]) * v8) + v11;
        v15 = v16;
        v17 = (float)((float)(v14 * verts->v[1]) * v8) + v11;
        if ( v7 )
        {
          v18 = fmodf_0(_mm_cvtepi32_ps((__m128i)(unsigned int)v6->refdef.time).m128_f32[0] * 0.001, 43200.0);
          v19 = (float)((float)(sinf_0(v18 * v6->refdef.droneCameraEffects.shakeCameraVal2) + 1.0) * v9) + v6->refdef.droneCameraEffects.shakeCameraVal3;
          v24 = j___libm_sse2_sincosf_(v21, v20, v22, v23);
          v25 = 1.0 / v6->refdef.droneCameraEffects.shakeCameraVal1;
          v26 = (float)(*(float *)&v24 * v25) * v19;
          v27 = (float)(_mm_shuffle_ps((__m128)*(unsigned __int64 *)&v24, (__m128)*(unsigned __int64 *)&v24, 1).m128_f32[0] * v25) * v19;
          v9 = FLOAT_0_5;
          v15 = v16 - v26;
          v17 = v17 + v27;
          v14 = 1.0 / height;
        }
        verts->v[0] = v15 * width;
        verts->v[1] = v17 * height;
        ++verts;
        --v13;
      }
      while ( v13 );
    }
  }
}

/*
==============
LUI_Render_ApplyParallax
==============
*/
void LUI_Render_ApplyParallax(const vec4_t *inPosition, vec4_t *outPosition, const float *overrideAmount)
{
  double CurrentParallaxAmount; 
  tmat44_t<vec4_t> outMatrix; 

  if ( inPosition == outPosition && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 242, ASSERT_TYPE_ASSERT, "(&inPosition != &outPosition)", (const char *)&queryFormat, "&inPosition != &outPosition") )
    __debugbreak();
  if ( overrideAmount )
    *(float *)&CurrentParallaxAmount = *overrideAmount;
  else
    CurrentParallaxAmount = LUI_Render_GetCurrentParallaxAmount();
  if ( *(float *)&CurrentParallaxAmount <= 0.0 )
  {
    outPosition->v[0] = inPosition->v[0];
    outPosition->v[1] = inPosition->v[1];
    outPosition->v[2] = inPosition->v[2];
    outPosition->v[3] = inPosition->v[3];
  }
  else
  {
    LUI_GetCurrentParallaxMatrix(*(float *)&CurrentParallaxAmount, &outMatrix);
    LUI_Matrix_MultiplyVector(&outMatrix, inPosition, outPosition);
  }
}

/*
==============
LUI_Render_ApplyPixelGrid
==============
*/
void LUI_Render_ApplyPixelGrid(const LocalClientNum_t localClientNum, LUIElementPixelGridSettings *settings)
{
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 418, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  LUI_QuadCache_AddDrawListCommandInternal(localClientNum, (void (__fastcall *)(const void *))LUI_RenderImmediate_SetPixelGrid, settings, 5ui64, 1ui64);
}

/*
==============
LUI_Render_CalculatePixelShapeInnerRadius
==============
*/
float LUI_Render_CalculatePixelShapeInnerRadius(const vec2_t *const verts, const float uMin, const float uMax, const float vMin, const float vMax, const float shapeWidth)
{
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  double v10; 

  v6 = verts[1].v[1] - verts->v[1];
  v7 = verts[3].v[1] - verts->v[1];
  v8 = fminf(fsqrt((float)(v6 * v6) + (float)((float)(verts[1].v[0] - verts->v[0]) * (float)(verts[1].v[0] - verts->v[0]))), fsqrt((float)(v7 * v7) + (float)((float)(verts[3].v[0] - verts->v[0]) * (float)(verts[3].v[0] - verts->v[0]))));
  v9 = fminf(uMax - uMin, vMax - vMin);
  v10 = I_fclamp((float)(v9 * shapeWidth) * (float)(2.0 / v8), 0.0, 1.0);
  return 1.0 - *(float *)&v10;
}

/*
==============
LUI_Render_ChooseSamplerState
==============
*/
__int64 LUI_Render_ChooseSamplerState(LUIQuadUV *uv, const LUIElement *element)
{
  unsigned __int16 v2; 
  float uMax; 
  float vMin; 
  float vMax; 
  int integer; 
  bool v8; 
  const GfxImage *image; 
  GfxPixelFormat format; 
  const dvar_t *v12; 

  v2 = 0;
  if ( uv->mode )
  {
    v2 = 384;
  }
  else
  {
    if ( uv->minMax.uMin >= 0.0 && uv->minMax.uMin <= 1.0 )
    {
      uMax = uv->minMax.uMax;
      if ( uMax >= 0.0 && uMax <= 1.0 )
        v2 = 128;
    }
    vMin = uv->minMax.vMin;
    if ( vMin >= 0.0 && vMin <= 1.0 )
    {
      vMax = uv->minMax.vMax;
      if ( vMax >= 0.0 && vMax <= 1.0 )
        v2 |= 0x100u;
    }
  }
  integer = 2;
  v8 = (element->usageFlags & 0x2000000) != 0;
  if ( LUIElement_IsImageLike(element) && v8 )
    integer = 1;
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1759, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  if ( s_rttDepth )
  {
    if ( s_rttStack[s_rttDepth - 1] )
    {
      if ( LUIElement_IsImageLike(element) )
      {
        image = element->imageData.image;
        if ( image )
        {
          format = image->format;
          if ( (unsigned int)(format - 1) <= 2 || format == GFX_PF_BC4 )
            integer = 1;
        }
      }
    }
  }
  v12 = DCONST_DVARINT_r_lui_setImageFiltering;
  if ( !DCONST_DVARINT_r_lui_setImageFiltering && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_lui_setImageFiltering") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.integer )
    integer = v12->current.integer;
  if ( integer != 1 )
    v2 |= 1u;
  return v2;
}

/*
==============
LUI_Render_ClearAsyncRenderSuspend
==============
*/
void LUI_Render_ClearAsyncRenderSuspend(void)
{
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 612, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  s_numSuspendAsyncRenderElems = 0;
}

/*
==============
LUI_Render_ClearBlur
==============
*/
void LUI_Render_ClearBlur(const LocalClientNum_t localClientNum)
{
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 705, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  LUI_QuadCache_AddDrawListCommand(localClientNum, LUI_RenderImmediate_ClearBlur);
  s_blurAmount = 0.0;
  s_numBlurSettingsActive = 0;
}

/*
==============
LUI_Render_ClearColorOp
==============
*/
void LUI_Render_ClearColorOp(const LocalClientNum_t localClientNum)
{
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 660, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  LUI_QuadCache_AddDrawListCommand(localClientNum, LUI_RenderImmediate_ClearColorOp);
  s_curColorOp = s_nullColorOp;
  s_numColorOpSettingsActive = 0;
}

/*
==============
LUI_Render_ClearGlitch
==============
*/
void LUI_Render_ClearGlitch(const LocalClientNum_t localClientNum)
{
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 571, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  LUI_QuadCache_AddDrawListCommand(localClientNum, LUI_RenderImmediate_ClearGlitch);
  s_glitchAmount = 0.0;
  s_numGlitchSettingsActive = 0;
}

/*
==============
LUI_Render_ClearMask
==============
*/
void LUI_Render_ClearMask(void)
{
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 355, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  s_RenderMaskPushCount = 0;
}

/*
==============
LUI_Render_ClearPixelGrid
==============
*/
void LUI_Render_ClearPixelGrid(const LocalClientNum_t localClientNum)
{
  int data; 
  char v3; 

  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 425, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  if ( s_numPixelGridSettingsActive > 0 )
  {
    data = 0;
    v3 = 0;
    if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 418, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
      __debugbreak();
    LUI_QuadCache_AddDrawListCommandInternal(localClientNum, (void (__fastcall *)(const void *))LUI_RenderImmediate_SetPixelGrid, &data, 5ui64, 1ui64);
    s_numPixelGridSettingsActive = 0;
  }
}

/*
==============
LUI_Render_ClearScopeIndex
==============
*/
void LUI_Render_ClearScopeIndex(void)
{
  s_numScopeIndexSettingsActive = 0;
}

/*
==============
LUI_Render_ClearStencilStack
==============
*/
void LUI_Render_ClearStencilStack(void)
{
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1584, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  s_currStencilRect = -1;
}

/*
==============
LUI_Render_ClearUnitScale
==============
*/
void LUI_Render_ClearUnitScale(void)
{
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 463, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  s_numUnitScaleActive = 0;
}

/*
==============
LUI_Render_CommitQuad
==============
*/
void LUI_Render_CommitQuad(const LocalClientNum_t localClientNum, LUIElement *element, lua_State *luaVM, const vec4_t (*verts)[4], LUIQuadUV *uv, const vec4_t *color, const GfxImage *image, bool isSDF, GfxPixelShapeType pixelShapeType, const float extraParam)
{
  LUIColorSource colorSource; 
  Material *material; 
  double CurrentParallaxAmount; 
  float v17; 
  bool has3DTransforms; 
  float GlitchAmount; 
  float BlurAmount; 
  const LUIColorOpData *colorOp; 
  int scopeIndex; 
  DrawListMode v23; 
  unsigned __int16 pixelShapeTypea; 

  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1235, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  if ( pixelShapeType == GFX_PIXEL_SHAPE_TYPE_CIRCLE )
    colorSource = LUI_COLOR_SOURCE_IMAGE_PIXEL_SHAPE;
  else
    colorSource = isSDF;
  material = LUI_Render_GetMaterial(colorSource, (element->usageFlags & 0x200000) == 0);
  CurrentParallaxAmount = LUI_Render_GetCurrentParallaxAmount();
  v17 = *(float *)&CurrentParallaxAmount;
  has3DTransforms = LUI_Is3DTransformEnabled();
  pixelShapeTypea = LUI_Render_ChooseSamplerState(uv, element);
  GlitchAmount = LUI_Render_GetGlitchAmount();
  BlurAmount = LUI_Render_GetBlurAmount();
  colorOp = LUI_Render_GetColorOp();
  if ( s_numScopeIndexSettingsActive )
    scopeIndex = s_scopeIndexSettingsStack[s_numScopeIndexSettingsActive - 1];
  else
    scopeIndex = s_numScopeIndexSettingsActive - 1;
  if ( s_drawListModeDepth )
    v23 = s_drawListMode[s_drawListModeDepth - 1];
  else
    v23 = DrawListMode_Default;
  LUI_QuadCache_Element_CacheImageQuad(luaVM, localClientNum, element, (const vec4_t *)verts, color, uv, image, material, GlitchAmount, BlurAmount, pixelShapeTypea, v17, colorOp, has3DTransforms, scopeIndex, v23 == DrawListMode_ReceivePostFXLite, colorSource, extraParam);
}

/*
==============
LUI_Render_DrawImage
==============
*/
void LUI_Render_DrawImage(const LocalClientNum_t localClientNum, LUIElement *element, lua_State *luaVM, const vec4_t (*verts)[4], float uMin, float vMin, float uMax, float vMax, const vec4_t *color, const GfxImage *material)
{
  __m256i v12; 
  LUIQuadUV uv; 
  vec4_t vertsa[4]; 

  uv.minMax.uMax = 0.0;
  uv.minMax.uMin = uMin;
  memset(&uv.minMax.vMax, 0, 28);
  uv.minMax.vMin = vMin;
  *(__m256i *)vertsa[0].v = *(__m256i *)(*verts)[0].v;
  v12 = *(__m256i *)(*verts)[2].v;
  uv.minMax.uMax = uMax;
  *(__m256i *)vertsa[2].v = v12;
  uv.minMax.vMax = vMax;
  LUI_Render_PuffThinQuad(vertsa);
  LUI_Render_CommitQuad(localClientNum, element, luaVM, (const vec4_t (*)[4])vertsa, &uv, color, material, 0, GFX_PIXEL_SHAPE_TYPE_NONE, 0.0);
}

/*
==============
LUI_Render_DrawImageRotatedUV
==============
*/
void LUI_Render_DrawImageRotatedUV(const LocalClientNum_t localClientNum, LUIElement *element, lua_State *luaVM, const vec4_t (*verts)[4], float uCenter, float vCenter, float uScale, float vScale, float uvAngle, const vec4_t *color, const GfxImage *material)
{
  LUIQuadUV uv; 

  uv.rotated.angle = uvAngle;
  uv.rotated.uCenter = uCenter;
  uv.rotated.vCenter = vCenter;
  uv.rotated.uScale = uScale;
  uv.rotated.vScale = vScale;
  uv.minMax.uMin = 0.0;
  uv.minMax.vMin = 0.0;
  uv.minMax.uMax = FLOAT_1_0;
  uv.minMax.vMax = FLOAT_1_0;
  *(_WORD *)(&uv.mode + 1) = 0;
  *((_BYTE *)&uv.mode + 3) = 0;
  uv.mode = ROTATED;
  LUI_Render_CommitQuad(localClientNum, element, luaVM, verts, &uv, color, material, 0, GFX_PIXEL_SHAPE_TYPE_NONE, 0.0);
}

/*
==============
LUI_Render_DrawImageRotatedUV
==============
*/
void LUI_Render_DrawImageRotatedUV(const LocalClientNum_t localClientNum, LUIElement *element, lua_State *luaVM, const vec4_t (*verts)[4], float uCenter, float vCenter, float uScale, float vScale, float uMin, float vMin, float uMax, float vMax, float uvAngle, const vec4_t *color, const GfxImage *material)
{
  LUIQuadUV uv; 

  uv.rotated.uCenter = uCenter;
  uv.rotated.angle = uvAngle;
  uv.rotated.uScale = uScale;
  uv.rotated.vCenter = vCenter;
  uv.minMax.uMin = uMin;
  uv.rotated.vScale = vScale;
  uv.minMax.uMax = uMax;
  uv.minMax.vMin = vMin;
  uv.minMax.vMax = vMax;
  *(_WORD *)(&uv.mode + 1) = 0;
  *((_BYTE *)&uv.mode + 3) = 0;
  uv.mode = ROTATED;
  LUI_Render_CommitQuad(localClientNum, element, luaVM, verts, &uv, color, material, 0, GFX_PIXEL_SHAPE_TYPE_NONE, 0.0);
}

/*
==============
LUI_Render_DrawImage_PixelShape
==============
*/
void LUI_Render_DrawImage_PixelShape(const LocalClientNum_t localClientNum, LUIElement *element, lua_State *luaVM, const vec4_t (*verts)[4], float uMin, float vMin, float uMax, float vMax, const vec4_t *color, const GfxImage *material, const GfxPixelShapeType pixelShapeType, const float pixelWidth)
{
  __m256i v14; 
  LUIQuadUV uv; 
  vec4_t vertsa[4]; 

  uv.minMax.uMax = 0.0;
  uv.minMax.uMin = uMin;
  memset(&uv.minMax.vMax, 0, 28);
  uv.minMax.vMin = vMin;
  *(__m256i *)vertsa[0].v = *(__m256i *)(*verts)[0].v;
  v14 = *(__m256i *)(*verts)[2].v;
  uv.minMax.uMax = uMax;
  *(__m256i *)vertsa[2].v = v14;
  uv.minMax.vMax = vMax;
  LUI_Render_PuffThinQuad(vertsa);
  LUI_Render_CommitQuad(localClientNum, element, luaVM, (const vec4_t (*)[4])vertsa, &uv, color, material, 0, pixelShapeType, pixelWidth);
}

/*
==============
LUI_Render_DrawImage_SDF
==============
*/
void LUI_Render_DrawImage_SDF(const LocalClientNum_t localClientNum, LUIElement *element, lua_State *luaVM, const vec4_t (*verts)[4], float uMin, float vMin, float uMax, float vMax, const vec4_t *color, const GfxImage *material)
{
  __m256i v12; 
  LUIQuadUV uv; 
  vec4_t vertsa[4]; 

  uv.minMax.uMax = 0.0;
  uv.minMax.uMin = uMin;
  memset(&uv.minMax.vMax, 0, 28);
  uv.minMax.vMin = vMin;
  *(__m256i *)vertsa[0].v = *(__m256i *)(*verts)[0].v;
  v12 = *(__m256i *)(*verts)[2].v;
  uv.minMax.uMax = uMax;
  *(__m256i *)vertsa[2].v = v12;
  uv.minMax.vMax = vMax;
  LUI_Render_PuffThinQuad(vertsa);
  LUI_Render_CommitQuad(localClientNum, element, luaVM, (const vec4_t (*)[4])vertsa, &uv, color, material, 1, GFX_PIXEL_SHAPE_TYPE_NONE, 0.0);
}

/*
==============
LUI_Render_DrawMouseCursor
==============
*/
void LUI_Render_DrawMouseCursor(const LocalClientNum_t localClientNum, LUIElement *element, float red, float green)
{
  ;
}

/*
==============
LUI_Render_DrawQuadCache
==============
*/
void LUI_Render_DrawQuadCache(lua_State *luaVM, UIQuadCache *quadCache)
{
  bool has3DTransforms; 
  const char *v5; 
  int flags; 
  const FontGlowStyle *fontGlowStyle; 
  float *fontDecodeStyle; 

  has3DTransforms = (quadCache->flags & 2) != 0;
  if ( (quadCache->flags & 0x20) != 0 )
    LUI_Workers_SuspendRender();
  if ( quadCache->type[0] )
  {
    if ( quadCache->type[0] == 1 )
    {
      if ( quadCache->text.textRef == -2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1403, ASSERT_TYPE_ASSERT, "(quadCache->text.textRef != (-2))", (const char *)&queryFormat, "quadCache->text.textRef != LUA_NOREF") )
        __debugbreak();
      j_lua_rawgeti(luaVM, -10000, quadCache->text.textRef);
      if ( !j_lua_isstring(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1405, ASSERT_TYPE_ASSERT, "(lua_isstring( luaVM, -1 ))", (const char *)&queryFormat, "lua_isstring( luaVM, -1 )") )
        __debugbreak();
      v5 = j_lua_tolstring(luaVM, -1, NULL);
      flags = quadCache->flags;
      fontGlowStyle = &quadCache->text.glowStyle;
      fontDecodeStyle = &quadCache->image.uv.rotated.uScale;
      if ( (flags & 8) == 0 )
        fontGlowStyle = NULL;
      if ( (flags & 4) == 0 )
        fontDecodeStyle = NULL;
      LUI_Render_SendTextRenderCommand(v5, 0x7FFFFFFF, quadCache->text.font, quadCache->text.fontSize, (const vec4_t (*)[4])quadCache, quadCache->text.tracking, quadCache->text.textRotation, &quadCache->color, quadCache->text.fontMaterial, quadCache->text.iconsMaterial, flags & 1, (const FontDecodeStyle *)fontDecodeStyle, fontGlowStyle, quadCache->glitchAmount, quadCache->unitScale, quadCache->blurAmount, quadCache->parallaxAmount, &quadCache->colorOp, has3DTransforms);
      j_lua_settop(luaVM, -2);
    }
  }
  else
  {
    LUI_Render_SendQuadRenderCommand((const vec4_t (*)[4])quadCache, &quadCache->image.uv, &quadCache->color, quadCache->image.texture, quadCache->image.material, quadCache->glitchAmount, quadCache->unitScale, quadCache->blurAmount, quadCache->image.samplerState, quadCache->parallaxAmount, &quadCache->colorOp, has3DTransforms, quadCache->scopeIndex, quadCache->flags, quadCache->extraParam);
  }
}

/*
==============
LUI_Render_DrawQuadRotated
==============
*/
void LUI_Render_DrawQuadRotated(const LocalClientNum_t localClientNum, LUIElement *element, float centerX, float centerY, float width, float height, float uMin, float vMin, float uMax, float vMax, float angle, float red, float green, float blue, float alpha, const GfxImage *material, lua_State *luaVM)
{
  bool v17; 
  DrawListMode v20; 
  float *v21; 
  unsigned int v22; 
  float *v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  Material *v28; 
  double CurrentParallaxAmount; 
  bool has3DTransforms; 
  unsigned __int16 samplerState; 
  float v32; 
  float v33; 
  const LUIColorOpData *colorOp; 
  int scopeIndex; 
  float c; 
  float s; 
  lua_State *v38; 
  vec4_t color; 
  LUIQuadUV uv; 
  vec4_t point[2]; 
  __m256i v42; 
  vec4_t verts[2]; 
  __m256i v44; 

  v17 = !element->quadCached;
  color.v[0] = red;
  color.v[1] = green;
  color.v[2] = blue;
  color.v[3] = alpha;
  v38 = luaVM;
  if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1438, ASSERT_TYPE_ASSERT, "(!element->quadCached)", (const char *)&queryFormat, "!element->quadCached") )
    __debugbreak();
  FastSinCos(angle * 0.017453292, &s, &c);
  v20 = DrawListMode_Default;
  v21 = &point[0].v[1];
  v22 = 0;
  v23 = (float *)&QUAD_BUILD[1];
  do
  {
    v24 = width * *(v23 - 1);
    v25 = height * *v23;
    v26 = v24 * s;
    v27 = v25 * c;
    *(v21 - 1) = (float)((float)(v24 * c) - (float)(v25 * s)) + centerX;
    *v21 = (float)(v26 + v27) + centerY;
    v21[1] = 0.0;
    v21[2] = 1.0;
    LUI_ApplyTransformsToPoint(&point[v22++]);
    v21 += 4;
    v23 += 2;
  }
  while ( v22 < 4 );
  uv.minMax.uMin = uMin;
  uv.minMax.vMin = vMin;
  *(__m256i *)verts[0].v = *(__m256i *)point[0].v;
  uv.minMax.uMax = uMax;
  v44 = v42;
  uv.minMax.vMax = vMax;
  memset(&uv.rotated, 0, 24);
  LUI_Render_PuffThinQuad(verts);
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1235, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  v28 = LUI_Render_GetMaterial(LUI_COLOR_SOURCE_IMAGE, (element->usageFlags & 0x200000) == 0);
  CurrentParallaxAmount = LUI_Render_GetCurrentParallaxAmount();
  has3DTransforms = LUI_Is3DTransformEnabled();
  samplerState = LUI_Render_ChooseSamplerState(&uv, element);
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 597, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  if ( s_numGlitchSettingsActive )
    v32 = s_glitchSettingsStack[s_numGlitchSettingsActive - 1];
  else
    v32 = 0.0;
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 731, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  if ( s_numBlurSettingsActive )
    v33 = s_blurSettingsStack[s_numBlurSettingsActive - 1];
  else
    v33 = 0.0;
  colorOp = LUI_Render_GetColorOp();
  if ( s_numScopeIndexSettingsActive )
    scopeIndex = s_scopeIndexSettingsStack[s_numScopeIndexSettingsActive - 1];
  else
    scopeIndex = s_numScopeIndexSettingsActive - 1;
  if ( s_drawListModeDepth )
    v20 = s_drawListMode[s_drawListModeDepth - 1];
  LUI_QuadCache_Element_CacheImageQuad(v38, localClientNum, element, verts, &color, &uv, material, v28, v32, v33, samplerState, *(float *)&CurrentParallaxAmount, colorOp, has3DTransforms, scopeIndex, v20 == DrawListMode_ReceivePostFXLite, LUI_COLOR_SOURCE_IMAGE, 0.0);
}

/*
==============
LUI_Render_DrawQuadRotatedRelativeToPoint
==============
*/
void LUI_Render_DrawQuadRotatedRelativeToPoint(const LocalClientNum_t localClientNum, LUIElement *element, float rotationCenterX, float rotationCenterY, float quadCenterX, float quadCenterY, float width, float height, float uMin, float vMin, float uMax, float vMax, float angle, float red, float green, float blue, float alpha, const GfxImage *material, lua_State *luaVM)
{
  bool v19; 
  DrawListMode v23; 
  float *v24; 
  float v25; 
  float v26; 
  unsigned int v27; 
  float *v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  Material *v34; 
  double CurrentParallaxAmount; 
  bool has3DTransforms; 
  unsigned __int16 samplerState; 
  float v38; 
  float v39; 
  const LUIColorOpData *colorOp; 
  int scopeIndex; 
  float c; 
  float s; 
  lua_State *v44; 
  vec4_t color; 
  LUIQuadUV uv; 
  vec4_t point[2]; 
  __m256i v48; 
  vec4_t verts[2]; 
  __m256i v50; 

  v19 = !element->quadCached;
  color.v[0] = red;
  color.v[1] = green;
  color.v[2] = blue;
  color.v[3] = alpha;
  v44 = luaVM;
  if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1478, ASSERT_TYPE_ASSERT, "(!element->quadCached)", (const char *)&queryFormat, "!element->quadCached") )
    __debugbreak();
  FastSinCos(angle * 0.017453292, &s, &c);
  v23 = DrawListMode_Default;
  v24 = &point[0].v[1];
  v25 = quadCenterX - rotationCenterX;
  v26 = quadCenterY - rotationCenterY;
  v27 = 0;
  v28 = (float *)&QUAD_BUILD_0[1];
  do
  {
    v29 = width * *(v28 - 1);
    v30 = (float)(v29 + v25) * s;
    v31 = (float)(height * *v28) + v26;
    v32 = (float)((float)(v29 + v25) * c) - (float)(v31 * s);
    v33 = v31 * c;
    *(v24 - 1) = v32 + rotationCenterX;
    *v24 = (float)(v30 + v33) + rotationCenterY;
    v24[1] = 0.0;
    v24[2] = 1.0;
    LUI_ApplyTransformsToPoint(&point[v27++]);
    v24 += 4;
    v28 += 2;
  }
  while ( v27 < 4 );
  uv.minMax.uMin = uMin;
  uv.minMax.vMin = vMin;
  *(__m256i *)verts[0].v = *(__m256i *)point[0].v;
  uv.minMax.uMax = uMax;
  v50 = v48;
  uv.minMax.vMax = vMax;
  memset(&uv.rotated, 0, 24);
  LUI_Render_PuffThinQuad(verts);
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1235, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  v34 = LUI_Render_GetMaterial(LUI_COLOR_SOURCE_IMAGE, (element->usageFlags & 0x200000) == 0);
  CurrentParallaxAmount = LUI_Render_GetCurrentParallaxAmount();
  has3DTransforms = LUI_Is3DTransformEnabled();
  samplerState = LUI_Render_ChooseSamplerState(&uv, element);
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 597, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  if ( s_numGlitchSettingsActive )
    v38 = s_glitchSettingsStack[s_numGlitchSettingsActive - 1];
  else
    v38 = 0.0;
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 731, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  if ( s_numBlurSettingsActive )
    v39 = s_blurSettingsStack[s_numBlurSettingsActive - 1];
  else
    v39 = 0.0;
  colorOp = LUI_Render_GetColorOp();
  if ( s_numScopeIndexSettingsActive )
    scopeIndex = s_scopeIndexSettingsStack[s_numScopeIndexSettingsActive - 1];
  else
    scopeIndex = s_numScopeIndexSettingsActive - 1;
  if ( s_drawListModeDepth )
    v23 = s_drawListMode[s_drawListModeDepth - 1];
  LUI_QuadCache_Element_CacheImageQuad(v44, localClientNum, element, verts, &color, &uv, material, v34, v38, v39, samplerState, *(float *)&CurrentParallaxAmount, colorOp, has3DTransforms, scopeIndex, v23 == DrawListMode_ReceivePostFXLite, LUI_COLOR_SOURCE_IMAGE, 0.0);
}

/*
==============
LUI_Render_DrawText
==============
*/
void LUI_Render_DrawText(const LocalClientNum_t localClientNum, lua_State *luaVM, LUIElement *element, const vec4_t (*verts)[4], const vec4_t *color, GfxFont *font, const char *text, int style, char tracking, float rotation, int fontSize, FontDecodeStyle *fontDecodeStyle, FontGlowStyle *fontGlowStyle)
{
  double CurrentParallaxAmount; 
  float v18; 
  float GlitchAmount; 
  float BlurAmount; 
  bool tintIcons; 
  FontGlowStyle *v22; 
  LUIColorSource v23; 
  Material *fontMaterial; 
  LUIColorOpData *colorOp; 
  Material *iconsMaterial; 
  bool has3DTransforms; 

  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1187, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  CurrentParallaxAmount = LUI_Render_GetCurrentParallaxAmount();
  v18 = *(float *)&CurrentParallaxAmount;
  has3DTransforms = LUI_Is3DTransformEnabled();
  iconsMaterial = LUI_Render_GetMaterial(LUI_COLOR_SOURCE_IMAGE, 1);
  GlitchAmount = LUI_Render_GetGlitchAmount();
  BlurAmount = LUI_Render_GetBlurAmount();
  tintIcons = (element->usageFlags & 0x200) != 0;
  v22 = fontGlowStyle;
  colorOp = (LUIColorOpData *)LUI_Render_GetColorOp();
  if ( !fontGlowStyle || fontGlowStyle->glowMinDistance == fontGlowStyle->glowMaxDistance && fontGlowStyle->outlineGlowMinDistance == fontGlowStyle->outlineGlowMaxDistance )
    v22 = NULL;
  v23 = LUI_COLOR_SOURCE_FONTCACHE;
  if ( v22 )
  {
    v23 = LUI_COLOR_SOURCE_FONTCACHE_SDF_GLOW;
  }
  else if ( LUI_Is3DTransformEnabled() || FontCache_DoesGlyphUseDistanceField(fontSize) )
  {
    v23 = LUI_COLOR_SOURCE_FONTCACHE_SDF;
  }
  fontMaterial = LUI_Render_GetMaterial(v23, 1);
  LUI_QuadCache_Element_CacheTextQuad(luaVM, localClientNum, element, (const vec4_t *)verts, color, font, text, tracking, rotation, fontSize, fontMaterial, iconsMaterial, tintIcons, fontDecodeStyle, v22, GlitchAmount, BlurAmount, v18, colorOp, has3DTransforms);
}

/*
==============
LUI_Render_GetAsyncRenderSuspended
==============
*/
bool LUI_Render_GetAsyncRenderSuspended()
{
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 633, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  return s_numSuspendAsyncRenderElems > 0;
}

/*
==============
LUI_Render_GetBlurAmount
==============
*/
float LUI_Render_GetBlurAmount()
{
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 731, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  if ( s_numBlurSettingsActive )
    return s_blurSettingsStack[s_numBlurSettingsActive - 1];
  else
    return 0.0;
}

/*
==============
LUI_Render_GetColorOp
==============
*/
LUIColorOpData *LUI_Render_GetColorOp()
{
  int v0; 
  __int64 v2; 
  int v3; 

  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 686, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  v0 = s_numColorOpSettingsActive;
  if ( !s_numColorOpSettingsActive )
    return &s_nullColorOp;
  if ( (unsigned int)s_numColorOpSettingsActive >= 4 )
  {
    v3 = 4;
    LODWORD(v2) = s_numColorOpSettingsActive;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 692, ASSERT_TYPE_ASSERT, "(unsigned)( s_numColorOpSettingsActive ) < (unsigned)( ( sizeof( *array_counter( s_ColorOpSettingsStack ) ) + 0 ) )", "s_numColorOpSettingsActive doesn't index ARRAY_COUNT( s_ColorOpSettingsStack )\n\t%i not in [0, %i)", v2, v3) )
      __debugbreak();
    v0 = s_numColorOpSettingsActive;
  }
  return &s_ColorOpSettingsStack[v0 - 1];
}

/*
==============
LUI_Render_GetColorSourceImageType
==============
*/
char LUI_Render_GetColorSourceImageType(bool isSDF, GfxPixelShapeType pixelShapeType)
{
  if ( pixelShapeType == GFX_PIXEL_SHAPE_TYPE_CIRCLE )
    return 2;
  else
    return isSDF;
}

/*
==============
LUI_Render_GetCurrentBlendMode
==============
*/
__int64 LUI_Render_GetCurrentBlendMode()
{
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1880, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  if ( s_currentBlendMode >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1881, ASSERT_TYPE_ASSERT, "(s_currentBlendMode < LUI_MAX_BLEND_MODES)", (const char *)&queryFormat, "s_currentBlendMode < LUI_MAX_BLEND_MODES") )
    __debugbreak();
  if ( s_currentBlendMode < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1882, ASSERT_TYPE_ASSERT, "(s_currentBlendMode >= 0)", (const char *)&queryFormat, "s_currentBlendMode >= 0") )
    __debugbreak();
  return (unsigned __int8)s_blendModeStack[s_currentBlendMode];
}

/*
==============
LUI_Render_GetCurrentDrawListMode
==============
*/
__int64 LUI_Render_GetCurrentDrawListMode()
{
  if ( s_drawListModeDepth )
    return (unsigned int)s_drawListMode[s_drawListModeDepth - 1];
  else
    return 0i64;
}

/*
==============
LUI_Render_GetCurrentParallaxAmount
==============
*/
float LUI_Render_GetCurrentParallaxAmount()
{
  unsigned __int8 v0; 
  __int64 v2; 
  int v3; 

  if ( LUI_IsInExecDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 393, ASSERT_TYPE_ASSERT, "(!LUI_IsInExecDrawList())", (const char *)&queryFormat, "!LUI_IsInExecDrawList()") )
    __debugbreak();
  v0 = s_currentParallax;
  if ( s_currentParallax >= 8u )
  {
    v3 = 8;
    LODWORD(v2) = s_currentParallax;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 394, ASSERT_TYPE_ASSERT, "(unsigned)( s_currentParallax ) < (unsigned)( 8 )", "s_currentParallax doesn't index LUI_MAX_PARALLAX\n\t%i not in [0, %i)", v2, v3) )
      __debugbreak();
    v0 = s_currentParallax;
  }
  return s_parallaxAmount[v0];
}

/*
==============
LUI_Render_GetCurrentRTT
==============
*/
unsigned __int8 LUI_Render_GetCurrentRTT()
{
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1759, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  if ( s_rttDepth )
    return s_rttStack[s_rttDepth - 1];
  else
    return 0;
}

/*
==============
LUI_Render_GetCurrentUnitScale
==============
*/
float LUI_Render_GetCurrentUnitScale()
{
  float v0; 

  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 487, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  if ( s_numUnitScaleActive <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 488, ASSERT_TYPE_ASSERT, "(s_numUnitScaleActive > 0)", (const char *)&queryFormat, "s_numUnitScaleActive > 0") )
    __debugbreak();
  v0 = s_unitScaleStack[s_numUnitScaleActive - 1];
  if ( v0 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 490, ASSERT_TYPE_ASSERT, "(unitScale > 0)", (const char *)&queryFormat, "unitScale > 0") )
    __debugbreak();
  return v0;
}

/*
==============
LUI_Render_GetGlitchAmount
==============
*/
float LUI_Render_GetGlitchAmount()
{
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 597, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  if ( s_numGlitchSettingsActive )
    return s_glitchSettingsStack[s_numGlitchSettingsActive - 1];
  else
    return 0.0;
}

/*
==============
LUI_Render_GetMaterial
==============
*/
Material *LUI_Render_GetMaterial(LUIColorSource colorSource, bool allowUiPost)
{
  int v4; 
  DrawListMode v5; 
  LUIBlendMode v6; 
  __int64 v7; 
  __int64 v9; 
  int v10; 

  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 819, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  v4 = 0;
  if ( s_drawListModeDepth )
    v5 = s_drawListMode[s_drawListModeDepth - 1];
  else
    v5 = DrawListMode_Default;
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1880, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  if ( s_currentBlendMode >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1881, ASSERT_TYPE_ASSERT, "(s_currentBlendMode < LUI_MAX_BLEND_MODES)", (const char *)&queryFormat, "s_currentBlendMode < LUI_MAX_BLEND_MODES") )
    __debugbreak();
  if ( s_currentBlendMode < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1882, ASSERT_TYPE_ASSERT, "(s_currentBlendMode >= 0)", (const char *)&queryFormat, "s_currentBlendMode >= 0") )
    __debugbreak();
  if ( v5 != DrawListMode_ReceivePostFX && allowUiPost )
    v4 = 1;
  v6 = s_blendModeStack[s_currentBlendMode];
  v7 = v4 + (LUI_IsScopeUIStencilEnabled() ? 2 : 0) + 4 * ((unsigned __int8)v6 + 3 * (unsigned int)(unsigned __int8)colorSource);
  if ( (unsigned int)v7 >= 0x48 )
  {
    v10 = 72;
    LODWORD(v9) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 836, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( s_luiMaterials ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( s_luiMaterials )\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  return s_luiMaterials[v7];
}

/*
==============
LUI_Render_GetViewportSize
==============
*/
void LUI_Render_GetViewportSize(LocalClientNum_t localClientNum, vec2_t *outSize)
{
  float v3; 
  bool v4; 
  vec2_t *p_realViewportSize; 
  int widthOut; 
  int heightOut; 

  if ( s_rttDepth )
  {
    R_RTT_GetSize(localClientNum, s_rttStack[s_rttDepth - 1], &widthOut, &heightOut);
    v3 = (float)heightOut;
    outSize->v[0] = (float)widthOut;
    outSize->v[1] = v3;
    return;
  }
  if ( activeScreenPlacementMode )
  {
    if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
    {
      p_realViewportSize = &scrPlaceViewDisplay[localClientNum].realViewportSize;
      goto LABEL_10;
    }
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v4 )
      __debugbreak();
  }
  p_realViewportSize = &scrPlaceFull.realViewportSize;
LABEL_10:
  outSize->v[0] = p_realViewportSize->v[0];
  outSize->v[1] = p_realViewportSize->v[1];
}

/*
==============
LUI_Render_ImageFill
==============
*/
void LUI_Render_ImageFill(const LocalClientNum_t localClientNum, LUIElement *element, float red, float green, float blue, float alpha, const GfxImage *material, lua_State *luaVM)
{
  bool v8; 
  vec4_t color; 
  LUIQuadUV uv; 
  vec4_t verts[8]; 

  v8 = !element->quadCached;
  color.v[2] = blue;
  color.v[3] = alpha;
  color.v[0] = red;
  color.v[1] = green;
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1522, ASSERT_TYPE_ASSERT, "(!element->quadCached)", (const char *)&queryFormat, "!element->quadCached") )
    __debugbreak();
  LUI_CoD_GenerateQuadVerts(element->left, element->top, element->right, element->bottom, (vec4_t (*)[4])&verts[4]);
  if ( !LUIElement_IsImageLike(element) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1527, ASSERT_TYPE_ASSERT, "(LUIElement_IsImageLike( element ))", (const char *)&queryFormat, "LUIElement_IsImageLike( element )") )
    __debugbreak();
  uv.minMax = *(LUIQuadUVMinMax *)element->textData.textRef;
  *(__m256i *)verts[0].v = *(__m256i *)verts[4].v;
  *(__m256i *)verts[2].v = *(__m256i *)verts[6].v;
  memset(&uv.rotated, 0, 24);
  LUI_Render_PuffThinQuad(verts);
  LUI_Render_CommitQuad(localClientNum, element, luaVM, (const vec4_t (*)[4])verts, &uv, &color, material, 0, GFX_PIXEL_SHAPE_TYPE_NONE, 0.0);
}

/*
==============
LUI_Render_PopAsyncRenderSuspend
==============
*/
void LUI_Render_PopAsyncRenderSuspend(void)
{
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 626, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  --s_numSuspendAsyncRenderElems;
}

/*
==============
LUI_Render_PopBlendMode
==============
*/
void LUI_Render_PopBlendMode(void)
{
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1873, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  --s_currentBlendMode;
}

/*
==============
LUI_Render_PopBlur
==============
*/
void LUI_Render_PopBlur(void)
{
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 723, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  if ( s_numBlurSettingsActive > 0 )
  {
    --s_numBlurSettingsActive;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 724, ASSERT_TYPE_ASSERT, "(s_numBlurSettingsActive > 0)", (const char *)&queryFormat, "s_numBlurSettingsActive > 0") )
      __debugbreak();
    --s_numBlurSettingsActive;
  }
}

/*
==============
LUI_Render_PopColorOp
==============
*/
void LUI_Render_PopColorOp(void)
{
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 678, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  if ( s_numColorOpSettingsActive > 0 )
  {
    --s_numColorOpSettingsActive;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 679, ASSERT_TYPE_ASSERT, "(s_numColorOpSettingsActive > 0)", (const char *)&queryFormat, "s_numColorOpSettingsActive > 0") )
      __debugbreak();
    --s_numColorOpSettingsActive;
  }
}

/*
==============
LUI_Render_PopCustomList
==============
*/
void LUI_Render_PopCustomList(const LocalClientNum_t localClientNum, const unsigned int customList)
{
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1831, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  if ( customList >= 0xE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1832, ASSERT_TYPE_ASSERT, "(customList < UIDrawList_Count)", (const char *)&queryFormat, "customList < UIDrawList_Count") )
    __debugbreak();
  LUI_QuadCache_CustomDrawListEnd(localClientNum, customList);
  if ( s_drawListModeDepth )
  {
    --s_drawListModeDepth;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1709, ASSERT_TYPE_ASSERT, "(s_drawListModeDepth > 0)", (const char *)&queryFormat, "s_drawListModeDepth > 0") )
      __debugbreak();
    --s_drawListModeDepth;
  }
}

/*
==============
LUI_Render_PopGlitch
==============
*/
void LUI_Render_PopGlitch(void)
{
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 589, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  if ( s_numGlitchSettingsActive > 0 )
  {
    --s_numGlitchSettingsActive;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 590, ASSERT_TYPE_ASSERT, "(s_numGlitchSettingsActive > 0)", (const char *)&queryFormat, "s_numGlitchSettingsActive > 0") )
      __debugbreak();
    --s_numGlitchSettingsActive;
  }
}

/*
==============
LUI_Render_PopMask
==============
*/
void LUI_Render_PopMask(const LocalClientNum_t localClientNum)
{
  int v2; 
  int v3; 
  void (__fastcall *v4)(); 

  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 334, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  v2 = s_RenderMaskPushCount;
  if ( s_RenderMaskPushCount <= 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 335, ASSERT_TYPE_ASSERT, "(s_RenderMaskPushCount > 0)", (const char *)&queryFormat, "s_RenderMaskPushCount > 0") )
      __debugbreak();
    v2 = s_RenderMaskPushCount;
  }
  v3 = v2 - 1;
  if ( v3 )
  {
    if ( v3 != 1 )
      return;
    v4 = R_AddCmdClearSecondUIMask;
  }
  else
  {
    v4 = R_AddCmdClearFirstUIMask;
  }
  LUI_QuadCache_AddDrawListCommand(localClientNum, v4);
  --s_RenderMaskPushCount;
}

/*
==============
LUI_Render_PopParallaxEnabled
==============
*/
void LUI_Render_PopParallaxEnabled(void)
{
  if ( LUI_IsInExecDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 377, ASSERT_TYPE_ASSERT, "(!LUI_IsInExecDrawList())", (const char *)&queryFormat, "!LUI_IsInExecDrawList()") )
    __debugbreak();
  if ( s_currentParallax )
  {
    --s_currentParallax;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 378, ASSERT_TYPE_ASSERT, "(s_currentParallax > 0)", (const char *)&queryFormat, "s_currentParallax > 0") )
      __debugbreak();
    --s_currentParallax;
  }
}

/*
==============
LUI_Render_PopPixelGrid
==============
*/
void LUI_Render_PopPixelGrid(const LocalClientNum_t localClientNum)
{
  int v2; 
  int data; 
  char v4; 

  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 447, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  v2 = s_numPixelGridSettingsActive;
  if ( s_numPixelGridSettingsActive <= 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 448, ASSERT_TYPE_ASSERT, "(s_numPixelGridSettingsActive > 0)", (const char *)&queryFormat, "s_numPixelGridSettingsActive > 0") )
      __debugbreak();
    v2 = s_numPixelGridSettingsActive;
  }
  if ( v2 == 1 )
  {
    if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 425, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
      __debugbreak();
    if ( s_numPixelGridSettingsActive > 0 )
    {
      data = 0;
      v4 = 0;
      if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 418, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
        __debugbreak();
      LUI_QuadCache_AddDrawListCommandInternal(localClientNum, (void (__fastcall *)(const void *))LUI_RenderImmediate_SetPixelGrid, &data, 5ui64, 1ui64);
      s_numPixelGridSettingsActive = 0;
    }
  }
  else
  {
    s_numPixelGridSettingsActive = v2 - 1;
    LUI_Render_ApplyPixelGrid(localClientNum, &s_pixelGridSettingsStack[v2 - 1]);
  }
}

/*
==============
LUI_Render_PopRTT
==============
*/
__int64 LUI_Render_PopRTT(const LocalClientNum_t localClientNum)
{
  unsigned int v2; 
  bool v3; 
  unsigned int v4; 
  unsigned __int8 data; 

  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1776, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  if ( !s_rttDepth )
    return 0i64;
  data = s_rttStack[s_rttDepth - 1];
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 479, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  if ( s_numUnitScaleActive <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 480, ASSERT_TYPE_ASSERT, "(s_numUnitScaleActive > 0)", (const char *)&queryFormat, "s_numUnitScaleActive > 0") )
    __debugbreak();
  --s_numUnitScaleActive;
  LUI_QuadCache_AddDrawListCommandInternal(localClientNum, (void (__fastcall *)(const void *))LUI_RenderImmediate_RttEnd, &data, 1ui64, 1ui64);
  v2 = data + 5;
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1831, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  if ( v2 >= 0xE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1832, ASSERT_TYPE_ASSERT, "(customList < UIDrawList_Count)", (const char *)&queryFormat, "customList < UIDrawList_Count") )
    __debugbreak();
  LUI_QuadCache_CustomDrawListEnd(localClientNum, v2);
  if ( !s_drawListModeDepth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1709, ASSERT_TYPE_ASSERT, "(s_drawListModeDepth > 0)", (const char *)&queryFormat, "s_drawListModeDepth > 0") )
    __debugbreak();
  --s_drawListModeDepth;
  v3 = s_rttDepth-- == 1;
  v4 = s_rttDepth;
  s_rttStack[s_rttDepth] = 0;
  if ( v3 )
    return 0i64;
  else
    return s_rttStack[v4 - 1];
}

/*
==============
LUI_Render_PopScopeIndex
==============
*/
void LUI_Render_PopScopeIndex(void)
{
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 761, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  if ( s_numScopeIndexSettingsActive > 0 )
  {
    --s_numScopeIndexSettingsActive;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 762, ASSERT_TYPE_ASSERT, "(s_numScopeIndexSettingsActive > 0)", (const char *)&queryFormat, "s_numScopeIndexSettingsActive > 0") )
      __debugbreak();
    --s_numScopeIndexSettingsActive;
  }
}

/*
==============
LUI_Render_PopStencilRectangle
==============
*/
void LUI_Render_PopStencilRectangle(const LocalClientNum_t localClientNum)
{
  int v2; 

  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1674, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  v2 = s_currStencilRect - 1;
  s_currStencilRect = v2;
  if ( v2 < 5 )
  {
    if ( v2 < 0 )
      LUI_QuadCache_AddDrawListCommand(localClientNum, R_AddCmdClearScissorRect);
    else
      LUI_QuadCache_AddDrawListCommandInternal(localClientNum, (void (__fastcall *)(const void *))LUI_RenderImmediate_SetScissorRect, &s_stencilRects[v2], 0x10ui64, 4ui64);
  }
}

/*
==============
LUI_Render_PopUnitScale
==============
*/
void LUI_Render_PopUnitScale(void)
{
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 479, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  if ( s_numUnitScaleActive > 0 )
  {
    --s_numUnitScaleActive;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 480, ASSERT_TYPE_ASSERT, "(s_numUnitScaleActive > 0)", (const char *)&queryFormat, "s_numUnitScaleActive > 0") )
      __debugbreak();
    --s_numUnitScaleActive;
  }
}

/*
==============
LUI_Render_PuffThinQuad
==============
*/
void LUI_Render_PuffThinQuad(vec4_t *verts)
{
  const dvar_t *v1; 
  bool v3; 
  bool v4; 
  float v5; 
  bool v6; 
  bool v7; 
  float v8; 
  float displayHeight; 
  __int128 v12; 
  float v15; 
  float v16; 
  float displayWidth; 
  __int128 v19; 

  v1 = DCONST_DVARBOOL_lui_forcelinedraws;
  if ( !DCONST_DVARBOOL_lui_forcelinedraws && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_forcelinedraws") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    v3 = COERCE_FLOAT(LODWORD(LUI_GetCurrentMenuTransform()->m[1].v[0]) & _xmm) > 0.000001;
    v4 = LUI_Is3DTransformEnabled();
    v5 = verts->v[1];
    v6 = v4;
    v7 = COERCE_FLOAT(COERCE_UNSIGNED_INT(v5 - verts[1].v[1]) & _xmm) < 0.000001 && COERCE_FLOAT(COERCE_UNSIGNED_INT(verts->v[0] - verts[3].v[0]) & _xmm) < 0.000001;
    if ( !v3 && !v6 && v7 )
    {
      v8 = verts[3].v[1] - v5;
      _XMM8 = 0i64;
      if ( COERCE_FLOAT(LODWORD(v8) & _xmm) < 1.0 )
      {
        displayHeight = (float)vidConfig.displayHeight;
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v8 * 1080.0) / displayHeight) & _xmm) > 0.5 )
        {
          v12 = LODWORD(verts->v[1]);
          *(float *)&v12 = v5 - 1.0;
          _XMM2 = v12;
          __asm
          {
            vcmpltss xmm0, xmm8, xmm3
            vblendvps xmm3, xmm2, xmm1, xmm0
          }
          verts[3].v[1] = *(float *)&_XMM3;
          verts[2].v[1] = *(float *)&_XMM3;
        }
      }
      v15 = verts[1].v[0] - verts->v[0];
      if ( COERCE_FLOAT(LODWORD(v15) & _xmm) < 1.0 )
      {
        v16 = v15 * 1920.0;
        displayWidth = (float)vidConfig.displayWidth;
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v16 / displayWidth) & _xmm) > 0.5 )
        {
          v19 = LODWORD(verts->v[0]);
          *(float *)&v19 = verts->v[0] - 1.0;
          _XMM2 = v19;
          __asm
          {
            vcmpltss xmm0, xmm8, xmm3
            vblendvps xmm3, xmm2, xmm1, xmm0
          }
          verts[1].v[0] = *(float *)&_XMM3;
          verts[2].v[0] = *(float *)&_XMM3;
        }
      }
    }
  }
}

/*
==============
LUI_Render_PushAsyncRenderSuspend
==============
*/
void LUI_Render_PushAsyncRenderSuspend(void)
{
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 619, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  ++s_numSuspendAsyncRenderElems;
}

/*
==============
LUI_Render_PushBlendMode
==============
*/
void LUI_Render_PushBlendMode(const LUIBlendMode blendMode)
{
  int v2; 

  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1864, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  v2 = s_currentBlendMode;
  if ( s_currentBlendMode >= 7 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1865, ASSERT_TYPE_ASSERT, "(s_currentBlendMode < LUI_MAX_BLEND_MODES - 1)", (const char *)&queryFormat, "s_currentBlendMode < LUI_MAX_BLEND_MODES - 1") )
      __debugbreak();
    v2 = s_currentBlendMode;
  }
  s_currentBlendMode = v2 + 1;
  s_blendModeStack[v2 + 1] = blendMode;
}

/*
==============
LUI_Render_PushBlur
==============
*/
void LUI_Render_PushBlur(float amount)
{
  int v1; 

  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 714, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  v1 = s_numBlurSettingsActive;
  if ( s_numBlurSettingsActive >= 1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 715, ASSERT_TYPE_ASSERT, "(s_numBlurSettingsActive < 1)", (const char *)&queryFormat, "s_numBlurSettingsActive < LUI_MAX_NESTED_BLUR") )
      __debugbreak();
    v1 = s_numBlurSettingsActive;
  }
  s_numBlurSettingsActive = v1 + 1;
  s_blurSettingsStack[v1] = amount;
}

/*
==============
LUI_Render_PushColorOp
==============
*/
void LUI_Render_PushColorOp(const LUIColorOpData *colorOp)
{
  int v2; 
  LUIColorOpData v3; 
  __int64 v4; 
  int v5; 

  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 669, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  v2 = s_numColorOpSettingsActive;
  if ( (unsigned int)s_numColorOpSettingsActive >= 4 )
  {
    v5 = 4;
    LODWORD(v4) = s_numColorOpSettingsActive;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 670, ASSERT_TYPE_ASSERT, "(unsigned)( s_numColorOpSettingsActive ) < (unsigned)( ( sizeof( *array_counter( s_ColorOpSettingsStack ) ) + 0 ) )", "s_numColorOpSettingsActive doesn't index ARRAY_COUNT( s_ColorOpSettingsStack )\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
    v2 = s_numColorOpSettingsActive;
  }
  v3 = *colorOp;
  s_numColorOpSettingsActive = v2 + 1;
  s_ColorOpSettingsStack[v2] = v3;
}

/*
==============
LUI_Render_PushCustomList
==============
*/
void LUI_Render_PushCustomList(const LocalClientNum_t localClientNum, const unsigned int customList)
{
  DrawListMode v4; 

  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1800, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  if ( customList >= 0xE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1801, ASSERT_TYPE_ASSERT, "(customList < UIDrawList_Count)", (const char *)&queryFormat, "customList < UIDrawList_Count") )
    __debugbreak();
  LUI_QuadCache_CustomDrawListBegin(localClientNum, customList);
  switch ( customList )
  {
    case 0u:
    case 5u:
      v4 = DrawListMode_Regular;
      break;
    case 4u:
      v4 = DrawListMode_Lowres;
      break;
    case 1u:
      v4 = DrawListMode_ReceivePostFX;
      break;
    default:
      if ( customList - 2 <= 1 )
      {
        v4 = DrawListMode_ReceivePostFXLite;
      }
      else
      {
        if ( customList - 6 > 7 )
          return;
        v4 = DrawListMode_RTT;
      }
      break;
  }
  LUI_Render_Push_DrawListMode(v4);
}

/*
==============
LUI_Render_PushGlitch
==============
*/
void LUI_Render_PushGlitch(float glitchAmount)
{
  int v1; 

  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 580, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  v1 = s_numGlitchSettingsActive;
  if ( s_numGlitchSettingsActive >= 4 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 581, ASSERT_TYPE_ASSERT, "(s_numGlitchSettingsActive < 4)", (const char *)&queryFormat, "s_numGlitchSettingsActive < LUI_MAX_NESTED_GLITCH") )
      __debugbreak();
    v1 = s_numGlitchSettingsActive;
  }
  s_numGlitchSettingsActive = v1 + 1;
  s_glitchSettingsStack[v1] = glitchAmount;
}

/*
==============
LUI_Render_PushMask
==============
*/
void LUI_Render_PushMask(const LocalClientNum_t localClientNum, float maskCenterX, float maskCenterY, float maskWidth, float maskHeight, float maskRotation, float alphaScale, float alphaOffset, bool applyParallax, float maskUMin, float maskVMin, float maskUMax, float maskVMax, const vec2_t *viewportSize, GfxImage *image)
{
  vec2_t v16; 
  unsigned int v17; 
  double CurrentParallaxAmount; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  int data; 
  vec4_t vec; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  vec2_t v34; 
  GfxImage *v35; 
  vec4_t result; 
  tmat44_t<vec4_t> outMatrix; 

  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 294, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  v16 = *viewportSize;
  v17 = s_RenderMaskPushCount;
  v27 = maskRotation;
  v29 = alphaOffset;
  v31 = maskVMin;
  v28 = alphaScale;
  v33 = maskVMax;
  v30 = maskUMin;
  v32 = maskUMax;
  vec.v[1] = maskCenterY - (float)(maskHeight * 0.5);
  v25 = maskWidth;
  vec.v[3] = FLOAT_1_0;
  v26 = maskHeight;
  vec.v[0] = maskCenterX - (float)(maskWidth * 0.5);
  vec.v[2] = 0.0;
  data = s_RenderMaskPushCount;
  v34 = v16;
  v35 = image;
  if ( applyParallax )
  {
    CurrentParallaxAmount = LUI_Render_GetCurrentParallaxAmount();
    if ( *(float *)&CurrentParallaxAmount <= 0.0 )
    {
      v22 = vec.v[0];
      v21 = vec.v[1];
      v20 = vec.v[2];
      v19 = vec.v[3];
    }
    else
    {
      LUI_GetCurrentParallaxMatrix(*(float *)&CurrentParallaxAmount, &outMatrix);
      LUI_Matrix_MultiplyVector(&outMatrix, &vec, &result);
      v19 = result.v[3];
      v20 = result.v[2];
      v21 = result.v[1];
      v22 = result.v[0];
    }
    v17 = s_RenderMaskPushCount;
    vec.v[0] = v22;
    vec.v[1] = v21;
    vec.v[2] = v20;
    vec.v[3] = v19;
  }
  if ( v17 <= 1 )
  {
    LUI_QuadCache_AddDrawListCommandInternal(localClientNum, (void (__fastcall *)(const void *))LUI_RenderImmediate_SetMask, &data, 0x48ui64, 8ui64);
    ++s_RenderMaskPushCount;
  }
}

/*
==============
LUI_Render_PushParallaxEnabled
==============
*/
void LUI_Render_PushParallaxEnabled(unsigned __int8 value)
{
  unsigned __int8 v2; 
  float v3; 

  if ( LUI_IsInExecDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 363, ASSERT_TYPE_ASSERT, "(!LUI_IsInExecDrawList())", (const char *)&queryFormat, "!LUI_IsInExecDrawList()") )
    __debugbreak();
  v2 = s_currentParallax + 1;
  s_currentParallax = v2;
  if ( v2 >= 8u )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 365, ASSERT_TYPE_ASSERT, "(s_currentParallax < 8)", (const char *)&queryFormat, "s_currentParallax < LUI_MAX_PARALLAX") )
      __debugbreak();
    v2 = s_currentParallax;
  }
  v3 = 0.0;
  if ( v2 )
    v3 = s_parallaxAmount[v2 - 1];
  s_parallaxAmount[v2] = (float)((float)value * 0.078431375) + v3;
}

/*
==============
LUI_Render_PushPixelGrid
==============
*/
void LUI_Render_PushPixelGrid(const LocalClientNum_t localClientNum, LUIElement *element)
{
  int v4; 
  LUIElementPixelGridSettings *v5; 

  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 437, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  v4 = s_numPixelGridSettingsActive + 1;
  s_numPixelGridSettingsActive = v4;
  if ( v4 >= 4 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 439, ASSERT_TYPE_ASSERT, "(s_numPixelGridSettingsActive < 4)", (const char *)&queryFormat, "s_numPixelGridSettingsActive < LUI_MAX_NESTED_PIXEL_GRID") )
      __debugbreak();
    v4 = s_numPixelGridSettingsActive;
  }
  v5 = &s_pixelGridSettingsStack[v4];
  *(_DWORD *)&v5->blockWidth = *(_DWORD *)&element->pixelGrid.blockWidth;
  v5->contrast = element->pixelGrid.contrast;
  LUI_Render_ApplyPixelGrid(localClientNum, v5);
}

/*
==============
LUI_Render_PushRTT
==============
*/
bool LUI_Render_PushRTT(const LocalClientNum_t localClientNum, unsigned __int8 rttHandle)
{
  unsigned int v3; 
  unsigned int v4; 
  DrawListMode v5; 
  int v6; 
  __int64 v7; 
  bool result; 
  unsigned __int8 data; 

  data = rttHandle;
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1735, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  if ( !data )
    return 0;
  v3 = s_rttDepth;
  if ( s_rttDepth )
    return 0;
  v4 = data + 5;
  s_rttStack[s_rttDepth] = data;
  s_rttDepth = v3 + 1;
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1800, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  if ( v4 >= 0xE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1801, ASSERT_TYPE_ASSERT, "(customList < UIDrawList_Count)", (const char *)&queryFormat, "customList < UIDrawList_Count") )
    __debugbreak();
  LUI_QuadCache_CustomDrawListBegin(localClientNum, v4);
  switch ( v4 )
  {
    case 5u:
      v5 = DrawListMode_Regular;
      break;
    case 4u:
      v5 = DrawListMode_Lowres;
      break;
    case 1u:
      v5 = DrawListMode_ReceivePostFX;
      break;
    default:
      if ( v4 - 2 <= 1 )
      {
        v5 = DrawListMode_ReceivePostFXLite;
      }
      else
      {
        if ( v4 - 6 > 7 )
          goto LABEL_23;
        v5 = DrawListMode_RTT;
      }
      break;
  }
  LUI_Render_Push_DrawListMode(v5);
LABEL_23:
  LUI_QuadCache_AddDrawListCommandInternal(localClientNum, (void (__fastcall *)(const void *))LUI_RenderImmediate_RttBegin, &data, 1ui64, 1ui64);
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 470, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  v6 = s_numUnitScaleActive + 1;
  s_numUnitScaleActive = v6;
  if ( v6 > 2 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 472, ASSERT_TYPE_ASSERT, "(s_numUnitScaleActive <= 2)", (const char *)&queryFormat, "s_numUnitScaleActive <= LUI_MAX_NESTED_UNIT_SCALE") )
      __debugbreak();
    v6 = s_numUnitScaleActive;
  }
  v7 = v6 - 1;
  result = 1;
  s_unitScaleStack[v7] = 1.5;
  return result;
}

/*
==============
LUI_Render_PushScopeIndex
==============
*/
void LUI_Render_PushScopeIndex(int index)
{
  __int64 v2; 

  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 751, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  if ( s_numScopeIndexSettingsActive >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 752, ASSERT_TYPE_ASSERT, "(s_numScopeIndexSettingsActive < 4)", (const char *)&queryFormat, "s_numScopeIndexSettingsActive < LUI_MAX_NESTED_SCOPE_INDEX") )
    __debugbreak();
  if ( (unsigned int)index > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 753, ASSERT_TYPE_ASSERT, "(index >= 0 && index < 2)", (const char *)&queryFormat, "index >= 0 && index < 2") )
    __debugbreak();
  v2 = s_numScopeIndexSettingsActive++;
  s_scopeIndexSettingsStack[v2] = index;
}

/*
==============
LUI_Render_PushStencilRectangle
==============
*/
void LUI_Render_PushStencilRectangle(const LocalClientNum_t localClientNum, float left, float top, float right, float bottom)
{
  unsigned int *v6; 
  int v7; 
  StencilRect *v8; 
  double CurrentParallaxAmount; 
  vec4_t vec_8; 
  vec4_t point_8; 
  vec4_t result; 
  tmat44_t<vec4_t> outMatrix; 

  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1599, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  if ( s_currStencilRect < 0 )
    v6 = NULL;
  else
    v6 = (unsigned int *)&s_stencilRects[s_currStencilRect];
  v7 = s_currStencilRect + 1;
  s_currStencilRect = v7;
  if ( v7 >= 5 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1606, ASSERT_TYPE_ASSERT, "(s_currStencilRect < 5)", (const char *)&queryFormat, "s_currStencilRect < MAX_STENCIL_RECT_DEPTH") )
      __debugbreak();
    v7 = s_currStencilRect;
  }
  if ( (unsigned int)v7 <= 4 )
  {
    point_8.v[0] = left;
    v8 = &s_stencilRects[v7];
    point_8.v[1] = top;
    point_8.v[2] = 0.0;
    point_8.v[3] = FLOAT_1_0;
    vec_8.v[0] = right;
    vec_8.v[1] = bottom;
    vec_8.v[2] = 0.0;
    vec_8.v[3] = FLOAT_1_0;
    LUI_ApplyTransformsToPoint(&point_8);
    LUI_ApplyTransformsToPoint(&vec_8);
    CurrentParallaxAmount = LUI_Render_GetCurrentParallaxAmount();
    if ( *(float *)&CurrentParallaxAmount > 0.0 )
    {
      LUI_GetCurrentParallaxMatrix(*(float *)&CurrentParallaxAmount, &outMatrix);
      LUI_Matrix_MultiplyVector(&outMatrix, &point_8, &result);
      point_8 = result;
      LUI_Matrix_MultiplyVector(&outMatrix, &vec_8, &result);
      vec_8 = result;
    }
    _XMM0 = LODWORD(point_8.v[0]);
    _XMM1 = LODWORD(point_8.v[1]);
    __asm
    {
      vmaxss  xmm3, xmm0, xmm6
      vmaxss  xmm2, xmm1, xmm6
    }
    if ( v6 )
    {
      _XMM0 = v6[1];
      __asm { vmaxss  xmm1, xmm0, xmm2 }
      v8->top = *(float *)&_XMM1;
      _XMM2 = v6[3];
      __asm { vminss  xmm0, xmm2, dword ptr [rsp+110h+vec+0Ch] }
      v8->bottom = *(float *)&_XMM0;
      _XMM1 = *v6;
      __asm { vmaxss  xmm2, xmm1, xmm3 }
      v8->left = *(float *)&_XMM2;
      _XMM0 = v6[2];
      __asm { vminss  xmm1, xmm0, dword ptr [rsp+110h+vec+8] }
    }
    else
    {
      *(float *)&_XMM1 = vec_8.v[0];
      v8->bottom = vec_8.v[1];
      v8->top = *(float *)&_XMM2;
      v8->left = *(float *)&_XMM3;
    }
    v8->right = *(float *)&_XMM1;
    _XMM0 = LODWORD(v8->top);
    _XMM1 = LODWORD(v8->bottom);
    __asm { vmaxss  xmm3, xmm0, xmm6 }
    _XMM0 = LODWORD(v8->left);
    __asm
    {
      vmaxss  xmm2, xmm1, xmm6
      vmaxss  xmm1, xmm0, xmm6
    }
    _XMM0 = LODWORD(v8->right);
    __asm { vmaxss  xmm4, xmm0, xmm6 }
    v8->right = *(float *)&_XMM4;
    v8->top = *(float *)&_XMM3;
    v8->bottom = *(float *)&_XMM2;
    v8->left = *(float *)&_XMM1;
    if ( *(float *)&_XMM3 > *(float *)&_XMM2 || *(float *)&_XMM1 > *(float *)&_XMM4 )
    {
      *(_QWORD *)&v8->left = 0i64;
      *(_QWORD *)&v8->right = 0i64;
    }
    LUI_QuadCache_AddDrawListCommandInternal(localClientNum, (void (__fastcall *)(const void *))LUI_RenderImmediate_SetScissorRect, v8, 0x10ui64, 4ui64);
  }
}

/*
==============
LUI_Render_PushUnitScale
==============
*/
void LUI_Render_PushUnitScale(float unitScale)
{
  int v1; 

  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 470, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  v1 = s_numUnitScaleActive + 1;
  s_numUnitScaleActive = v1;
  if ( v1 > 2 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 472, ASSERT_TYPE_ASSERT, "(s_numUnitScaleActive <= 2)", (const char *)&queryFormat, "s_numUnitScaleActive <= LUI_MAX_NESTED_UNIT_SCALE") )
      __debugbreak();
    v1 = s_numUnitScaleActive;
  }
  s_unitScaleStack[v1 - 1] = unitScale;
}

/*
==============
LUI_Render_Push_DrawListMode
==============
*/
void LUI_Render_Push_DrawListMode(DrawListMode mode)
{
  unsigned int v1; 

  v1 = s_drawListModeDepth;
  if ( s_drawListModeDepth >= 8 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1702, ASSERT_TYPE_ASSERT, "(s_drawListModeDepth < ( sizeof( *array_counter( s_drawListMode ) ) + 0 ))", (const char *)&queryFormat, "s_drawListModeDepth < ARRAY_COUNT( s_drawListMode )") )
      __debugbreak();
    v1 = s_drawListModeDepth;
  }
  s_drawListModeDepth = v1 + 1;
  s_drawListMode[v1] = mode;
}

/*
==============
LUI_Render_ResetBlendMode
==============
*/
void LUI_Render_ResetBlendMode(void)
{
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1856, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  s_currentBlendMode = 0;
  s_blendModeStack[0] = LUI_BLEND_MODE_BLEND;
}

/*
==============
LUI_Render_ResetDrawListMode
==============
*/
void LUI_Render_ResetDrawListMode(void)
{
  s_drawListModeDepth = 0;
}

/*
==============
LUI_Render_ResetParallaxEnabled
==============
*/
void LUI_Render_ResetParallaxEnabled(void)
{
  if ( LUI_IsInExecDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 385, ASSERT_TYPE_ASSERT, "(!LUI_IsInExecDrawList())", (const char *)&queryFormat, "!LUI_IsInExecDrawList()") )
    __debugbreak();
  s_currentParallax = 0;
  *(_QWORD *)s_parallaxAmount = 0i64;
  *(_QWORD *)&s_parallaxAmount[2] = 0i64;
  *(_QWORD *)&s_parallaxAmount[4] = 0i64;
  *(_QWORD *)&s_parallaxAmount[6] = 0i64;
}

/*
==============
LUI_Render_Send2DQuadRenderCommand
==============
*/
void LUI_Render_Send2DQuadRenderCommand(const vec2_t *verts, LUIQuadUV *uv, const vec4_t *color, const GfxImage *image, Material *material, float glitchAmount, float unitScale, float blurAmount, unsigned __int16 samplerState, const LUIColorOpData *colorOp, const int scopeIndex, const bool applyScopeBufferWeight, const int flags, const float extraParam)
{
  __int128 v14; 
  __int128 v15; 
  __int128 v16; 
  __int128 v17; 
  __int128 v18; 
  __int128 v19; 
  float uMax; 
  float vMin; 
  float vMax; 
  bool v27; 
  GfxPixelFormat format; 
  int v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  double v41; 
  __int64 minS; 
  float outT1; 
  float outS1; 
  float outT0; 
  float outS0; 
  __int128 v47; 
  __int128 v48; 
  __int128 v49; 
  __int128 v50; 
  __int128 v51; 
  __int128 v52; 

  v47 = v19;
  LUI_Render_ApplyGlitch(COERCE_DOUBLE((unsigned __int64)LODWORD(glitchAmount)), unitScale);
  if ( s_blurAmount != blurAmount )
  {
    s_blurAmount = blurAmount;
    R_AddCmdSetUIBlur(blurAmount > 0.0, blurAmount);
  }
  LUI_Render_ApplyColorOp(colorOp);
  uMax = uv->minMax.uMax;
  outS0 = uv->minMax.uMin;
  vMin = uv->minMax.vMin;
  outS1 = uMax;
  vMax = uv->minMax.vMax;
  outT0 = vMin;
  outT1 = vMax;
  Image_Process2DTextureCoordsForAtlasing(image, &outS0, &outS1, &outT0, &outT1);
  v27 = 0;
  if ( !LUI_IsInExecDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 853, ASSERT_TYPE_ASSERT, "(LUI_IsInExecDrawList())", (const char *)&queryFormat, "LUI_IsInExecDrawList()") )
    __debugbreak();
  if ( s_useRTT )
  {
    format = image->format;
    v27 = (unsigned int)(format - 1) <= 2 || format == GFX_PF_BC4;
  }
  R_AddCmdUISetCodeSampler(samplerState, v27);
  R_AddCmdSetCodeTexture(4u, image);
  if ( scopeIndex >= 0 || applyScopeBufferWeight )
  {
    v29 = 0;
    if ( scopeIndex > 0 )
      v29 = scopeIndex;
    R_AddCmdUISetScopeIndex(v29, applyScopeBufferWeight);
  }
  if ( (flags & 0x10) != 0 )
  {
    v30 = verts[1].v[0];
    v31 = verts[1].v[1] - verts->v[1];
    v32 = verts[3].v[1] - verts->v[1];
    v52 = v14;
    v33 = v30 - verts->v[0];
    v34 = verts[3].v[0] - verts->v[0];
    v51 = v15;
    v35 = outS0;
    v50 = v16;
    v36 = outT0;
    v49 = v17;
    v37 = outS1;
    v48 = v18;
    v38 = outT1;
    v39 = fminf(fsqrt((float)(v31 * v31) + (float)(v33 * v33)), fsqrt((float)(v32 * v32) + (float)(v34 * v34)));
    v40 = fminf(v37 - v35, v38 - v36);
    v41 = I_fclamp((float)(v40 * extraParam) * (float)(2.0 / v39), 0.0, 1.0);
    R_AddCmdUISetPixelShapeParams(GFX_PIXEL_SHAPE_TYPE_CIRCLE, (float)(1.0 - *(float *)&v41) - 0.025, 0.97500002);
  }
  if ( uv->mode )
  {
    if ( uv->mode == ROTATED )
    {
      R_AddCmdDrawStretchPicRotateST(verts, uv->rotated.uCenter, uv->rotated.vCenter, uv->rotated.uScale, uv->rotated.vScale, outS0, outS1, outT0, outT1, uv->rotated.angle, color, material);
    }
    else
    {
      LODWORD(minS) = (unsigned __int8)uv->mode;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 931, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected LUIQuadUVMode: %d", minS) )
        __debugbreak();
    }
  }
  else
  {
    R_AddCmdDrawQuadPicST(verts, outS0, outT0, outS1, outT1, color, material);
  }
}

/*
==============
LUI_Render_SendCommandForRTT
==============
*/
void LUI_Render_SendCommandForRTT(bool useRTT)
{
  if ( !LUI_IsInExecDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 846, ASSERT_TYPE_ASSERT, "(LUI_IsInExecDrawList())", (const char *)&queryFormat, "LUI_IsInExecDrawList()") )
    __debugbreak();
  s_useRTT = useRTT;
}

/*
==============
LUI_Render_SendQuadRenderCommand
==============
*/
void LUI_Render_SendQuadRenderCommand(const vec4_t (*verts)[4], LUIQuadUV *uv, const vec4_t *color, const GfxImage *image, Material *material, float glitchAmount, float unitScale, float blurAmount, unsigned __int16 samplerState, float parallaxAmount, const LUIColorOpData *colorOp, bool has3DTransforms, const int scopeIndex, const int flags, const float extraParam)
{
  __int128 v15; 
  __int128 v16; 
  Material *v17; 
  const vec4_t *v19; 
  bool v22; 
  int v23; 
  unsigned int v24; 
  float *v25; 
  __int64 v26; 
  float v27; 
  float v28; 
  float uMax; 
  float vMin; 
  float vMax; 
  bool v32; 
  GfxPixelFormat format; 
  vec3_t *p_vertsa; 
  __int64 v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  __int64 minS; 
  float outT1; 
  float outS1; 
  float outT0; 
  float outS0; 
  BOOL v49; 
  vec4_t *v50; 
  Material *v51; 
  LUIColorOpData *v52; 
  vec4_t outPosition; 
  tmat44_t<vec4_t> outMatrix; 
  vec3_t vertsa; 
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  float v60; 
  __int128 v61; 
  __int128 v62; 

  v17 = material;
  v19 = color;
  v51 = material;
  v52 = (LUIColorOpData *)colorOp;
  v50 = (vec4_t *)color;
  if ( !image )
  {
    if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 986, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
      return;
    goto LABEL_3;
  }
  v22 = Stream_CheckImage(image, MIP3);
  CL_UIStreaming_TouchImage(image);
  v23 = flags;
  v24 = (unsigned int)flags >> 6;
  LOBYTE(v24) = (flags & 0x40) != 0;
  v49 = v24;
  if ( has3DTransforms )
  {
    if ( v22 )
    {
      v62 = v15;
      v25 = &vertsa.v[1];
      v61 = v16;
      v26 = 4i64;
      do
      {
        LUI_Render_ApplyParallax((const vec4_t *)verts, &outPosition, &parallaxAmount);
        if ( outPosition.v[3] == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1025, ASSERT_TYPE_ASSERT, "(tempVert[3] != 0.0f)", (const char *)&queryFormat, "tempVert[3] != 0.0f") )
          __debugbreak();
        v27 = (float)(1.0 / outPosition.v[3]) * outPosition.v[1];
        v28 = (float)(1.0 / outPosition.v[3]) * outPosition.v[2];
        *(v25 - 1) = (float)(1.0 / outPosition.v[3]) * outPosition.v[0];
        *v25 = v27;
        v25[1] = v28;
        v25 += 3;
        verts = (const vec4_t (*)[4])((char *)verts + 16);
        --v26;
      }
      while ( v26 );
      LUI_Render_ApplyGlitch(COERCE_DOUBLE((unsigned __int64)LODWORD(glitchAmount)), unitScale);
      if ( s_blurAmount != blurAmount )
      {
        s_blurAmount = blurAmount;
        R_AddCmdSetUIBlur(blurAmount > 0.0, blurAmount);
      }
      LUI_Render_ApplyColorOp(v52);
      uMax = uv->minMax.uMax;
      outS0 = uv->minMax.uMin;
      vMin = uv->minMax.vMin;
      outS1 = uMax;
      vMax = uv->minMax.vMax;
      outT0 = vMin;
      outT1 = vMax;
      Image_Process2DTextureCoordsForAtlasing(image, &outS0, &outS1, &outT0, &outT1);
      v32 = 0;
      if ( !LUI_IsInExecDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 853, ASSERT_TYPE_ASSERT, "(LUI_IsInExecDrawList())", (const char *)&queryFormat, "LUI_IsInExecDrawList()") )
        __debugbreak();
      if ( s_useRTT )
      {
        format = image->format;
        v32 = (unsigned int)(format - 1) <= 2 || format == GFX_PF_BC4;
      }
      R_AddCmdUISetCodeSampler(samplerState, v32);
      R_AddCmdSetCodeTexture(4u, image);
      if ( scopeIndex >= 0 )
        R_AddCmdUISetScopeIndex(scopeIndex, v49);
      if ( uv->mode )
      {
        if ( uv->mode == ROTATED )
        {
          R_AddCmdDraw3DStretchPicRotateST(&vertsa, uv->rotated.uCenter, uv->rotated.vCenter, uv->rotated.uScale, uv->rotated.vScale, outS0, outS1, outT0, outT1, uv->rotated.angle, v50, v51);
        }
        else
        {
          LODWORD(minS) = (unsigned __int8)uv->mode;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 976, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected LUIQuadUVMode: %d", minS) )
LABEL_3:
            __debugbreak();
        }
      }
      else
      {
        R_AddCmdDraw3DQuadPicST(&vertsa, outS0, outT0, outS1, outT1, v50, v51);
      }
    }
  }
  else
  {
    if ( parallaxAmount <= 0.0 )
    {
      v37 = (*verts)[0].v[1];
      vertsa.v[0] = (*verts)[0].v[0];
      v38 = (*verts)[1].v[0];
      vertsa.v[1] = v37;
      v39 = (*verts)[1].v[1];
      vertsa.v[2] = v38;
      v40 = (*verts)[2].v[0];
      v56 = v39;
      v41 = (*verts)[2].v[1];
      v57 = v40;
      v42 = (*verts)[3].v[0];
      v58 = v41;
      v43 = (*verts)[3].v[1];
      v59 = v42;
      v60 = v43;
    }
    else
    {
      LUI_GetCurrentParallaxMatrix(parallaxAmount, &outMatrix);
      p_vertsa = &vertsa;
      v35 = 4i64;
      do
      {
        LUI_Matrix_MultiplyVector(&outMatrix, (const vec4_t *)verts, &outPosition);
        v36 = outPosition.v[1];
        verts = (const vec4_t (*)[4])((char *)verts + 16);
        p_vertsa->v[0] = outPosition.v[0];
        p_vertsa->v[1] = v36;
        p_vertsa = (vec3_t *)((char *)p_vertsa + 8);
        --v35;
      }
      while ( v35 );
      LOBYTE(v24) = v49;
      v19 = v50;
      v17 = v51;
    }
    if ( v22 || (v23 & 0x10) != 0 )
      LUI_Render_Send2DQuadRenderCommand((const vec2_t *)&vertsa, uv, v19, image, v17, glitchAmount, unitScale, blurAmount, samplerState, v52, scopeIndex, v24, v23, extraParam);
    else
      LUI_Render_SendSpinnerRenderCommand((const vec2_t *)&vertsa);
  }
}

/*
==============
LUI_Render_SendSpinnerRenderCommand
==============
*/
void LUI_Render_SendSpinnerRenderCommand(const vec2_t *verts)
{
  const GfxImage *SpinnerMaterial; 
  float v3; 
  float v4; 
  const dvar_t *v5; 
  const GfxImage *v6; 
  float displayHeight; 
  float v8; 
  float v9; 
  const dvar_t *v10; 
  float v11; 
  const dvar_t *v12; 
  unsigned int unsignedInt; 
  const dvar_t *v14; 
  int v17; 
  unsigned int v18; 
  __m128i v19; 
  const dvar_t *v20; 
  int v23; 
  int integer; 
  const dvar_t *v25; 
  int width; 
  int v27; 
  int height; 
  int v29; 
  int v30; 
  float v31; 
  float v32; 
  vec2_t vertsa; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 

  SpinnerMaterial = LUI_CoD_GetSpinnerMaterial();
  v3 = (float)((float)(verts[2].v[0] - verts->v[0]) * 0.5) + verts->v[0];
  v4 = (float)((float)(verts[2].v[1] - verts->v[1]) * 0.5) + verts->v[1];
  v5 = DCONST_DVARFLT_lui_streaming_spinner_width;
  v6 = SpinnerMaterial;
  displayHeight = (float)vidConfig.displayHeight;
  v8 = displayHeight * 0.0013888889;
  if ( !DCONST_DVARFLT_lui_streaming_spinner_width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_streaming_spinner_width") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  v9 = v8 * v5->current.value;
  v10 = DCONST_DVARFLT_lui_streaming_spinner_height;
  if ( !DCONST_DVARFLT_lui_streaming_spinner_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_streaming_spinner_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  v11 = v8 * v10->current.value;
  v12 = DCONST_DVARINT_lui_streaming_spinner_frame_count;
  vertsa.v[1] = v4 - (float)(v11 * 0.5);
  v35 = vertsa.v[1];
  v37 = (float)(v11 * 0.5) + v4;
  v39 = v37;
  vertsa.v[0] = v3 - (float)(v9 * 0.5);
  v34 = (float)(v9 * 0.5) + v3;
  v36 = v34;
  v38 = vertsa.v[0];
  if ( !DCONST_DVARINT_lui_streaming_spinner_frame_count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_streaming_spinner_frame_count") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  unsignedInt = v12->current.unsignedInt;
  v14 = DCONST_DVARFLT_lui_streaming_spinner_frame_rate;
  if ( !DCONST_DVARFLT_lui_streaming_spinner_frame_rate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_streaming_spinner_frame_rate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  _XMM1 = 0i64;
  _mm_cvtepi32_ps((__m128i)unsignedInt);
  __asm { vroundss xmm1, xmm1, xmm0, 2 }
  v17 = (int)(float)(*(float *)&_XMM1 * 1000.0);
  v18 = Sys_Milliseconds() % v17;
  v19 = (__m128i)(unsigned int)v17;
  v20 = DCONST_DVARINT_lui_streaming_spinner_frame_width;
  _mm_cvtepi32_ps((__m128i)v18);
  _mm_cvtepi32_ps(v19);
  _XMM0 = 0i64;
  __asm { vroundss xmm0, xmm0, xmm3, 1 }
  v23 = (int)*(float *)&_XMM0;
  if ( !DCONST_DVARINT_lui_streaming_spinner_frame_width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_streaming_spinner_frame_width") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  integer = v20->current.integer;
  v25 = DCONST_DVARINT_lui_streaming_spinner_frame_height;
  if ( !DCONST_DVARINT_lui_streaming_spinner_frame_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_streaming_spinner_frame_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v25);
  width = v6->width;
  v27 = v25->current.integer;
  height = v6->height;
  v29 = width / integer;
  if ( width / integer < 1 )
    v29 = 1;
  v30 = v6->height / v27;
  v31 = (float)(v23 % v29) / (float)v29;
  if ( v30 < 1 )
    v30 = 1;
  v32 = (float)(v23 / v29) / (float)v30;
  R_AddCmdSetCodeTexture(4u, v6);
  R_AddCmdDrawQuadPicST(&vertsa, v31, v32, (float)((float)integer / (float)width) + v31, (float)((float)v27 / (float)height) + v32, &colorWhite, s_luiMaterials[1]);
}

/*
==============
LUI_Render_SendTextRenderCommand
==============
*/
void LUI_Render_SendTextRenderCommand(const char *text, int maxChars, GfxFont *font, int internalFontSize, const vec4_t (*verts)[4], char tracking, float rotation, const vec4_t *color, Material *textMaterial, Material *iconsMaterial, bool tintIcons, const FontDecodeStyle *fontDecodeStyle, const FontGlowStyle *fontGlowStyle, float glitchAmount, float unitScale, float blurAmount, float parallaxAmount, const LUIColorOpData *colorOp, bool has3DTransforms)
{
  const vec4_t (*v20)[4]; 
  bool usePost; 
  float *v24; 
  __int64 v25; 
  float *v26; 
  float v27; 
  int MinHeightForDistanceField; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  vec4_t result; 
  tmat44_t<vec4_t> outMatrix; 
  vec3_t points; 
  float v38; 
  float v39; 
  float v40; 

  v20 = verts;
  if ( internalFontSize )
  {
    if ( internalFontSize > 0 )
      goto LABEL_9;
  }
  else
  {
    if ( !font && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1102, ASSERT_TYPE_ASSERT, "(font)", (const char *)&queryFormat, "font") )
      __debugbreak();
    Com_Printf(13, "Text render font %s size is 0. The font pixelHeight is %d \n", font->fontName, (unsigned int)font->pixelHeight);
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1107, ASSERT_TYPE_ASSERT, "(internalFontSize > 0)", (const char *)&queryFormat, "internalFontSize > 0") )
    __debugbreak();
LABEL_9:
  usePost = blurAmount > 0.0;
  LUI_Render_ApplyGlitch(COERCE_DOUBLE((unsigned __int64)LODWORD(glitchAmount)), unitScale);
  if ( s_blurAmount != blurAmount )
  {
    s_blurAmount = blurAmount;
    R_AddCmdSetUIBlur(usePost, blurAmount);
  }
  LUI_Render_ApplyColorOp(colorOp);
  if ( has3DTransforms )
  {
    LUI_GetCurrentParallaxMatrix(parallaxAmount, &outMatrix);
    v24 = &points.v[2];
    v25 = 4i64;
    v26 = &(*verts)[0].v[2];
    do
    {
      if ( parallaxAmount <= 0.0 )
      {
        *(v24 - 2) = *(v26 - 2);
        *(v24 - 1) = *(v26 - 1);
        *v24 = *v26;
      }
      else
      {
        LUI_Matrix_MultiplyVector(&outMatrix, (const vec4_t *)v20, &result);
        v27 = result.v[1];
        *(v24 - 2) = result.v[0];
        *v24 = result.v[2];
        *(v24 - 1) = v27;
      }
      v20 = (const vec4_t (*)[4])((char *)v20 + 16);
      v24 += 3;
      v26 += 4;
      --v25;
    }
    while ( v25 );
    MinHeightForDistanceField = FontCache_GetMinHeightForDistanceField();
    v29 = fsqrt((float)((float)((float)(v39 - points.v[1]) * (float)(v39 - points.v[1])) + (float)((float)(v38 - points.v[0]) * (float)(v38 - points.v[0]))) + (float)((float)(v40 - points.v[2]) * (float)(v40 - points.v[2])));
    R_AddCmdDrawText3DUI(text, font, textMaterial, MinHeightForDistanceField, &points, v29 * (float)(1.0 / (float)MinHeightForDistanceField), v29 * (float)(1.0 / (float)MinHeightForDistanceField), tracking, color, fontDecodeStyle, fontGlowStyle, iconsMaterial);
  }
  else
  {
    v30 = (*verts)[3].v[0];
    v31 = (*verts)[3].v[1];
    v32 = FLOAT_1_0;
    v33 = _mm_cvtepi32_ps((__m128i)(unsigned int)internalFontSize).m128_f32[0];
    v34 = fsqrt((float)((float)((*verts)[0].v[1] - v31) * (float)((*verts)[0].v[1] - v31)) + (float)((float)((*verts)[0].v[0] - v30) * (float)((*verts)[0].v[0] - v30)));
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v34 - v33) & _xmm) > 0.000001 )
      v32 = v34 / v33;
    if ( parallaxAmount <= 0.0 )
    {
      result.v[0] = (*verts)[3].v[0];
      result.v[1] = v31;
    }
    else
    {
      LUI_GetCurrentParallaxMatrix(parallaxAmount, &outMatrix);
      LUI_Matrix_MultiplyVector(&outMatrix, &(*verts)[3], &result);
      v31 = result.v[1];
      v30 = result.v[0];
    }
    if ( fontDecodeStyle )
      R_AddCmdDrawTextWithEffects(text, 0x7FFFFFFF, font, textMaterial, internalFontSize, v30, v31, v32, v32, tracking, rotation, color, fontDecodeStyle, fontGlowStyle, usePost, iconsMaterial, tintIcons);
    else
      R_AddCmdDrawText(text, 0x7FFFFFFF, font, textMaterial, internalFontSize, v30, v31, v32, v32, tracking, rotation, color, fontGlowStyle, usePost, tintIcons, 0, iconsMaterial);
  }
}

