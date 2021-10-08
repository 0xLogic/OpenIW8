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

bool __fastcall LUI_IsParallaxEnabled(double _XMM0_8, double _XMM1_8)
{
  char v3; 
  char v4; 

  if ( LUI_IsInExecDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 402, ASSERT_TYPE_ASSERT, "(!LUI_IsInExecDrawList())", (const char *)&queryFormat, "!LUI_IsInExecDrawList()") )
    __debugbreak();
  _XMM0_8 = LUI_Render_GetCurrentParallaxAmount();
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
  }
  return !(v3 | v4);
}

/*
==============
LUI_RenderImmediate_ClearBlur
==============
*/

void __fastcall LUI_RenderImmediate_ClearBlur(__int64 a1, double _XMM1_8)
{
  __asm { vxorps  xmm1, xmm1, xmm1; scale }
  R_AddCmdSetUIBlur(0, *(const float *)&_XMM1);
}

/*
==============
LUI_RenderImmediate_ClearColorOp
==============
*/

void __fastcall LUI_RenderImmediate_ClearColorOp(__int64 a1, double _XMM1_8)
{
  __asm { vxorps  xmm1, xmm1, xmm1; param }
  R_AddCmdSetUIColorOp(0, *(const float *)&_XMM1);
}

/*
==============
LUI_RenderImmediate_ClearGlitch
==============
*/

void __fastcall LUI_RenderImmediate_ClearGlitch(double _XMM0_8)
{
  float v2; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+38h+var_18], xmm0
  }
  R_AddCmdSetUIGlitch(0, 0, 0, 0, v2);
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
  float v35; 
  float v36; 
  float v37; 
  float v38; 

  _R8 = data;
  renderMaskPushCount = data->renderMaskPushCount;
  if ( renderMaskPushCount )
  {
    if ( renderMaskPushCount == 1 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r8+34h]
        vmovss  xmm1, dword ptr [r8+30h]
        vmovss  xmm3, dword ptr [r8+18h]; maskHeight
        vmovss  xmm2, dword ptr [r8+14h]; maskWidth
        vmovss  [rsp+78h+var_28], xmm0
        vmovss  xmm0, dword ptr [r8+2Ch]
        vmovss  [rsp+78h+var_30], xmm1
        vmovss  xmm1, dword ptr [r8+28h]
        vmovss  [rsp+78h+var_38], xmm0
        vmovss  xmm0, dword ptr [r8+24h]
        vmovss  [rsp+78h+var_40], xmm1
        vmovss  xmm1, dword ptr [r8+20h]
        vmovss  [rsp+78h+var_48], xmm0
        vmovss  xmm0, dword ptr [r8+1Ch]
        vmovss  [rsp+78h+var_50], xmm1
        vmovss  xmm1, dword ptr [r8+8]; maskY
        vmovss  [rsp+78h+var_58], xmm0
        vmovss  xmm0, dword ptr [r8+4]; maskX
      }
      R_AddCmdSetSecondUIMask(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v25, v27, v29, v31, v33, v35, v37, &_R8->viewportSize, _R8->image);
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r8+34h]
      vmovss  xmm1, dword ptr [r8+30h]
      vmovss  xmm3, dword ptr [r8+18h]; maskHeight
      vmovss  xmm2, dword ptr [r8+14h]; maskWidth
      vmovss  [rsp+78h+var_28], xmm0
      vmovss  xmm0, dword ptr [r8+2Ch]
      vmovss  [rsp+78h+var_30], xmm1
      vmovss  xmm1, dword ptr [r8+28h]
      vmovss  [rsp+78h+var_38], xmm0
      vmovss  xmm0, dword ptr [r8+24h]
      vmovss  [rsp+78h+var_40], xmm1
      vmovss  xmm1, dword ptr [r8+20h]
      vmovss  [rsp+78h+var_48], xmm0
      vmovss  xmm0, dword ptr [r8+1Ch]
      vmovss  [rsp+78h+var_50], xmm1
      vmovss  xmm1, dword ptr [r8+8]; maskY
      vmovss  [rsp+78h+var_58], xmm0
      vmovss  xmm0, dword ptr [r8+4]; maskX
    }
    R_AddCmdSetFirstUIMask(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v26, v28, v30, v32, v34, v36, v38, &_R8->viewportSize, _R8->image);
  }
}

/*
==============
LUI_RenderImmediate_SetPixelGrid
==============
*/
void LUI_RenderImmediate_SetPixelGrid(const LUIElementPixelGridSettings *settings)
{
  float v5; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, cs:__real@3b808081
    vmovss  [rsp+38h+var_18], xmm1
  }
  R_AddCmdSetUIPixelGrid(settings->blockWidth, settings->blockHeight, settings->gutterWidth, settings->gutterHeight, v5);
}

/*
==============
LUI_RenderImmediate_SetScissorRect
==============
*/

void __fastcall LUI_RenderImmediate_SetScissorRect(const StencilRect *nextRect, __int64 a2, double _XMM2_8)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+0Ch]
    vsubss  xmm1, xmm0, dword ptr [rcx+4]
    vmovss  xmm0, dword ptr [rcx+8]
    vcvttss2si edx, dword ptr [rcx+4]; y
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm1, 2
    vsubss  xmm1, xmm0, dword ptr [rcx]
    vcvttss2si ecx, dword ptr [rcx]; x
    vcvttss2si r9d, xmm2; height
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm1, 2
    vcvttss2si r8d, xmm2; width
  }
  R_AddCmdSetScissorRect(_ECX, _EDX, _ER8, _ER9);
}

/*
==============
LUI_Render_ApplyColorOp
==============
*/
void LUI_Render_ApplyColorOp(const LUIColorOpData *colorOp)
{
  _RBX = colorOp;
  if ( !colorOp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 641, ASSERT_TYPE_ASSERT, "(colorOp)", (const char *)&queryFormat, "colorOp") )
    __debugbreak();
  if ( s_curColorOp.op != _RBX->op )
    goto LABEL_6;
  __asm
  {
    vmovss  xmm0, cs:s_curColorOp.param
    vucomiss xmm0, dword ptr [rbx+4]
  }
  if ( s_curColorOp.op != _RBX->op )
  {
LABEL_6:
    __asm { vmovss  xmm1, dword ptr [rbx+4]; param }
    s_curColorOp = *_RBX;
    R_AddCmdSetUIColorOp(s_curColorOp.op, *(const float *)&_XMM1);
  }
}

/*
==============
LUI_Render_ApplyGlitch
==============
*/

void __fastcall LUI_Render_ApplyGlitch(double intensity, double unitScale)
{
  int v12; 
  int v34; 
  bool v35; 
  bool v62; 
  bool v64; 
  float fmt; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm2, cs:s_glitchAmount
    vucomiss xmm2, xmm0
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmm10, xmm1
    vmovaps xmm9, xmm0
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovss  cs:s_glitchAmount, xmm0
  }
  v12 = Sys_Milliseconds();
  if ( v12 % 550 >= 500 || v12 % 800 >= 700 || v12 % 2500 >= 2300 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ecx
      vmulss  xmm2, xmm0, cs:__real@3c5a740e
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ecx
      vmulss  xmm3, xmm0, cs:__real@3be2dafa
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ecx
      vmulss  xmm4, xmm0, cs:__real@3bad7a47
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, r8d
      vmulss  xmm8, xmm0, cs:__real@3f355555
    }
  }
  else
  {
    rand();
    __asm
    {
      vxorps  xmm8, xmm8, xmm8
      vcvtsi2ss xmm8, xmm8, eax
    }
    rand();
    __asm
    {
      vxorps  xmm7, xmm7, xmm7
      vcvtsi2ss xmm7, xmm7, eax
    }
    rand();
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vcvtsi2ss xmm6, xmm6, eax
    }
    rand();
    __asm
    {
      vmulss  xmm3, xmm8, cs:__real@37e66833
      vmulss  xmm4, xmm7, cs:__real@37e66833
      vmulss  xmm8, xmm6, cs:__real@3b2a0154
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm2, xmm0, cs:__real@38000100
    }
  }
  __asm { vmovss  xmm7, cs:__real@3f800000 }
  v34 = v12 % 4900;
  v35 = (unsigned int)v34 <= 0x125C;
  if ( v34 > 4700 )
  {
    __asm
    {
      vmulss  xmm0, xmm9, cs:__real@3fc00000
      vminss  xmm9, xmm0, xmm7
    }
  }
  __asm
  {
    vmulss  xmm0, xmm2, cs:__real@40000000
    vmovss  xmm1, cs:__real@3dcccccd
    vaddss  xmm5, xmm0, xmm1
    vaddss  xmm6, xmm3, xmm1
    vaddss  xmm11, xmm4, xmm1
    vmovss  xmm4, cs:__real@437f0000
    vmulss  xmm1, xmm6, xmm10
    vmulss  xmm0, xmm1, cs:__real@42aa0000
    vmaxss  xmm2, xmm0, xmm7
    vminss  xmm1, xmm2, xmm4
    vmulss  xmm0, xmm11, xmm10
    vcvttss2si ebx, xmm1
    vmulss  xmm1, xmm0, cs:__real@42aa0000
    vmaxss  xmm2, xmm1, xmm7
    vmulss  xmm0, xmm8, xmm10
    vmaxss  xmm1, xmm0, xmm7
    vminss  xmm3, xmm2, xmm4
    vxorps  xmm7, xmm7, xmm7
    vminss  xmm2, xmm1, xmm4
    vmulss  xmm0, xmm9, xmm4
    vcomiss xmm6, xmm7
    vmovaps xmm6, [rsp+98h+var_18]
    vcvttss2si esi, xmm2
    vcvttss2si edi, xmm3
    vmulss  xmm8, xmm5, xmm10
    vcvttss2si ebp, xmm0
  }
  if ( v35 )
  {
    v62 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 555, ASSERT_TYPE_ASSERT, "(blockWidth > 0)", (const char *)&queryFormat, "blockWidth > 0");
    v35 = !v62;
    if ( v62 )
      __debugbreak();
  }
  __asm
  {
    vcomiss xmm11, xmm7
    vmovaps xmm11, [rsp+98h+var_68]
  }
  if ( v35 )
  {
    v64 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 556, ASSERT_TYPE_ASSERT, "(blockHeight > 0)", (const char *)&queryFormat, "blockHeight > 0");
    v35 = !v64;
    if ( v64 )
      __debugbreak();
  }
  __asm
  {
    vcomiss xmm8, xmm7
    vmovaps xmm7, [rsp+98h+var_28]
  }
  if ( v35 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 557, ASSERT_TYPE_ASSERT, "(outMaskPitch > 0.f)", (const char *)&queryFormat, "outMaskPitch > 0.f") )
    __debugbreak();
  __asm { vmovss  dword ptr [rsp+98h+fmt], xmm8 }
  R_AddCmdSetUIGlitch(_EBP, _EBX, _EDI, _ESI, fmt);
  __asm
  {
    vmovaps xmm8, [rsp+98h+var_38]
    vmovaps xmm9, [rsp+98h+var_48]
    vmovaps xmm10, [rsp+98h+var_58]
  }
}

/*
==============
LUI_Render_ApplyOffsetForCameraShake
==============
*/
void LUI_Render_ApplyOffsetForCameraShake(const LocalClientNum_t localClientNum, vec4_t *verts, unsigned int vertCount)
{
  __int64 v16; 
  __int64 v17; 
  bool enabled; 
  __int64 v32; 
  __int64 v53; 
  __int64 v54; 
  __int64 v55; 
  __int64 v56; 
  __int64 v76; 

  _RBX = verts;
  v16 = localClientNum;
  v17 = vertCount;
  if ( localClientNum >= (unsigned int)cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", localClientNum, cg_t::ms_allocatedCount) )
    __debugbreak();
  if ( !cg_t::ms_cgArray[v16] )
  {
    LODWORD(v76) = v16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v76) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v76) = v16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v76) )
      __debugbreak();
  }
  _RDI = cg_t::ms_cgArray[v16];
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1891, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( _RDI->refdef.droneCameraEffects.enabled )
  {
    __asm
    {
      vmovaps [rsp+0F8h+var_38], xmm7
      vmovaps [rsp+0F8h+var_68], xmm10
      vmovaps [rsp+0F8h+var_78], xmm11
      vmovaps [rsp+0F8h+var_88], xmm12
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vxorps  xmm0, xmm0, xmm0
      vucomiss xmm1, xmm0
      vmovaps [rsp+0F8h+var_98], xmm13
      vmovaps [rsp+0F8h+var_A8], xmm14
    }
    enabled = _RDI->refdef.droneCameraEffects.enabled;
    __asm
    {
      vmovss  xmm12, cs:__real@3f800000
      vsubss  xmm10, xmm12, dword ptr [rdi+17598h]
      vmovss  xmm7, cs:__real@3f000000
      vxorps  xmm13, xmm13, xmm13
      vcvtsi2ss xmm13, xmm13, rax
      vsubss  xmm0, xmm12, xmm10
      vxorps  xmm14, xmm14, xmm14
      vmulss  xmm11, xmm0, xmm7
      vcvtsi2ss xmm14, xmm14, rax
    }
    if ( (_DWORD)v17 )
    {
      __asm { vmovaps [rsp+0F8h+var_48], xmm8 }
      v32 = v17;
      __asm
      {
        vmovaps [rsp+0F8h+var_58], xmm9
        vmovaps [rsp+0F8h+var_B8], xmm15
        vdivss  xmm15, xmm12, xmm13
        vmovaps [rsp+0F8h+var_28], xmm6
        vdivss  xmm2, xmm12, xmm14
      }
      do
      {
        __asm
        {
          vmulss  xmm0, xmm15, dword ptr [rbx]
          vmulss  xmm1, xmm0, xmm10
          vmulss  xmm0, xmm2, dword ptr [rbx+4]
          vaddss  xmm8, xmm1, xmm11
          vmulss  xmm1, xmm0, xmm10
          vaddss  xmm9, xmm1, xmm11
        }
        if ( enabled )
        {
          __asm
          {
            vmovd   xmm0, dword ptr [rdi+69B4h]
            vmovss  xmm1, cs:__real@4728c000; Y
            vcvtdq2ps xmm0, xmm0
            vmulss  xmm0, xmm0, cs:__real@3a83126f; X
          }
          *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
          __asm
          {
            vmovaps xmm6, xmm0
            vmulss  xmm0, xmm0, dword ptr [rdi+1756Ch]; X
          }
          *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
          __asm
          {
            vmulss  xmm3, xmm6, cs:__real@4048f5c3
            vaddss  xmm1, xmm0, xmm12
            vxorps  xmm0, xmm0, xmm0
            vmulss  xmm2, xmm1, xmm7
            vaddss  xmm7, xmm2, dword ptr [rdi+17570h]
            vmovss  xmm0, xmm0, xmm3
          }
          *(double *)&_XMM0 = j___libm_sse2_sincosf_(v54, v53, v55, v56);
          __asm
          {
            vdivss  xmm3, xmm12, dword ptr [rdi+17568h]
            vmulss  xmm1, xmm0, xmm3
            vmulss  xmm2, xmm1, xmm7
            vshufps xmm0, xmm0, xmm0, 1
            vmulss  xmm0, xmm0, xmm3
            vmulss  xmm1, xmm0, xmm7
            vmovss  xmm7, cs:__real@3f000000
            vsubss  xmm8, xmm8, xmm2
            vaddss  xmm9, xmm9, xmm1
            vdivss  xmm2, xmm12, xmm14
          }
        }
        __asm
        {
          vmulss  xmm0, xmm8, xmm13
          vmulss  xmm1, xmm9, xmm14
          vmovss  dword ptr [rbx], xmm0
          vmovss  dword ptr [rbx+4], xmm1
        }
        ++_RBX;
        --v32;
      }
      while ( v32 );
      __asm
      {
        vmovaps xmm15, [rsp+0F8h+var_B8]
        vmovaps xmm9, [rsp+0F8h+var_58]
        vmovaps xmm8, [rsp+0F8h+var_48]
        vmovaps xmm6, [rsp+0F8h+var_28]
      }
    }
    __asm
    {
      vmovaps xmm13, [rsp+0F8h+var_98]
      vmovaps xmm12, [rsp+0F8h+var_88]
      vmovaps xmm11, [rsp+0F8h+var_78]
      vmovaps xmm10, [rsp+0F8h+var_68]
      vmovaps xmm7, [rsp+0F8h+var_38]
      vmovaps xmm14, [rsp+0F8h+var_A8]
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
  char v8; 
  bool v9; 
  tmat44_t<vec4_t> outMatrix; 

  _RSI = overrideAmount;
  if ( inPosition == outPosition && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 242, ASSERT_TYPE_ASSERT, "(&inPosition != &outPosition)", (const char *)&queryFormat, "&inPosition != &outPosition") )
    __debugbreak();
  v8 = 0;
  v9 = _RSI == NULL;
  if ( _RSI )
    __asm { vmovss  xmm0, dword ptr [rsi] }
  else
    *(double *)&_XMM0 = LUI_Render_GetCurrentParallaxAmount();
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
  }
  if ( v8 | v9 )
  {
    outPosition->v[0] = inPosition->v[0];
    outPosition->v[1] = inPosition->v[1];
    outPosition->v[2] = inPosition->v[2];
    outPosition->v[3] = inPosition->v[3];
  }
  else
  {
    LUI_GetCurrentParallaxMatrix(*(float *)&_XMM0, &outMatrix);
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

float __fastcall LUI_Render_CalculatePixelShapeInnerRadius(const vec2_t *const verts, double uMin, double uMax, double vMin, const float vMax)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+8]
    vmovaps [rsp+68h+var_18], xmm6
    vsubss  xmm6, xmm0, dword ptr [rcx]
    vmovss  xmm0, dword ptr [rcx+18h]
    vsubss  xmm4, xmm0, dword ptr [rcx]
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps xmm7, xmm1
    vmovss  xmm1, dword ptr [rcx+1Ch]
    vmulss  xmm0, xmm4, xmm4
    vmovaps [rsp+68h+var_38], xmm8
    vmovaps xmm8, xmm2
    vmovss  xmm2, dword ptr [rcx+0Ch]
    vsubss  xmm5, xmm2, dword ptr [rcx+4]
    vsubss  xmm2, xmm1, dword ptr [rcx+4]
    vmovaps [rsp+68h+var_48], xmm9
    vmovaps xmm9, xmm3
    vmulss  xmm3, xmm2, xmm2
    vaddss  xmm1, xmm3, xmm0
    vmulss  xmm2, xmm5, xmm5
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm2, xmm0
    vsqrtss xmm0, xmm2, xmm2; X
    vsqrtss xmm1, xmm1, xmm1; Y
  }
  *(float *)&_XMM0 = fminf(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm1, [rsp+68h+vMax]
    vmovaps xmm6, xmm0
    vsubss  xmm1, xmm1, xmm9; Y
    vsubss  xmm0, xmm8, xmm7; X
  }
  *(float *)&_XMM0 = fminf(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm1, cs:__real@40000000
    vmulss  xmm3, xmm0, [rsp+68h+shapeWidth]
    vdivss  xmm2, xmm1, xmm6
    vmovss  xmm6, cs:__real@3f800000
    vmulss  xmm0, xmm3, xmm2; val
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
    vmovaps xmm9, [rsp+68h+var_48]
    vsubss  xmm0, xmm6, xmm0
    vmovaps xmm6, [rsp+68h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
LUI_Render_ChooseSamplerState
==============
*/
__int64 LUI_Render_ChooseSamplerState(LUIQuadUV *uv, const LUIElement *element)
{
  unsigned __int16 v3; 
  int integer; 
  bool v12; 
  const GfxImage *image; 
  GfxPixelFormat format; 
  const dvar_t *v16; 

  v3 = 0;
  if ( uv->mode )
  {
    v3 = 384;
  }
  else
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rcx]
      vmovss  xmm0, cs:__real@3f800000
      vxorps  xmm1, xmm1, xmm1
      vcomiss xmm2, xmm1
      vcomiss xmm2, xmm0
    }
    if ( uv->mode == MIN_MAX )
    {
      __asm
      {
        vmovss  xmm2, dword ptr [rcx+4]
        vcomiss xmm2, xmm1
        vcomiss xmm2, xmm0
      }
      if ( uv->mode == MIN_MAX )
        v3 = 128;
    }
    __asm
    {
      vmovss  xmm2, dword ptr [rcx+8]
      vcomiss xmm2, xmm1
      vcomiss xmm2, xmm0
    }
    if ( uv->mode == MIN_MAX )
    {
      __asm
      {
        vmovss  xmm2, dword ptr [rcx+0Ch]
        vcomiss xmm2, xmm1
        vcomiss xmm2, xmm0
      }
      if ( uv->mode == MIN_MAX )
        v3 |= 0x100u;
    }
  }
  integer = 2;
  v12 = (element->usageFlags & 0x2000000) != 0;
  if ( LUIElement_IsImageLike(element) && v12 )
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
  v16 = DCONST_DVARINT_r_lui_setImageFiltering;
  if ( !DCONST_DVARINT_r_lui_setImageFiltering && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_lui_setImageFiltering") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  if ( v16->current.integer )
    integer = v16->current.integer;
  if ( integer != 1 )
    v3 |= 1u;
  return v3;
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
  LUI_QuadCache_AddDrawListCommand(localClientNum, (void (__fastcall *)())LUI_RenderImmediate_ClearBlur);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  cs:s_blurAmount, xmm0
  }
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
  LUI_QuadCache_AddDrawListCommand(localClientNum, (void (__fastcall *)())LUI_RenderImmediate_ClearGlitch);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  cs:s_glitchAmount, xmm0
  }
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
  bool has3DTransforms; 
  const LUIColorOpData *colorOp; 
  int scopeIndex; 
  DrawListMode v27; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  char v37; 
  void *retaddr; 
  unsigned __int16 pixelShapeTypea; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1235, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  if ( pixelShapeType == GFX_PIXEL_SHAPE_TYPE_CIRCLE )
    colorSource = LUI_COLOR_SOURCE_IMAGE_PIXEL_SHAPE;
  else
    colorSource = isSDF;
  material = LUI_Render_GetMaterial(colorSource, (element->usageFlags & 0x200000) == 0);
  *(double *)&_XMM0 = LUI_Render_GetCurrentParallaxAmount();
  __asm { vmovaps xmm6, xmm0 }
  has3DTransforms = LUI_Is3DTransformEnabled();
  pixelShapeTypea = LUI_Render_ChooseSamplerState(uv, element);
  *(float *)&_XMM0 = LUI_Render_GetGlitchAmount();
  __asm { vmovaps xmm7, xmm0 }
  *(float *)&_XMM0 = LUI_Render_GetBlurAmount();
  __asm { vmovaps xmm8, xmm0 }
  colorOp = LUI_Render_GetColorOp();
  if ( s_numScopeIndexSettingsActive )
    scopeIndex = s_scopeIndexSettingsStack[s_numScopeIndexSettingsActive - 1];
  else
    scopeIndex = s_numScopeIndexSettingsActive - 1;
  if ( s_drawListModeDepth )
    v27 = s_drawListMode[s_drawListModeDepth - 1];
  else
    v27 = DrawListMode_Default;
  __asm
  {
    vmovss  xmm0, [rsp+0E8h+extraParam]
    vmovss  [rsp+0E8h+var_60], xmm0
    vmovss  [rsp+0E8h+var_90], xmm6
    vmovss  [rsp+0E8h+var_A0], xmm8
    vmovss  [rsp+0E8h+var_A8], xmm7
  }
  LUI_QuadCache_Element_CacheImageQuad(luaVM, localClientNum, element, (const vec4_t *)verts, color, uv, image, material, v33, v34, pixelShapeTypea, v35, colorOp, has3DTransforms, scopeIndex, v27 == DrawListMode_ReceivePostFXLite, colorSource, v36);
  _R11 = &v37;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
LUI_Render_DrawImage
==============
*/
void LUI_Render_DrawImage(const LocalClientNum_t localClientNum, LUIElement *element, lua_State *luaVM, const vec4_t (*verts)[4], float uMin, float vMin, float uMax, float vMax, const vec4_t *color, const GfxImage *material)
{
  float v22; 
  LUIQuadUV uv; 
  vec4_t vertsa[4]; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovss  xmm0, [rsp+0F8h+uMin]
    vmovss  xmm1, [rsp+0F8h+uMax]
  }
  uv.minMax.uMax = 0.0;
  _RCX = vertsa;
  __asm
  {
    vmovss  [rsp+0F8h+var_A8.minMax.uMin], xmm0
    vmovss  xmm0, [rsp+0F8h+vMin]
  }
  uv.minMax.vMax = 0.0;
  __asm
  {
    vmovss  [rsp+0F8h+var_A8.minMax.vMin], xmm0
    vmovups ymm0, ymmword ptr [r9]
    vmovups ymmword ptr [r11-78h], ymm0
    vmovups ymm0, ymmword ptr [r9+20h]
    vmovss  [rsp+0F8h+var_A8.minMax.uMax], xmm1
    vmovss  xmm1, [rsp+0F8h+vMax]
    vmovups ymmword ptr [r11-58h], ymm0
    vmovss  [rsp+0F8h+var_A8.minMax.vMax], xmm1
  }
  memset(&uv.rotated, 0, 24);
  LUI_Render_PuffThinQuad(vertsa);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+0F8h+var_B0], xmm0
  }
  LUI_Render_CommitQuad(localClientNum, element, luaVM, (const vec4_t (*)[4])vertsa, &uv, color, material, 0, GFX_PIXEL_SHAPE_TYPE_NONE, v22);
}

/*
==============
LUI_Render_DrawImageRotatedUV
==============
*/
void LUI_Render_DrawImageRotatedUV(const LocalClientNum_t localClientNum, LUIElement *element, lua_State *luaVM, const vec4_t (*verts)[4], float uCenter, float vCenter, float uScale, float vScale, float uvAngle, const vec4_t *color, const GfxImage *material)
{
  float v18; 
  LUIQuadUV uv; 

  __asm
  {
    vmovss  xmm1, [rsp+88h+uCenter]
    vmovss  xmm0, [rsp+88h+uvAngle]
    vmovss  [rsp+88h+var_38.rotated.angle], xmm0
    vmovss  xmm0, [rsp+88h+vCenter]
    vmovss  [rsp+88h+var_38.rotated.uCenter], xmm1
    vmovss  xmm1, [rsp+88h+uScale]
    vmovss  [rsp+88h+var_38.rotated.vCenter], xmm0
    vmovss  xmm0, [rsp+88h+vScale]
    vmovss  [rsp+88h+var_38.rotated.uScale], xmm1
    vxorps  xmm1, xmm1, xmm1
    vmovss  [rsp+88h+var_40], xmm1
    vmovss  [rsp+88h+var_38.rotated.vScale], xmm0
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+88h+var_38.minMax.uMin], xmm1
    vmovss  [rsp+88h+var_38.minMax.vMin], xmm1
    vmovss  [rsp+88h+var_38.minMax.uMax], xmm0
    vmovss  [rsp+88h+var_38.minMax.vMax], xmm0
  }
  *(_WORD *)(&uv.mode + 1) = 0;
  *((_BYTE *)&uv.mode + 3) = 0;
  uv.mode = ROTATED;
  LUI_Render_CommitQuad(localClientNum, element, luaVM, verts, &uv, color, material, 0, GFX_PIXEL_SHAPE_TYPE_NONE, v18);
}

/*
==============
LUI_Render_DrawImageRotatedUV
==============
*/
void LUI_Render_DrawImageRotatedUV(const LocalClientNum_t localClientNum, LUIElement *element, lua_State *luaVM, const vec4_t (*verts)[4], float uCenter, float vCenter, float uScale, float vScale, float uMin, float vMin, float uMax, float vMax, float uvAngle, const vec4_t *color, const GfxImage *material)
{
  float v25; 
  LUIQuadUV uv; 

  __asm
  {
    vmovss  xmm1, [rsp+88h+uCenter]
    vmovss  xmm0, [rsp+88h+uvAngle]
    vmovss  [rsp+88h+var_38.rotated.uCenter], xmm1
    vmovss  xmm1, [rsp+88h+uScale]
    vmovss  [rsp+88h+var_38.rotated.angle], xmm0
    vmovss  xmm0, [rsp+88h+vCenter]
    vmovss  [rsp+88h+var_38.rotated.uScale], xmm1
    vmovss  xmm1, [rsp+88h+uMin]
    vmovss  [rsp+88h+var_38.rotated.vCenter], xmm0
    vmovss  xmm0, [rsp+88h+vScale]
    vmovss  [rsp+88h+var_38.minMax.uMin], xmm1
    vmovss  xmm1, [rsp+88h+uMax]
    vmovss  [rsp+88h+var_38.rotated.vScale], xmm0
    vmovss  xmm0, [rsp+88h+vMin]
    vmovss  [rsp+88h+var_38.minMax.uMax], xmm1
    vxorps  xmm1, xmm1, xmm1
    vmovss  [rsp+88h+var_40], xmm1
    vmovss  [rsp+88h+var_38.minMax.vMin], xmm0
    vmovss  xmm0, [rsp+88h+vMax]
    vmovss  [rsp+88h+var_38.minMax.vMax], xmm0
  }
  *(_WORD *)(&uv.mode + 1) = 0;
  *((_BYTE *)&uv.mode + 3) = 0;
  uv.mode = ROTATED;
  LUI_Render_CommitQuad(localClientNum, element, luaVM, verts, &uv, color, material, 0, GFX_PIXEL_SHAPE_TYPE_NONE, v25);
}

/*
==============
LUI_Render_DrawImage_PixelShape
==============
*/
void LUI_Render_DrawImage_PixelShape(const LocalClientNum_t localClientNum, LUIElement *element, lua_State *luaVM, const vec4_t (*verts)[4], float uMin, float vMin, float uMax, float vMax, const vec4_t *color, const GfxImage *material, const GfxPixelShapeType pixelShapeType, const float pixelWidth)
{
  float v24; 
  LUIQuadUV uv; 
  vec4_t vertsa[4]; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovss  xmm0, [rsp+0F8h+uMin]
    vmovss  xmm1, [rsp+0F8h+uMax]
  }
  uv.minMax.uMax = 0.0;
  _RCX = vertsa;
  __asm
  {
    vmovss  [rsp+0F8h+var_A8.minMax.uMin], xmm0
    vmovss  xmm0, [rsp+0F8h+vMin]
  }
  uv.minMax.vMax = 0.0;
  __asm
  {
    vmovss  [rsp+0F8h+var_A8.minMax.vMin], xmm0
    vmovups ymm0, ymmword ptr [r9]
    vmovups ymmword ptr [r11-78h], ymm0
    vmovups ymm0, ymmword ptr [r9+20h]
    vmovss  [rsp+0F8h+var_A8.minMax.uMax], xmm1
    vmovss  xmm1, [rsp+0F8h+vMax]
    vmovups ymmword ptr [r11-58h], ymm0
    vmovss  [rsp+0F8h+var_A8.minMax.vMax], xmm1
  }
  memset(&uv.rotated, 0, 24);
  LUI_Render_PuffThinQuad(vertsa);
  __asm
  {
    vmovss  xmm0, [rsp+0F8h+pixelWidth]
    vmovss  [rsp+0F8h+var_B0], xmm0
  }
  LUI_Render_CommitQuad(localClientNum, element, luaVM, (const vec4_t (*)[4])vertsa, &uv, color, material, 0, pixelShapeType, v24);
}

/*
==============
LUI_Render_DrawImage_SDF
==============
*/
void LUI_Render_DrawImage_SDF(const LocalClientNum_t localClientNum, LUIElement *element, lua_State *luaVM, const vec4_t (*verts)[4], float uMin, float vMin, float uMax, float vMax, const vec4_t *color, const GfxImage *material)
{
  float v22; 
  LUIQuadUV uv; 
  vec4_t vertsa[4]; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovss  xmm0, [rsp+0F8h+uMin]
    vmovss  xmm1, [rsp+0F8h+uMax]
  }
  uv.minMax.uMax = 0.0;
  _RCX = vertsa;
  __asm
  {
    vmovss  [rsp+0F8h+var_A8.minMax.uMin], xmm0
    vmovss  xmm0, [rsp+0F8h+vMin]
  }
  uv.minMax.vMax = 0.0;
  __asm
  {
    vmovss  [rsp+0F8h+var_A8.minMax.vMin], xmm0
    vmovups ymm0, ymmword ptr [r9]
    vmovups ymmword ptr [r11-78h], ymm0
    vmovups ymm0, ymmword ptr [r9+20h]
    vmovss  [rsp+0F8h+var_A8.minMax.uMax], xmm1
    vmovss  xmm1, [rsp+0F8h+vMax]
    vmovups ymmword ptr [r11-58h], ymm0
    vmovss  [rsp+0F8h+var_A8.minMax.vMax], xmm1
  }
  memset(&uv.rotated, 0, 24);
  LUI_Render_PuffThinQuad(vertsa);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+0F8h+var_B0], xmm0
  }
  LUI_Render_CommitQuad(localClientNum, element, luaVM, (const vec4_t (*)[4])vertsa, &uv, color, material, 1, GFX_PIXEL_SHAPE_TYPE_NONE, v22);
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
  int v6; 
  const FontGlowStyle *fontGlowStyle; 
  const FontDecodeStyle *fontDecodeStyle; 
  float tracking; 
  float v20; 
  float v21; 
  float color; 
  float iconsMaterial; 
  int flags; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 

  _RBX = quadCache;
  has3DTransforms = (quadCache->flags & 2) != 0;
  if ( (quadCache->flags & 0x20) != 0 )
    LUI_Workers_SuspendRender();
  if ( _RBX->type[0] )
  {
    if ( _RBX->type[0] == 1 )
    {
      if ( _RBX->text.textRef == -2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1403, ASSERT_TYPE_ASSERT, "(quadCache->text.textRef != (-2))", (const char *)&queryFormat, "quadCache->text.textRef != LUA_NOREF") )
        __debugbreak();
      j_lua_rawgeti(luaVM, -10000, _RBX->text.textRef);
      if ( !j_lua_isstring(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1405, ASSERT_TYPE_ASSERT, "(lua_isstring( luaVM, -1 ))", (const char *)&queryFormat, "lua_isstring( luaVM, -1 )") )
        __debugbreak();
      v5 = j_lua_tolstring(luaVM, -1, NULL);
      v6 = _RBX->flags;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+64h]
        vmovss  xmm1, dword ptr [rbx+60h]
      }
      fontGlowStyle = &_RBX->text.glowStyle;
      __asm
      {
        vmovss  [rsp+0A8h+var_28], xmm0
        vmovss  xmm0, dword ptr [rbx+5Ch]
        vmovss  [rsp+0A8h+var_30], xmm1
        vmovss  xmm1, dword ptr [rbx+58h]
        vmovss  [rsp+0A8h+var_38], xmm0
        vmovss  xmm0, dword ptr [rbx+80h]
        vmovss  [rsp+0A8h+flags], xmm1
      }
      fontDecodeStyle = &_RBX->text.decodeStyle;
      if ( (v6 & 8) == 0 )
        fontGlowStyle = NULL;
      if ( (v6 & 4) == 0 )
        fontDecodeStyle = NULL;
      __asm { vmovss  [rsp+0A8h+var_78], xmm0 }
      LUI_Render_SendTextRenderCommand(v5, 0x7FFFFFFF, _RBX->text.font, _RBX->text.fontSize, (const vec4_t (*)[4])_RBX, _RBX->text.tracking, v20, &_RBX->color, _RBX->text.fontMaterial, _RBX->text.iconsMaterial, v6 & 1, fontDecodeStyle, fontGlowStyle, *(float *)&flags, v25, v27, v28, &_RBX->colorOp, has3DTransforms);
      j_lua_settop(luaVM, -2);
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+68h]
      vmovss  xmm1, dword ptr [rbx+5Ch]
      vmovss  [rsp+0A8h+var_38], xmm0
      vmovss  xmm0, dword ptr [rbx+64h]
      vmovss  dword ptr [rsp+0A8h+iconsMaterial], xmm0
      vmovss  xmm0, dword ptr [rbx+60h]
      vmovss  dword ptr [rsp+0A8h+color], xmm0
      vmovss  xmm0, dword ptr [rbx+58h]
      vmovss  [rsp+0A8h+var_78], xmm1
      vmovss  dword ptr [rsp+0A8h+tracking], xmm0
    }
    LUI_Render_SendQuadRenderCommand((const vec4_t (*)[4])_RBX, &_RBX->image.uv, &_RBX->color, _RBX->image.texture, _RBX->image.material, tracking, v21, color, _RBX->image.samplerState, iconsMaterial, &_RBX->colorOp, has3DTransforms, _RBX->scopeIndex, _RBX->flags, v26);
  }
}

/*
==============
LUI_Render_DrawQuadRotated
==============
*/

void __fastcall LUI_Render_DrawQuadRotated(const LocalClientNum_t localClientNum, LUIElement *element, double centerX, double centerY, float width, float height, float uMin, float vMin, float uMax, float vMax, float angle, float red, float green, float blue, float alpha, const GfxImage *material, lua_State *luaVM)
{
  bool v23; 
  DrawListMode v36; 
  unsigned int v38; 
  const float *v39; 
  Material *v56; 
  bool has3DTransforms; 
  unsigned __int16 samplerState; 
  const LUIColorOpData *colorOp; 
  int scopeIndex; 
  float v75; 
  float v76; 
  float v77; 
  float v78; 
  float c; 
  float s; 
  lua_State *v81; 
  vec4_t color; 
  LUIQuadUV uv; 
  vec4_t point[2]; 
  vec4_t verts[2]; 
  char v88; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
  }
  v23 = !element->quadCached;
  __asm
  {
    vmovss  xmm0, [rbp+0E0h+red]
    vmovss  xmm1, [rbp+0E0h+green]
    vmovss  dword ptr [rbp+0E0h+color], xmm0
    vmovss  xmm0, [rbp+0E0h+blue]
    vmovss  dword ptr [rbp+0E0h+color+4], xmm1
    vmovss  xmm1, [rbp+0E0h+alpha]
    vmovss  dword ptr [rbp+0E0h+color+8], xmm0
    vmovss  dword ptr [rbp+0E0h+color+0Ch], xmm1
    vmovaps xmm9, xmm3
    vmovaps xmm10, xmm2
  }
  v81 = luaVM;
  if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1438, ASSERT_TYPE_ASSERT, "(!element->quadCached)", (const char *)&queryFormat, "!element->quadCached") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, [rbp+0E0h+angle]
    vmulss  xmm0, xmm0, cs:__real@3c8efa35; radians
  }
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm
  {
    vmovss  xmm7, [rbp+0E0h+height]
    vmovss  xmm8, [rbp+0E0h+width]
  }
  v36 = DrawListMode_Default;
  _RBX = &point[0].v[1];
  v38 = 0;
  v39 = &QUAD_BUILD[1];
  do
  {
    __asm
    {
      vmulss  xmm5, xmm8, dword ptr [rsi-4]
      vmulss  xmm6, xmm7, dword ptr [rsi]
      vmulss  xmm1, xmm5, [rbp+0E0h+c]
      vmulss  xmm0, xmm6, [rbp+0E0h+s]
      vmulss  xmm3, xmm5, [rbp+0E0h+s]
      vsubss  xmm1, xmm1, xmm0
      vmulss  xmm0, xmm6, [rbp+0E0h+c]
      vaddss  xmm2, xmm1, xmm10
      vmovss  dword ptr [rbx-4], xmm2
      vaddss  xmm1, xmm3, xmm0
      vaddss  xmm2, xmm1, xmm9
      vmovss  dword ptr [rbx], xmm2
    }
    _RBX[1] = 0.0;
    _RBX[2] = 1.0;
    LUI_ApplyTransformsToPoint(&point[v38++]);
    _RBX += 4;
    v39 += 2;
  }
  while ( v38 < 4 );
  __asm
  {
    vmovss  xmm0, [rbp+0E0h+uMin]
    vmovss  xmm1, [rbp+0E0h+uMax]
    vmovss  [rbp+0E0h+uv.minMax.uMin], xmm0
    vmovss  xmm0, [rbp+0E0h+vMin]
    vmovss  [rbp+0E0h+uv.minMax.vMin], xmm0
    vmovups ymm0, ymmword ptr [rbp+0E0h+point]
    vmovups ymmword ptr [rbp+0E0h+verts], ymm0
    vmovups ymm0, [rbp+0E0h+var_F0]
    vmovss  [rbp+0E0h+uv.minMax.uMax], xmm1
    vmovss  xmm1, [rbp+0E0h+vMax]
    vmovups [rbp+0E0h+var_B0], ymm0
    vmovss  [rbp+0E0h+uv.minMax.vMax], xmm1
  }
  memset(&uv.rotated, 0, 24);
  LUI_Render_PuffThinQuad(verts);
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1235, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  v56 = LUI_Render_GetMaterial(LUI_COLOR_SOURCE_IMAGE, (element->usageFlags & 0x200000) == 0);
  *(double *)&_XMM0 = LUI_Render_GetCurrentParallaxAmount();
  __asm { vmovaps xmm9, xmm0 }
  has3DTransforms = LUI_Is3DTransformEnabled();
  samplerState = LUI_Render_ChooseSamplerState(&uv, element);
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 597, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  _RDX = 0x140000000ui64;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( s_numGlitchSettingsActive )
  {
    _RCX = s_numGlitchSettingsActive - 1;
    __asm { vmovss  xmm8, rva s_glitchSettingsStack[rdx+rcx*4] }
  }
  else
  {
    __asm { vxorps  xmm8, xmm8, xmm8 }
  }
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 731, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  if ( s_numBlurSettingsActive )
  {
    _RCX = s_numBlurSettingsActive - 1;
    _RAX = 0x140000000ui64;
    __asm { vmovss  xmm7, rva s_blurSettingsStack[rax+rcx*4] }
  }
  else
  {
    __asm { vxorps  xmm7, xmm7, xmm7 }
  }
  colorOp = LUI_Render_GetColorOp();
  if ( s_numScopeIndexSettingsActive )
    scopeIndex = s_scopeIndexSettingsStack[s_numScopeIndexSettingsActive - 1];
  else
    scopeIndex = s_numScopeIndexSettingsActive - 1;
  if ( s_drawListModeDepth )
    v36 = s_drawListMode[s_drawListModeDepth - 1];
  __asm
  {
    vmovss  [rsp+1F0h+var_168], xmm6
    vmovss  dword ptr [rsp+1F0h+var_198], xmm9
    vmovss  dword ptr [rsp+1F0h+var_1A8], xmm7
    vmovss  [rsp+1F0h+var_1B0], xmm8
  }
  LUI_QuadCache_Element_CacheImageQuad(v81, localClientNum, element, verts, &color, &uv, material, v56, v75, v76, samplerState, v77, colorOp, has3DTransforms, scopeIndex, v36 == DrawListMode_ReceivePostFXLite, LUI_COLOR_SOURCE_IMAGE, v78);
  _R11 = &v88;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
LUI_Render_DrawQuadRotatedRelativeToPoint
==============
*/

void __fastcall LUI_Render_DrawQuadRotatedRelativeToPoint(const LocalClientNum_t localClientNum, LUIElement *element, double rotationCenterX, double rotationCenterY, float quadCenterX, float quadCenterY, float width, float height, float uMin, float vMin, float uMax, float vMax, float angle, float red, float green, float blue, float alpha, const GfxImage *material, lua_State *luaVM)
{
  bool v27; 
  DrawListMode v42; 
  unsigned int v46; 
  const float *v47; 
  Material *v66; 
  bool has3DTransforms; 
  unsigned __int16 samplerState; 
  const LUIColorOpData *colorOp; 
  int scopeIndex; 
  float v87; 
  float v88; 
  float v89; 
  float v90; 
  float c; 
  float s; 
  lua_State *v93; 
  vec4_t color; 
  LUIQuadUV uv; 
  vec4_t point[2]; 
  vec4_t verts[2]; 
  char v100; 
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
  }
  v27 = !element->quadCached;
  __asm
  {
    vmovss  xmm0, [rbp+100h+red]
    vmovss  xmm1, [rbp+100h+green]
    vmovss  dword ptr [rbp+100h+color], xmm0
    vmovss  xmm0, [rbp+100h+blue]
    vmovss  dword ptr [rbp+100h+color+4], xmm1
    vmovss  xmm1, [rbp+100h+alpha]
    vmovss  dword ptr [rbp+100h+color+8], xmm0
    vmovss  dword ptr [rbp+100h+color+0Ch], xmm1
    vmovaps xmm7, xmm3
    vmovaps xmm8, xmm2
  }
  v93 = luaVM;
  if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1478, ASSERT_TYPE_ASSERT, "(!element->quadCached)", (const char *)&queryFormat, "!element->quadCached") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, [rbp+100h+angle]
    vmulss  xmm0, xmm0, cs:__real@3c8efa35; radians
  }
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm
  {
    vmovss  xmm0, [rbp+100h+quadCenterX]
    vmovss  xmm1, [rbp+100h+quadCenterY]
    vmovss  xmm11, [rbp+100h+height]
    vmovss  xmm12, [rbp+100h+width]
  }
  v42 = DrawListMode_Default;
  _RBX = &point[0].v[1];
  __asm
  {
    vsubss  xmm9, xmm0, xmm8
    vsubss  xmm10, xmm1, xmm7
  }
  v46 = 0;
  v47 = &QUAD_BUILD_0[1];
  do
  {
    __asm
    {
      vmulss  xmm0, xmm12, dword ptr [rsi-4]
      vmulss  xmm1, xmm11, dword ptr [rsi]
      vaddss  xmm6, xmm0, xmm9
      vmulss  xmm2, xmm6, [rbp+100h+c]
      vmulss  xmm3, xmm6, [rbp+100h+s]
      vaddss  xmm5, xmm1, xmm10
      vmulss  xmm0, xmm5, [rbp+100h+s]
      vsubss  xmm1, xmm2, xmm0
      vmulss  xmm0, xmm5, [rbp+100h+c]
      vaddss  xmm2, xmm1, xmm8
      vmovss  dword ptr [rbx-4], xmm2
      vaddss  xmm1, xmm3, xmm0
      vaddss  xmm2, xmm1, xmm7
      vmovss  dword ptr [rbx], xmm2
    }
    _RBX[1] = 0.0;
    _RBX[2] = 1.0;
    LUI_ApplyTransformsToPoint(&point[v46++]);
    _RBX += 4;
    v47 += 2;
  }
  while ( v46 < 4 );
  __asm
  {
    vmovss  xmm0, [rbp+100h+uMin]
    vmovss  xmm1, [rbp+100h+uMax]
    vmovss  [rbp+100h+uv.minMax.uMin], xmm0
    vmovss  xmm0, [rbp+100h+vMin]
    vmovss  [rbp+100h+uv.minMax.vMin], xmm0
    vmovups ymm0, ymmword ptr [rbp+100h+point]
    vmovups ymmword ptr [rbp+100h+verts], ymm0
    vmovups ymm0, [rbp+100h+var_110]
    vmovss  [rbp+100h+uv.minMax.uMax], xmm1
    vmovss  xmm1, [rbp+100h+vMax]
    vmovups [rbp+100h+var_D0], ymm0
    vmovss  [rbp+100h+uv.minMax.vMax], xmm1
  }
  memset(&uv.rotated, 0, 24);
  LUI_Render_PuffThinQuad(verts);
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1235, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  v66 = LUI_Render_GetMaterial(LUI_COLOR_SOURCE_IMAGE, (element->usageFlags & 0x200000) == 0);
  *(double *)&_XMM0 = LUI_Render_GetCurrentParallaxAmount();
  __asm { vmovaps xmm9, xmm0 }
  has3DTransforms = LUI_Is3DTransformEnabled();
  samplerState = LUI_Render_ChooseSamplerState(&uv, element);
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 597, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  _RDX = 0x140000000ui64;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( s_numGlitchSettingsActive )
  {
    _RCX = s_numGlitchSettingsActive - 1;
    __asm { vmovss  xmm8, rva s_glitchSettingsStack[rdx+rcx*4] }
  }
  else
  {
    __asm { vxorps  xmm8, xmm8, xmm8 }
  }
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 731, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  if ( s_numBlurSettingsActive )
  {
    _RCX = s_numBlurSettingsActive - 1;
    _RAX = 0x140000000ui64;
    __asm { vmovss  xmm7, rva s_blurSettingsStack[rax+rcx*4] }
  }
  else
  {
    __asm { vxorps  xmm7, xmm7, xmm7 }
  }
  colorOp = LUI_Render_GetColorOp();
  if ( s_numScopeIndexSettingsActive )
    scopeIndex = s_scopeIndexSettingsStack[s_numScopeIndexSettingsActive - 1];
  else
    scopeIndex = s_numScopeIndexSettingsActive - 1;
  if ( s_drawListModeDepth )
    v42 = s_drawListMode[s_drawListModeDepth - 1];
  __asm
  {
    vmovss  [rsp+210h+var_188], xmm6
    vmovss  dword ptr [rsp+210h+var_1B8], xmm9
    vmovss  dword ptr [rsp+210h+var_1C8], xmm7
    vmovss  [rsp+210h+var_1D0], xmm8
  }
  LUI_QuadCache_Element_CacheImageQuad(v93, localClientNum, element, verts, &color, &uv, material, v66, v87, v88, samplerState, v89, colorOp, has3DTransforms, scopeIndex, v42 == DrawListMode_ReceivePostFXLite, LUI_COLOR_SOURCE_IMAGE, v90);
  _R11 = &v100;
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
}

/*
==============
LUI_Render_DrawText
==============
*/
void LUI_Render_DrawText(const LocalClientNum_t localClientNum, lua_State *luaVM, LUIElement *element, const vec4_t (*verts)[4], const vec4_t *color, GfxFont *font, const char *text, int style, char tracking, float rotation, int fontSize, FontDecodeStyle *fontDecodeStyle, FontGlowStyle *fontGlowStyle)
{
  bool tintIcons; 
  LUIColorSource v28; 
  Material *fontMaterial; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  LUIColorOpData *colorOp; 
  Material *iconsMaterial; 
  char v41; 
  void *retaddr; 
  bool has3DTransforms; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1187, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  *(double *)&_XMM0 = LUI_Render_GetCurrentParallaxAmount();
  __asm { vmovaps xmm6, xmm0 }
  has3DTransforms = LUI_Is3DTransformEnabled();
  iconsMaterial = LUI_Render_GetMaterial(LUI_COLOR_SOURCE_IMAGE, 1);
  *(float *)&_XMM0 = LUI_Render_GetGlitchAmount();
  __asm { vmovaps xmm7, xmm0 }
  *(float *)&_XMM0 = LUI_Render_GetBlurAmount();
  tintIcons = (element->usageFlags & 0x200) != 0;
  __asm { vmovaps xmm8, xmm0 }
  _RBX = fontGlowStyle;
  colorOp = (LUIColorOpData *)LUI_Render_GetColorOp();
  if ( fontGlowStyle )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rbx]
      vucomiss xmm1, dword ptr [rbx+4]
    }
  }
  else
  {
    _RBX = NULL;
  }
  v28 = LUI_COLOR_SOURCE_FONTCACHE;
  if ( _RBX )
  {
    v28 = LUI_COLOR_SOURCE_FONTCACHE_SDF_GLOW;
  }
  else if ( LUI_Is3DTransformEnabled() || FontCache_DoesGlyphUseDistanceField(fontSize) )
  {
    v28 = LUI_COLOR_SOURCE_FONTCACHE_SDF;
  }
  fontMaterial = LUI_Render_GetMaterial(v28, 1);
  __asm
  {
    vmovss  xmm0, [rsp+108h+rotation]
    vmovss  [rsp+108h+var_80], xmm6
    vmovss  [rsp+108h+var_88], xmm8
    vmovss  [rsp+108h+var_90], xmm7
    vmovss  [rsp+108h+var_C8], xmm0
  }
  LUI_QuadCache_Element_CacheTextQuad(luaVM, localClientNum, element, (const vec4_t *)verts, color, font, text, tracking, v35, fontSize, fontMaterial, iconsMaterial, tintIcons, fontDecodeStyle, _RBX, v36, v37, v38, colorOp, has3DTransforms);
  _R11 = &v41;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
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

float __fastcall LUI_Render_GetBlurAmount(double _XMM0_8)
{
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 731, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  if ( s_numBlurSettingsActive )
  {
    _RCX = s_numBlurSettingsActive - 1;
    _RAX = s_blurSettingsStack;
    __asm { vmovss  xmm0, dword ptr [rax+rcx*4] }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  return *(float *)&_XMM0;
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
  __int64 v4; 
  int v5; 

  if ( LUI_IsInExecDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 393, ASSERT_TYPE_ASSERT, "(!LUI_IsInExecDrawList())", (const char *)&queryFormat, "!LUI_IsInExecDrawList()") )
    __debugbreak();
  LOBYTE(_RAX) = s_currentParallax;
  if ( s_currentParallax >= 8u )
  {
    v5 = 8;
    LODWORD(v4) = s_currentParallax;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 394, ASSERT_TYPE_ASSERT, "(unsigned)( s_currentParallax ) < (unsigned)( 8 )", "s_currentParallax doesn't index LUI_MAX_PARALLAX\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
    LOBYTE(_RAX) = s_currentParallax;
  }
  _RAX = (unsigned __int8)_RAX;
  _RCX = s_parallaxAmount;
  __asm { vmovss  xmm0, dword ptr [rcx+rax*4] }
  return *(float *)&_XMM0;
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

float __fastcall LUI_Render_GetCurrentUnitScale(double _XMM0_8)
{
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 487, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  if ( s_numUnitScaleActive <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 488, ASSERT_TYPE_ASSERT, "(s_numUnitScaleActive > 0)", (const char *)&queryFormat, "s_numUnitScaleActive > 0") )
    __debugbreak();
  _RDX = s_numUnitScaleActive - 1;
  _RAX = s_unitScaleStack;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm6, dword ptr [rax+rdx*4]
    vcomiss xmm6, xmm0
  }
  if ( s_numUnitScaleActive == 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 490, ASSERT_TYPE_ASSERT, "(unitScale > 0)", (const char *)&queryFormat, "unitScale > 0") )
    __debugbreak();
  __asm
  {
    vmovaps xmm0, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
LUI_Render_GetGlitchAmount
==============
*/

float __fastcall LUI_Render_GetGlitchAmount(double _XMM0_8)
{
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 597, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  if ( s_numGlitchSettingsActive )
  {
    _RCX = s_numGlitchSettingsActive - 1;
    _RAX = s_glitchSettingsStack;
    __asm { vmovss  xmm0, dword ptr [rax+rcx*4] }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  return *(float *)&_XMM0;
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
  bool v9; 
  int widthOut; 
  int heightOut; 

  _RBX = outSize;
  if ( s_rttDepth )
  {
    R_RTT_GetSize(localClientNum, s_rttStack[s_rttDepth - 1], &widthOut, &heightOut);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, [rsp+38h+widthOut]
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, [rsp+38h+heightOut]
      vmovss  dword ptr [rbx], xmm0
      vmovss  dword ptr [rbx+4], xmm1
    }
    return;
  }
  if ( activeScreenPlacementMode )
  {
    if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
    {
      _RCX = &scrPlaceViewDisplay[localClientNum].realViewportSize;
      goto LABEL_10;
    }
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v9 )
      __debugbreak();
  }
  _RCX = &scrPlaceFull.realViewportSize;
LABEL_10:
  _RBX->v[0] = _RCX->v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vmovss  dword ptr [rbx+4], xmm0
  }
}

/*
==============
LUI_Render_ImageFill
==============
*/

void __fastcall LUI_Render_ImageFill(const LocalClientNum_t localClientNum, LUIElement *element, double red, double green, float blue, float alpha, const GfxImage *material, lua_State *luaVM)
{
  bool v8; 
  float v21; 
  vec4_t color; 
  LUIQuadUV uv; 
  vec4_t verts[8]; 

  v8 = !element->quadCached;
  __asm
  {
    vmovss  xmm0, [rbp+50h+blue]
    vmovss  xmm1, [rbp+50h+alpha]
  }
  _RBX = element;
  __asm
  {
    vmovss  dword ptr [rsp+150h+var_100+8], xmm0
    vmovss  dword ptr [rsp+150h+var_100+0Ch], xmm1
    vmovss  dword ptr [rsp+150h+var_100], xmm2
    vmovss  dword ptr [rsp+150h+var_100+4], xmm3
  }
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1522, ASSERT_TYPE_ASSERT, "(!element->quadCached)", (const char *)&queryFormat, "!element->quadCached") )
    __debugbreak();
  __asm
  {
    vmovss  xmm3, dword ptr [rbx+0D8h]; bottom
    vmovss  xmm2, dword ptr [rbx+0D4h]; right
    vmovss  xmm1, dword ptr [rbx+0D0h]; top
    vmovss  xmm0, dword ptr [rbx+0CCh]; left
  }
  LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])&verts[4]);
  if ( !LUIElement_IsImageLike(_RBX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1527, ASSERT_TYPE_ASSERT, "(LUIElement_IsImageLike( element ))", (const char *)&queryFormat, "LUIElement_IsImageLike( element )") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx+118h]
    vmovups xmmword ptr [rsp+150h+uv.minMax.uMin], xmm0
    vmovups ymm0, ymmword ptr [rbp+50h+quadVerts]
    vmovups ymmword ptr [rbp+50h+verts], ymm0
    vmovups ymm0, ymmword ptr [rbp+50h+quadVerts+20h]
    vmovups [rbp+50h+var_A0], ymm0
  }
  memset(&uv.rotated, 0, 24);
  LUI_Render_PuffThinQuad(verts);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+150h+var_108], xmm0
  }
  LUI_Render_CommitQuad(localClientNum, _RBX, luaVM, (const vec4_t (*)[4])verts, &uv, &color, material, 0, GFX_PIXEL_SHAPE_TYPE_NONE, v21);
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
  const dvar_t *v4; 
  char v12; 
  bool v13; 
  char v14; 
  bool v15; 
  bool v20; 
  char v25; 

  v4 = DCONST_DVARBOOL_lui_forcelinedraws;
  _RBX = verts;
  if ( !DCONST_DVARBOOL_lui_forcelinedraws && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_forcelinedraws") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    __asm
    {
      vmovaps [rsp+78h+var_18], xmm6
      vmovaps [rsp+78h+var_28], xmm7
    }
    _RAX = LUI_GetCurrentMenuTransform();
    __asm
    {
      vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovsd  xmm7, cs:__real@3eb0c6f7a0b5ed8d
      vmovss  xmm0, dword ptr [rax+10h]
      vandps  xmm0, xmm0, xmm6
      vcvtss2sd xmm0, xmm0, xmm0
      vcomisd xmm0, xmm7
    }
    v13 = !(v14 | v12);
    v15 = LUI_Is3DTransformEnabled();
    __asm
    {
      vmovss  xmm5, dword ptr [rbx+4]
      vsubss  xmm0, xmm5, dword ptr [rbx+14h]
      vandps  xmm0, xmm0, xmm6
      vcvtss2sd xmm0, xmm0, xmm0
      vcomisd xmm0, xmm7
    }
    v20 = v15;
    if ( !v14 )
      goto LABEL_8;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vsubss  xmm1, xmm0, dword ptr [rbx+30h]
      vandps  xmm1, xmm1, xmm6
      vcvtss2sd xmm1, xmm1, xmm1
      vcomisd xmm1, xmm7
    }
    if ( v14 )
      v25 = 1;
    else
LABEL_8:
      v25 = 0;
    if ( !v13 && !v20 )
    {
      if ( v25 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+34h]
          vmovss  xmm4, cs:__real@3f800000
          vmovss  xmm7, cs:__real@3f000000
          vsubss  xmm3, xmm0, xmm5
          vandps  xmm1, xmm3, xmm6
          vcomiss xmm1, xmm4
          vmovaps [rsp+78h+var_38], xmm8
          vxorps  xmm8, xmm8, xmm8
          vmovss  xmm5, dword ptr [rbx]
          vmovss  xmm0, dword ptr [rbx+10h]
          vsubss  xmm3, xmm0, xmm5
          vandps  xmm1, xmm3, xmm6
          vcomiss xmm1, xmm4
          vmovaps xmm8, [rsp+78h+var_38]
        }
      }
    }
    __asm
    {
      vmovaps xmm6, [rsp+78h+var_18]
      vmovaps xmm7, [rsp+78h+var_28]
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

void __fastcall LUI_Render_PushBlur(double amount)
{
  int v3; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm0
  }
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 714, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  v3 = s_numBlurSettingsActive;
  if ( s_numBlurSettingsActive >= 1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 715, ASSERT_TYPE_ASSERT, "(s_numBlurSettingsActive < 1)", (const char *)&queryFormat, "s_numBlurSettingsActive < LUI_MAX_NESTED_BLUR") )
      __debugbreak();
    v3 = s_numBlurSettingsActive;
  }
  _RAX = v3;
  _RCX = s_blurSettingsStack;
  s_numBlurSettingsActive = v3 + 1;
  __asm
  {
    vmovss  dword ptr [rcx+rax*4], xmm6
    vmovaps xmm6, [rsp+48h+var_18]
  }
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

void __fastcall LUI_Render_PushGlitch(double glitchAmount)
{
  int v3; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm0
  }
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 580, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  v3 = s_numGlitchSettingsActive;
  if ( s_numGlitchSettingsActive >= 4 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 581, ASSERT_TYPE_ASSERT, "(s_numGlitchSettingsActive < 4)", (const char *)&queryFormat, "s_numGlitchSettingsActive < LUI_MAX_NESTED_GLITCH") )
      __debugbreak();
    v3 = s_numGlitchSettingsActive;
  }
  _RAX = v3;
  _RCX = s_glitchSettingsStack;
  s_numGlitchSettingsActive = v3 + 1;
  __asm
  {
    vmovss  dword ptr [rcx+rax*4], xmm6
    vmovaps xmm6, [rsp+48h+var_18]
  }
}

/*
==============
LUI_Render_PushMask
==============
*/

void __fastcall LUI_Render_PushMask(const LocalClientNum_t localClientNum, double maskCenterX, double maskCenterY, double maskWidth, float maskHeight, float maskRotation, float alphaScale, float alphaOffset, bool applyParallax, float maskUMin, float maskVMin, float maskUMax, float maskVMax, const vec2_t *viewportSize, GfxImage *image)
{
  vec2_t v28; 
  unsigned int v29; 
  char v40; 
  char v41; 
  int data; 
  vec4_t vec; 
  vec2_t v61; 
  GfxImage *v62; 
  vec4_t result; 
  tmat44_t<vec4_t> outMatrix; 
  __int64 v65; 
  char v66; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBP = &v65;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
    vmovaps xmm8, xmm1
  }
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 294, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, [rbp+20h+maskRotation]
    vmovss  xmm1, [rbp+20h+alphaScale]
    vmovss  xmm3, [rbp+20h+maskHeight]
    vmulss  xmm2, xmm3, cs:__real@3f000000
  }
  v28 = *viewportSize;
  v29 = s_RenderMaskPushCount;
  __asm
  {
    vmovss  [rsp+120h+var_D4], xmm0
    vmovss  xmm0, [rbp+20h+alphaOffset]
    vmovss  [rsp+120h+var_CC], xmm0
    vmovss  xmm0, [rbp+20h+maskVMin]
    vmovss  [rsp+120h+var_C4], xmm0
    vmovss  xmm0, [rbp+20h+maskVMax]
    vmovss  [rsp+120h+var_D0], xmm1
    vmovss  xmm1, [rbp+20h+maskUMin]
    vmovss  dword ptr [rsp+120h+var_C0+4], xmm0
    vmulss  xmm0, xmm6, cs:__real@3f000000
    vmovss  [rsp+120h+var_C8], xmm1
    vmovss  xmm1, [rbp+20h+maskUMax]
    vmovss  dword ptr [rsp+120h+var_C0], xmm1
    vsubss  xmm1, xmm8, xmm0
    vsubss  xmm0, xmm7, xmm2
    vmovss  dword ptr [rsp+120h+vec+4], xmm0
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+120h+var_DC], xmm6
    vxorps  xmm6, xmm6, xmm6
    vmovss  dword ptr [rsp+120h+vec+0Ch], xmm0
    vmovss  [rsp+120h+var_D8], xmm3
    vmovss  dword ptr [rsp+120h+vec], xmm1
    vmovss  dword ptr [rsp+120h+vec+8], xmm6
  }
  data = s_RenderMaskPushCount;
  v61 = v28;
  v62 = image;
  if ( applyParallax )
  {
    *(double *)&_XMM0 = LUI_Render_GetCurrentParallaxAmount();
    __asm { vcomiss xmm0, xmm6 }
    if ( v40 | v41 )
    {
      __asm
      {
        vmovss  xmm3, dword ptr [rsp+120h+vec]
        vmovss  xmm2, dword ptr [rsp+120h+vec+4]
        vmovss  xmm1, dword ptr [rsp+120h+vec+8]
        vmovss  xmm0, dword ptr [rsp+120h+vec+0Ch]
      }
    }
    else
    {
      LUI_GetCurrentParallaxMatrix(*(float *)&_XMM0, &outMatrix);
      LUI_Matrix_MultiplyVector(&outMatrix, &vec, &result);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+20h+result+0Ch]
        vmovss  xmm1, dword ptr [rbp+20h+result+8]
        vmovss  xmm2, dword ptr [rbp+20h+result+4]
        vmovss  xmm3, dword ptr [rbp+20h+result]
      }
    }
    v29 = s_RenderMaskPushCount;
    __asm
    {
      vmovss  dword ptr [rsp+120h+vec], xmm3
      vmovss  dword ptr [rsp+120h+vec+4], xmm2
      vmovss  dword ptr [rsp+120h+vec+8], xmm1
      vmovss  dword ptr [rsp+120h+vec+0Ch], xmm0
    }
  }
  if ( v29 <= 1 )
  {
    LUI_QuadCache_AddDrawListCommandInternal(localClientNum, (void (__fastcall *)(const void *))LUI_RenderImmediate_SetMask, &data, 0x48ui64, 8ui64);
    ++s_RenderMaskPushCount;
  }
  _R11 = &v66;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
LUI_Render_PushParallaxEnabled
==============
*/

void __fastcall LUI_Render_PushParallaxEnabled(unsigned __int8 value, __int64 a2, double _XMM2_8)
{
  unsigned __int8 v4; 

  if ( LUI_IsInExecDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 363, ASSERT_TYPE_ASSERT, "(!LUI_IsInExecDrawList())", (const char *)&queryFormat, "!LUI_IsInExecDrawList()") )
    __debugbreak();
  v4 = s_currentParallax + 1;
  s_currentParallax = v4;
  if ( v4 >= 8u )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 365, ASSERT_TYPE_ASSERT, "(s_currentParallax < 8)", (const char *)&queryFormat, "s_currentParallax < LUI_MAX_PARALLAX") )
      __debugbreak();
    v4 = s_currentParallax;
  }
  _RCX = s_parallaxAmount;
  __asm { vxorps  xmm2, xmm2, xmm2 }
  if ( v4 )
  {
    _RAX = v4;
    __asm { vmovss  xmm2, dword ptr [rcx+rax*4-4] }
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, cs:__real@3da0a0a1
  }
  _RAX = v4;
  __asm
  {
    vaddss  xmm2, xmm1, xmm2
    vmovss  dword ptr [rcx+rax*4], xmm2
  }
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

void __fastcall LUI_Render_PushStencilRectangle(const LocalClientNum_t localClientNum, double left, double top, double right, float bottom)
{
  int v14; 
  char v19; 
  char v20; 
  vec4_t vec_8; 
  vec4_t point_8; 
  vec4_t result; 
  tmat44_t<vec4_t> outMatrix; 
  char v52; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmm8, xmm3
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm1
  }
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1599, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  if ( s_currStencilRect < 0 )
    _RDI = NULL;
  else
    _RDI = &s_stencilRects[s_currStencilRect];
  v14 = s_currStencilRect + 1;
  s_currStencilRect = v14;
  if ( v14 >= 5 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1606, ASSERT_TYPE_ASSERT, "(s_currStencilRect < 5)", (const char *)&queryFormat, "s_currStencilRect < MAX_STENCIL_RECT_DEPTH") )
      __debugbreak();
    v14 = s_currStencilRect;
  }
  if ( (unsigned int)v14 <= 4 )
  {
    __asm
    {
      vmovss  xmm1, cs:__real@3f800000
      vmovss  xmm0, [rbp+4Fh+bottom]
      vmovss  dword ptr [rsp+110h+point+8], xmm6
      vxorps  xmm6, xmm6, xmm6
    }
    _RBX = &s_stencilRects[v14];
    __asm
    {
      vmovss  dword ptr [rbp+4Fh+point+0Ch], xmm7
      vmovss  [rbp+4Fh+var_C8], xmm6
      vmovss  [rbp+4Fh+var_C4], xmm1
      vmovss  dword ptr [rsp+110h+vec+8], xmm8
      vmovss  dword ptr [rsp+110h+vec+0Ch], xmm0
      vmovss  dword ptr [rsp+110h+point], xmm6
      vmovss  dword ptr [rsp+110h+point+4], xmm1
    }
    LUI_ApplyTransformsToPoint(&point_8);
    LUI_ApplyTransformsToPoint(&vec_8);
    *(double *)&_XMM0 = LUI_Render_GetCurrentParallaxAmount();
    __asm { vcomiss xmm0, xmm6 }
    if ( !(v19 | v20) )
    {
      LUI_GetCurrentParallaxMatrix(*(float *)&_XMM0, &outMatrix);
      LUI_Matrix_MultiplyVector(&outMatrix, &point_8, &result);
      __asm
      {
        vmovups xmm0, xmmword ptr [rbp+4Fh+result]
        vmovdqa xmmword ptr [rsp+110h+point+8], xmm0
      }
      LUI_Matrix_MultiplyVector(&outMatrix, &vec_8, &result);
      __asm
      {
        vmovups xmm0, xmmword ptr [rbp+4Fh+result]
        vmovdqa xmmword ptr [rsp+110h+vec+8], xmm0
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+110h+point+8]
      vmovss  xmm1, dword ptr [rbp+4Fh+point+0Ch]
      vmaxss  xmm3, xmm0, xmm6
      vmaxss  xmm2, xmm1, xmm6
    }
    if ( _RDI )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+4]
        vmaxss  xmm1, xmm0, xmm2
        vmovss  dword ptr [rbx+4], xmm1
        vmovss  xmm2, dword ptr [rdi+0Ch]
        vminss  xmm0, xmm2, dword ptr [rsp+110h+vec+0Ch]
        vmovss  dword ptr [rbx+0Ch], xmm0
        vmovss  xmm1, dword ptr [rdi]
        vmaxss  xmm2, xmm1, xmm3
        vmovss  dword ptr [rbx], xmm2
        vmovss  xmm0, dword ptr [rdi+8]
        vminss  xmm1, xmm0, dword ptr [rsp+110h+vec+8]
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+110h+vec+0Ch]
        vmovss  xmm1, dword ptr [rsp+110h+vec+8]
        vmovss  dword ptr [rbx+0Ch], xmm0
        vmovss  dword ptr [rbx+4], xmm2
        vmovss  dword ptr [rbx], xmm3
      }
    }
    __asm
    {
      vmovss  dword ptr [rbx+8], xmm1
      vmovss  xmm0, dword ptr [rbx+4]
      vmovss  xmm1, dword ptr [rbx+0Ch]
      vmaxss  xmm3, xmm0, xmm6
      vmovss  xmm0, dword ptr [rbx]
      vmaxss  xmm2, xmm1, xmm6
      vcomiss xmm3, xmm2
      vmaxss  xmm1, xmm0, xmm6
      vmovss  xmm0, dword ptr [rbx+8]
      vmaxss  xmm4, xmm0, xmm6
      vmovss  dword ptr [rbx+8], xmm4
      vmovss  dword ptr [rbx+4], xmm3
      vmovss  dword ptr [rbx+0Ch], xmm2
      vmovss  dword ptr [rbx], xmm1
    }
    if ( _RDI )
    {
      *(_QWORD *)&_RBX->left = 0i64;
      *(_QWORD *)&_RBX->right = 0i64;
    }
    else
    {
      __asm { vcomiss xmm1, xmm4 }
    }
    LUI_QuadCache_AddDrawListCommandInternal(localClientNum, (void (__fastcall *)(const void *))LUI_RenderImmediate_SetScissorRect, _RBX, 0x10ui64, 4ui64);
  }
  _R11 = &v52;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-20h]
    vmovaps xmm7, xmmword ptr [r11-30h]
    vmovaps xmm8, xmmword ptr [r11-40h]
  }
}

/*
==============
LUI_Render_PushUnitScale
==============
*/

void __fastcall LUI_Render_PushUnitScale(double unitScale)
{
  int v3; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm0
  }
  if ( !LUI_IsInBuildDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 470, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  v3 = s_numUnitScaleActive + 1;
  s_numUnitScaleActive = v3;
  if ( v3 > 2 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 472, ASSERT_TYPE_ASSERT, "(s_numUnitScaleActive <= 2)", (const char *)&queryFormat, "s_numUnitScaleActive <= LUI_MAX_NESTED_UNIT_SCALE") )
      __debugbreak();
    v3 = s_numUnitScaleActive;
  }
  _RCX = v3 - 1;
  _RAX = s_unitScaleStack;
  __asm
  {
    vmovss  dword ptr [rax+rcx*4], xmm6
    vmovaps xmm6, [rsp+48h+var_18]
  }
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
void LUI_Render_Send2DQuadRenderCommand(const vec2_t *verts, LUIQuadUV *uv, const vec4_t *color, const GfxImage *image, Material *material, float glitchAmount, float unitScale, float blurAmount, unsigned __int16 samplerState, const LUIColorOpData *colorOp, const int scopeIndex, const bool applyScopeBufferWeight, const int flags)
{
  char v25; 
  char v26; 
  bool v34; 
  GfxPixelFormat format; 
  int v36; 
  float outT1; 
  float outT1a; 
  __int64 minS; 
  float minSa; 
  float v93; 
  float v94; 
  float v95; 
  float v96; 
  float v97; 
  float outS1; 
  float outT0; 
  float outS0; 

  __asm
  {
    vmovss  xmm1, [rsp+108h+unitScale]; unitScale
    vmovss  xmm0, [rsp+108h+glitchAmount]; intensity
  }
  _RBX = uv;
  _RBP = verts;
  __asm { vmovaps [rsp+108h+var_98], xmm11 }
  LUI_Render_ApplyGlitch(*(double *)&_XMM0, *(double *)&_XMM1);
  __asm
  {
    vmovss  xmm1, [rsp+108h+blurAmount]; scale
    vmovss  xmm0, cs:s_blurAmount
    vucomiss xmm0, xmm1
    vxorps  xmm11, xmm11, xmm11
  }
  if ( !v26 )
  {
    __asm
    {
      vcomiss xmm1, xmm11
      vmovss  cs:s_blurAmount, xmm1
    }
    R_AddCmdSetUIBlur(!(v25 | v26), *(const float *)&_XMM1);
  }
  LUI_Render_ApplyColorOp(colorOp);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rbx+4]
    vmovss  [rsp+108h+outS0], xmm0
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+108h+outS1], xmm1
    vmovss  xmm1, dword ptr [rbx+0Ch]
    vmovss  [rsp+108h+outT0], xmm0
    vmovss  [rsp+108h+var_A8], xmm1
  }
  Image_Process2DTextureCoordsForAtlasing(image, &outS0, &outS1, &outT0, &v97);
  v34 = 0;
  if ( !LUI_IsInExecDrawList() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 853, ASSERT_TYPE_ASSERT, "(LUI_IsInExecDrawList())", (const char *)&queryFormat, "LUI_IsInExecDrawList()") )
    __debugbreak();
  if ( s_useRTT )
  {
    format = image->format;
    v34 = (unsigned int)(format - 1) <= 2 || format == GFX_PF_BC4;
  }
  R_AddCmdUISetCodeSampler(samplerState, v34);
  R_AddCmdSetCodeTexture(4u, image);
  if ( scopeIndex >= 0 || applyScopeBufferWeight )
  {
    v36 = 0;
    if ( scopeIndex > 0 )
      v36 = scopeIndex;
    R_AddCmdUISetScopeIndex(v36, applyScopeBufferWeight);
  }
  if ( (flags & 0x10) != 0 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+8]
      vmovss  xmm1, dword ptr [rbp+0Ch]
      vsubss  xmm5, xmm1, dword ptr [rbp+4]
      vmovss  xmm1, dword ptr [rbp+1Ch]
      vsubss  xmm2, xmm1, dword ptr [rbp+4]
      vmovaps [rsp+108h+var_48], xmm6
      vsubss  xmm6, xmm0, dword ptr [rbp+0]
      vmovss  xmm0, dword ptr [rbp+18h]
      vsubss  xmm4, xmm0, dword ptr [rbp+0]
      vmulss  xmm3, xmm2, xmm2
      vmovaps [rsp+108h+var_58], xmm7
      vmovss  xmm7, [rsp+108h+outS0]
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm1, xmm3, xmm0
      vmulss  xmm2, xmm5, xmm5
      vmovaps [rsp+108h+var_68], xmm8
      vmovss  xmm8, [rsp+108h+outT0]
      vmulss  xmm0, xmm6, xmm6
      vaddss  xmm2, xmm2, xmm0
      vmovaps [rsp+108h+var_78], xmm9
      vmovss  xmm9, [rsp+108h+outS1]
      vsqrtss xmm0, xmm2, xmm2; X
      vmovaps [rsp+108h+var_88], xmm10
      vmovss  xmm10, [rsp+108h+var_A8]
      vsqrtss xmm1, xmm1, xmm1; Y
    }
    *(float *)&_XMM0 = fminf(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vmovaps xmm6, xmm0
      vsubss  xmm0, xmm9, xmm7; X
      vsubss  xmm1, xmm10, xmm8; Y
    }
    *(float *)&_XMM0 = fminf(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vmovss  xmm1, cs:__real@40000000
      vmulss  xmm3, xmm0, [rsp+108h+extraParam]
      vdivss  xmm2, xmm1, xmm6
      vmovss  xmm6, cs:__real@3f800000
      vmulss  xmm0, xmm3, xmm2; val
      vmovaps xmm2, xmm6; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm2, cs:__real@3f79999a; outerRadius
      vsubss  xmm0, xmm6, xmm0
      vsubss  xmm1, xmm0, cs:__real@3ccccccd; innerRadius
    }
    R_AddCmdUISetPixelShapeParams(GFX_PIXEL_SHAPE_TYPE_CIRCLE, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovaps xmm10, [rsp+108h+var_88]
      vmovaps xmm9, [rsp+108h+var_78]
      vmovaps xmm8, [rsp+108h+var_68]
      vmovaps xmm7, [rsp+108h+var_58]
      vmovaps xmm6, [rsp+108h+var_48]
    }
  }
  __asm { vmovaps xmm11, [rsp+108h+var_98] }
  if ( _RBX->mode )
  {
    if ( _RBX->mode == ROTATED )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+20h]
        vmovss  xmm2, [rsp+108h+var_A8]
        vmovss  xmm3, dword ptr [rbx+18h]; scaleFinalS
        vmovss  xmm1, dword ptr [rbx+10h]; centerS
        vmovss  [rsp+108h+var_C0], xmm0
        vmovss  xmm0, [rsp+108h+outT0]
        vmovss  [rsp+108h+var_C8], xmm2
        vmovss  xmm2, [rsp+108h+outS1]
        vmovss  [rsp+108h+var_D0], xmm0
        vmovss  xmm0, [rsp+108h+outS0]
        vmovss  dword ptr [rsp+108h+var_D8], xmm2
        vmovss  xmm2, dword ptr [rbx+1Ch]
        vmovss  [rsp+108h+minS], xmm0
        vmovss  dword ptr [rsp+108h+outT1], xmm2
        vmovss  xmm2, dword ptr [rbx+14h]; centerT
      }
      R_AddCmdDrawStretchPicRotateST(_RBP, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, outT1, minSa, v93, v94, v95, v96, color, material);
    }
    else
    {
      LODWORD(minS) = (unsigned __int8)_RBX->mode;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 931, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected LUIQuadUVMode: %d", minS) )
        __debugbreak();
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, [rsp+108h+var_A8]
      vmovss  xmm3, [rsp+108h+outS1]; s1
      vmovss  xmm2, [rsp+108h+outT0]; t0
      vmovss  xmm1, [rsp+108h+outS0]; s0
      vmovss  dword ptr [rsp+108h+outT1], xmm0
    }
    R_AddCmdDrawQuadPicST(_RBP, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, outT1a, color, material);
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
  bool v22; 
  unsigned int v23; 
  __int64 v26; 
  char v35; 
  char v36; 
  bool v44; 
  bool v45; 
  GfxPixelFormat format; 
  float fmt; 
  float fmta; 
  __int64 minS; 
  float minSa; 
  float minSb; 
  float v80; 
  float v81; 
  float v82; 
  float v83; 
  float v84; 
  float v85; 
  float outT1; 
  float outS1; 
  float outT0; 
  float outS0; 
  BOOL v91; 
  vec4_t *v92; 
  Material *v93; 
  LUIColorOpData *v94; 
  vec4_t outPosition; 
  vec3_t vertsa; 

  v93 = material;
  _R14 = uv;
  v94 = (LUIColorOpData *)colorOp;
  _RBX = verts;
  v92 = (vec4_t *)color;
  if ( !image )
  {
    if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 986, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
      return;
    goto LABEL_3;
  }
  v22 = Stream_CheckImage(image, MIP3);
  CL_UIStreaming_TouchImage(image);
  v23 = (unsigned int)flags >> 6;
  LOBYTE(v23) = (flags & 0x40) != 0;
  v91 = v23;
  if ( has3DTransforms )
  {
    if ( v22 )
    {
      __asm { vmovaps [rsp+190h+var_50], xmm6 }
      _RDI = &vertsa.v[1];
      __asm
      {
        vmovaps [rsp+190h+var_60], xmm7
        vmovss  xmm7, cs:__real@3f800000
      }
      v26 = 4i64;
      __asm { vxorps  xmm6, xmm6, xmm6 }
      do
      {
        LUI_Render_ApplyParallax((const vec4_t *)_RBX, &outPosition, &parallaxAmount);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+90h+outPosition+0Ch]
          vucomiss xmm0, xmm6
        }
        if ( v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1025, ASSERT_TYPE_ASSERT, "(tempVert[3] != 0.0f)", (const char *)&queryFormat, "tempVert[3] != 0.0f") )
          __debugbreak();
        __asm
        {
          vdivss  xmm3, xmm7, dword ptr [rbp+90h+outPosition+0Ch]
          vmulss  xmm1, xmm3, dword ptr [rbp+90h+outPosition]
          vmulss  xmm0, xmm3, dword ptr [rbp+90h+outPosition+4]
          vmulss  xmm2, xmm3, dword ptr [rbp+90h+outPosition+8]
          vmovss  dword ptr [rdi-4], xmm1
          vmovss  dword ptr [rdi], xmm0
          vmovss  dword ptr [rdi+4], xmm2
        }
        _RDI += 3;
        _RBX = (const vec4_t (*)[4])((char *)_RBX + 16);
        --v26;
      }
      while ( v26 );
      __asm
      {
        vmovss  xmm1, [rbp+90h+unitScale]; unitScale
        vmovss  xmm0, [rbp+90h+glitchAmount]; intensity
      }
      LUI_Render_ApplyGlitch(*(double *)&_XMM0, *(double *)&_XMM1);
      __asm
      {
        vmovss  xmm1, [rbp+90h+blurAmount]; scale
        vmovss  xmm0, cs:s_blurAmount
        vucomiss xmm0, xmm1
        vmovaps xmm7, [rsp+190h+var_60]
      }
      if ( !v36 )
      {
        __asm
        {
          vcomiss xmm1, xmm6
          vmovss  cs:s_blurAmount, xmm1
        }
        R_AddCmdSetUIBlur(!(v35 | v36), *(const float *)&_XMM1);
      }
      LUI_Render_ApplyColorOp(v94);
      __asm
      {
        vmovss  xmm0, dword ptr [r14]
        vmovss  xmm1, dword ptr [r14+4]
        vmovss  [rsp+190h+outS0], xmm0
        vmovss  xmm0, dword ptr [r14+8]
        vmovss  [rsp+190h+outS1], xmm1
        vmovss  xmm1, dword ptr [r14+0Ch]
        vmovss  [rsp+190h+outT0], xmm0
        vmovss  [rsp+190h+outT1], xmm1
      }
      Image_Process2DTextureCoordsForAtlasing(image, &outS0, &outS1, &outT0, &outT1);
      v44 = 0;
      v45 = LUI_IsInExecDrawList();
      __asm { vmovaps xmm6, [rsp+190h+var_50] }
      if ( !v45 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 853, ASSERT_TYPE_ASSERT, "(LUI_IsInExecDrawList())", (const char *)&queryFormat, "LUI_IsInExecDrawList()") )
        __debugbreak();
      if ( s_useRTT )
      {
        format = image->format;
        v44 = (unsigned int)(format - 1) <= 2 || format == GFX_PF_BC4;
      }
      R_AddCmdUISetCodeSampler(samplerState, v44);
      R_AddCmdSetCodeTexture((unsigned __int8)v26 + 4, image);
      if ( scopeIndex >= 0 )
        R_AddCmdUISetScopeIndex(scopeIndex, v91);
      if ( _R14->mode )
      {
        if ( _R14->mode == ROTATED )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [r14+20h]
            vmovss  xmm2, [rsp+190h+outT1]
            vmovss  xmm3, dword ptr [r14+18h]; scaleFinalS
            vmovss  xmm1, dword ptr [r14+10h]; centerS
            vmovss  dword ptr [rsp+190h+var_148], xmm0
            vmovss  xmm0, [rsp+190h+outT0]
            vmovss  dword ptr [rsp+190h+var_150], xmm2
            vmovss  xmm2, [rsp+190h+outS1]
            vmovss  [rsp+190h+var_158], xmm0
            vmovss  xmm0, [rsp+190h+outS0]
            vmovss  dword ptr [rsp+190h+var_160], xmm2
            vmovss  xmm2, dword ptr [r14+1Ch]
            vmovss  [rsp+190h+minS], xmm0
            vmovss  dword ptr [rsp+190h+fmt], xmm2
            vmovss  xmm2, dword ptr [r14+14h]; centerT
          }
          R_AddCmdDraw3DStretchPicRotateST(&vertsa, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, minSa, v80, v82, v84, v85, v92, v93);
        }
        else
        {
          LODWORD(minS) = (unsigned __int8)_R14->mode;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 976, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected LUIQuadUVMode: %d", minS) )
LABEL_3:
            __debugbreak();
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, [rsp+190h+outT1]
          vmovss  xmm3, [rsp+190h+outS1]; s1
          vmovss  xmm2, [rsp+190h+outT0]; t0
          vmovss  xmm1, [rsp+190h+outS0]; s0
          vmovss  dword ptr [rsp+190h+fmt], xmm0
        }
        R_AddCmdDraw3DQuadPicST(&vertsa, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, v92, v93);
      }
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, [rbp+90h+parallaxAmount]; parallaxAmount
      vxorps  xmm1, xmm1, xmm1
      vcomiss xmm0, xmm1
      vmovss  xmm0, dword ptr [rbx]
      vmovss  xmm1, dword ptr [rbx+4]
      vmovss  dword ptr [rbp+90h+verts], xmm0
      vmovss  xmm0, dword ptr [rbx+10h]
      vmovss  dword ptr [rbp+90h+verts+4], xmm1
      vmovss  xmm1, dword ptr [rbx+14h]
      vmovss  dword ptr [rbp+90h+verts+8], xmm0
      vmovss  xmm0, dword ptr [rbx+20h]
      vmovss  [rbp+90h+var_94], xmm1
      vmovss  xmm1, dword ptr [rbx+24h]
      vmovss  [rbp+90h+var_90], xmm0
      vmovss  xmm0, dword ptr [rbx+30h]
      vmovss  [rbp+90h+var_8C], xmm1
      vmovss  xmm1, dword ptr [rbx+34h]
      vmovss  [rbp+90h+var_88], xmm0
      vmovss  [rbp+90h+var_84], xmm1
    }
    if ( v22 || (flags & 0x10) != 0 )
    {
      __asm
      {
        vmovss  xmm0, [rbp+90h+extraParam]
        vmovss  xmm1, [rbp+90h+unitScale]
        vmovss  [rsp+190h+var_128], xmm0
        vmovss  xmm0, [rbp+90h+blurAmount]
        vmovss  [rsp+190h+var_158], xmm0
        vmovss  xmm0, [rbp+90h+glitchAmount]
        vmovss  dword ptr [rsp+190h+var_160], xmm1
        vmovss  [rsp+190h+minS], xmm0
      }
      LUI_Render_Send2DQuadRenderCommand((const vec2_t *)&vertsa, _R14, color, image, material, minSb, v81, v83, samplerState, v94, scopeIndex, v23, flags);
    }
    else
    {
      LUI_Render_SendSpinnerRenderCommand((const vec2_t *)&vertsa);
    }
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
  const dvar_t *v18; 
  const GfxImage *v19; 
  const dvar_t *v24; 
  const dvar_t *v26; 
  const dvar_t *v34; 
  const dvar_t *v44; 
  const dvar_t *v53; 
  float fmt; 
  vec2_t vertsa; 
  char v93; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
  }
  _RBX = verts;
  SpinnerMaterial = LUI_CoD_GetSpinnerMaterial();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+10h]
    vsubss  xmm1, xmm0, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rbx+14h]
    vmovss  xmm6, cs:__real@3f000000
    vmulss  xmm1, xmm1, xmm6
    vaddss  xmm8, xmm1, dword ptr [rbx]
    vsubss  xmm1, xmm0, dword ptr [rbx+4]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm9, xmm2, dword ptr [rbx+4]
  }
  v18 = DCONST_DVARFLT_lui_streaming_spinner_width;
  v19 = SpinnerMaterial;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rcx
    vmulss  xmm7, xmm0, cs:__real@3ab60b61
  }
  if ( !DCONST_DVARFLT_lui_streaming_spinner_width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_streaming_spinner_width") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  __asm { vmulss  xmm10, xmm7, dword ptr [rbx+28h] }
  v24 = DCONST_DVARFLT_lui_streaming_spinner_height;
  if ( !DCONST_DVARFLT_lui_streaming_spinner_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_streaming_spinner_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v24);
  __asm { vmulss  xmm0, xmm7, dword ptr [rbx+28h] }
  v26 = DCONST_DVARINT_lui_streaming_spinner_frame_count;
  __asm
  {
    vmulss  xmm3, xmm0, xmm6
    vsubss  xmm1, xmm9, xmm3
    vmulss  xmm2, xmm10, xmm6
    vsubss  xmm4, xmm8, xmm2
    vaddss  xmm0, xmm2, xmm8
    vmovss  dword ptr [rsp+0D8h+verts+4], xmm1
    vmovss  [rsp+0D8h+var_8C], xmm1
    vaddss  xmm1, xmm3, xmm9
    vmovss  [rsp+0D8h+var_84], xmm1
    vmovss  [rsp+0D8h+var_7C], xmm1
    vmovss  dword ptr [rsp+0D8h+verts], xmm4
    vmovss  [rsp+0D8h+var_90], xmm0
    vmovss  [rsp+0D8h+var_88], xmm0
    vmovss  [rsp+0D8h+var_80], xmm4
  }
  if ( !DCONST_DVARINT_lui_streaming_spinner_frame_count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_streaming_spinner_frame_count") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  _EDI = v26->current.integer;
  v34 = DCONST_DVARFLT_lui_streaming_spinner_frame_rate;
  if ( !DCONST_DVARFLT_lui_streaming_spinner_frame_rate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_streaming_spinner_frame_rate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v34);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vmovd   xmm6, edi
    vcvtdq2ps xmm6, xmm6
    vdivss  xmm0, xmm6, dword ptr [rbx+28h]
    vroundss xmm1, xmm1, xmm0, 2
    vmulss  xmm0, xmm1, cs:__real@447a0000
    vcvttss2si ebx, xmm0
  }
  _EDX = Sys_Milliseconds() % _EBX;
  __asm { vmovd   xmm1, ebx }
  v44 = DCONST_DVARINT_lui_streaming_spinner_frame_width;
  __asm
  {
    vmovd   xmm0, edx
    vcvtdq2ps xmm0, xmm0
    vmulss  xmm2, xmm0, xmm6
    vcvtdq2ps xmm1, xmm1
    vdivss  xmm3, xmm2, xmm1
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm0, xmm0, xmm3, 1
    vcvttss2si r14d, xmm0
  }
  if ( !DCONST_DVARINT_lui_streaming_spinner_frame_width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_streaming_spinner_frame_width") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v44);
  v53 = DCONST_DVARINT_lui_streaming_spinner_frame_height;
  if ( !DCONST_DVARINT_lui_streaming_spinner_frame_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_streaming_spinner_frame_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v53);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, r8d
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, edx
    vdivss  xmm7, xmm1, xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, eax
    vdivss  xmm6, xmm2, xmm0
  }
  R_AddCmdSetCodeTexture(4u, v19);
  __asm
  {
    vxorps  xmm3, xmm3, xmm3
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm3, xmm3, edi
    vcvtsi2ss xmm0, xmm0, ebx
    vdivss  xmm3, xmm3, xmm0
    vaddss  xmm5, xmm3, xmm6
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm4, xmm4, xmm4
    vcvtsi2ss xmm0, xmm0, esi
    vcvtsi2ss xmm4, xmm4, ebp
    vdivss  xmm3, xmm4, xmm0
    vaddss  xmm3, xmm3, xmm7; s1
    vmovaps xmm2, xmm6; t0
    vmovaps xmm1, xmm7; s0
    vmovss  dword ptr [rsp+0D8h+fmt], xmm5
  }
  R_AddCmdDrawQuadPicST(&vertsa, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, &colorWhite, s_luiMaterials[1]);
  _R11 = &v93;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
LUI_Render_SendTextRenderCommand
==============
*/
void LUI_Render_SendTextRenderCommand(const char *text, int maxChars, GfxFont *font, int internalFontSize, const vec4_t (*verts)[4], char tracking, float rotation, const vec4_t *color, Material *textMaterial, Material *iconsMaterial, bool tintIcons, const FontDecodeStyle *fontDecodeStyle, const FontGlowStyle *fontGlowStyle, float glitchAmount, float unitScale, float blurAmount, float parallaxAmount, const LUIColorOpData *colorOp, bool has3DTransforms)
{
  bool v26; 
  bool v27; 
  bool usePost; 
  bool v37; 
  bool v38; 
  __int64 v40; 
  float *v41; 
  int MinHeightForDistanceField; 
  float xScale; 
  float xScalea; 
  float xScaleb; 
  float v87; 
  float v88; 
  float v89; 
  float v90; 
  float v91; 
  float v92; 
  float v93; 
  float glowStyle; 
  float glowStylea; 
  vec4_t result; 
  tmat44_t<vec4_t> outMatrix; 
  vec3_t points; 
  char v102; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  _EBX = internalFontSize;
  _RSI = verts;
  if ( internalFontSize )
  {
    v26 = internalFontSize == 0;
    if ( internalFontSize > 0 )
      goto LABEL_9;
  }
  else
  {
    if ( !font && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1102, ASSERT_TYPE_ASSERT, "(font)", (const char *)&queryFormat, "font") )
      __debugbreak();
    Com_Printf(13, "Text render font %s size is 0. The font pixelHeight is %d \n", font->fontName, (unsigned int)font->pixelHeight);
  }
  v27 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_render.cpp", 1107, ASSERT_TYPE_ASSERT, "(internalFontSize > 0)", (const char *)&queryFormat, "internalFontSize > 0");
  v26 = !v27;
  if ( v27 )
    __debugbreak();
LABEL_9:
  __asm
  {
    vmovss  xmm6, [rbp+80h+blurAmount]
    vmovss  xmm1, [rbp+80h+unitScale]; unitScale
    vmovss  xmm0, [rbp+80h+glitchAmount]; intensity
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm6, xmm7
  }
  usePost = !v26;
  LUI_Render_ApplyGlitch(*(double *)&_XMM0, *(double *)&_XMM1);
  __asm
  {
    vmovss  xmm0, cs:s_blurAmount
    vucomiss xmm0, xmm6
  }
  if ( !v26 )
  {
    __asm
    {
      vmovaps xmm1, xmm6; scale
      vmovss  cs:s_blurAmount, xmm6
    }
    R_AddCmdSetUIBlur(usePost, *(const float *)&_XMM1);
  }
  LUI_Render_ApplyColorOp(colorOp);
  if ( has3DTransforms )
  {
    __asm
    {
      vmovss  xmm6, [rbp+80h+parallaxAmount]
      vmovaps xmm0, xmm6; parallaxAmount
    }
    LUI_GetCurrentParallaxMatrix(*(float *)&_XMM0, &outMatrix);
    _RBX = &points.v[2];
    v40 = 4i64;
    v41 = &(*verts)[0].v[2];
    do
    {
      __asm { vcomiss xmm6, xmm7 }
      if ( v37 || v38 )
      {
        *(_RBX - 2) = *(v41 - 2);
        *(_RBX - 1) = *(v41 - 1);
        *_RBX = *v41;
      }
      else
      {
        LUI_Matrix_MultiplyVector(&outMatrix, (const vec4_t *)_RSI, &result);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+80h+result]
          vmovss  xmm1, dword ptr [rbp+80h+result+4]
          vmovss  dword ptr [rbx-8], xmm0
          vmovss  xmm0, dword ptr [rbp+80h+result+8]
          vmovss  dword ptr [rbx], xmm0
          vmovss  dword ptr [rbx-4], xmm1
        }
      }
      _RSI = (const vec4_t (*)[4])((char *)_RSI + 16);
      _RBX += 3;
      v41 += 4;
      v37 = v40-- == 0;
      v38 = v40 == 0;
    }
    while ( v40 );
    MinHeightForDistanceField = FontCache_GetMinHeightForDistanceField();
    __asm
    {
      vmovss  xmm0, [rbp+80h+var_6C]
      vsubss  xmm3, xmm0, dword ptr [rbp+80h+points]
      vmovss  xmm1, [rbp+80h+var_68]
      vsubss  xmm2, xmm1, dword ptr [rbp+80h+points+4]
      vmovss  xmm0, [rbp+80h+var_64]
      vsubss  xmm4, xmm0, dword ptr [rbp+80h+points+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vmovss  xmm0, cs:__real@3f800000
      vsqrtss xmm5, xmm2, xmm2
      vdivss  xmm1, xmm0, xmm1
      vmulss  xmm2, xmm5, xmm1
      vmovss  [rsp+190h+var_160], xmm2
      vmovss  [rsp+190h+xScale], xmm2
    }
    R_AddCmdDrawText3DUI(text, font, textMaterial, MinHeightForDistanceField, &points, xScale, v87, tracking, color, fontDecodeStyle, fontGlowStyle, iconsMaterial);
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vmovss  xmm1, dword ptr [rsi+4]
      vmovss  xmm5, dword ptr [rsi+30h]
      vmovss  xmm4, dword ptr [rsi+34h]
      vmovss  xmm6, cs:__real@3f800000
      vsubss  xmm2, xmm0, xmm5
      vsubss  xmm0, xmm1, xmm4
      vmulss  xmm3, xmm0, xmm0
      vmulss  xmm2, xmm2, xmm2
      vaddss  xmm1, xmm3, xmm2
      vmovd   xmm3, ebx
      vcvtdq2ps xmm3, xmm3
      vsqrtss xmm2, xmm1, xmm1
      vsubss  xmm0, xmm2, xmm3
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcvtss2sd xmm0, xmm0, xmm0
      vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
      vmovss  xmm0, [rbp+80h+parallaxAmount]; parallaxAmount
      vcomiss xmm0, xmm7
      vmovss  dword ptr [rbp+80h+result], xmm5
      vmovss  dword ptr [rbp+80h+result+4], xmm4
      vmovss  xmm0, [rbp+80h+rotation]
    }
    if ( fontDecodeStyle )
    {
      __asm
      {
        vmovss  dword ptr [rsp+190h+glowStyle], xmm0
        vmovss  dword ptr [rsp+190h+var_150], xmm6
        vmovss  dword ptr [rsp+190h+var_158], xmm6
        vmovss  [rsp+190h+var_160], xmm4
        vmovss  [rsp+190h+xScale], xmm5
      }
      R_AddCmdDrawTextWithEffects(text, 0x7FFFFFFF, font, textMaterial, _EBX, xScalea, v88, v90, v92, tracking, glowStyle, color, fontDecodeStyle, fontGlowStyle, usePost, iconsMaterial, tintIcons);
    }
    else
    {
      __asm
      {
        vmovss  dword ptr [rsp+190h+glowStyle], xmm0
        vmovss  dword ptr [rsp+190h+var_150], xmm6
        vmovss  dword ptr [rsp+190h+var_158], xmm6
        vmovss  [rsp+190h+var_160], xmm4
        vmovss  [rsp+190h+xScale], xmm5
      }
      R_AddCmdDrawText(text, 0x7FFFFFFF, font, textMaterial, _EBX, xScaleb, v89, v91, v93, tracking, glowStylea, color, fontGlowStyle, usePost, tintIcons, 0, iconsMaterial);
    }
  }
  _R11 = &v102;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

